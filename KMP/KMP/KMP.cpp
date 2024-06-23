#include "KMP.h"

String* String_init(void)
{
    String* string = (String*)malloc(sizeof(String));

    if(string == NULL)
    {
        printf("Empty!\n");
        exit(0);
    }
    string -> data = NULL;
    string -> len  = 0;

    return string;
}


void String_assign(String* string , char* data)
{
    if(string -> data)
    {
        free(string -> data);
    }

    int len = 0;
    char* temp = data;
    while(*temp)
    {
        len++;
        temp++;
    }

    if(len == 0)
    {
        string -> len  = 0;
        string -> data = NULL;
        return ;
    }
    temp = data;
    string -> len = len;
    string -> data = (char*)malloc(sizeof(char) * (len + 1));

    for(int i = 0; i < len; i++ , temp++)
    {
        string -> data[i] = *temp;
    }
}

static inline int* String_build_next(String* string)
{
    int* next = (int*)malloc(sizeof(int) * string -> len);

    int i = 0;
    int j = -1;
    next[i] = j;

    while(i < (string -> len - 1))
    {
        if(j == -1 || string -> data[i] == string ->data[j])
        {
            next[++i] = ++j;
            continue;
        }
        j = next[j];
    }
    return next;
}

void String_KMP(String* string , String* substring)
{
    int* next = String_build_next(substring);

    int i = 0;
    int j = 0;

    while(i < string -> len && j < substring -> len)
    {
        if(j < 0 || string -> data[i] == substring -> data[j])
        {
            i++;
            j++;
            continue;
        }
        j = next[j];
    }

    if(j == substring -> len)
    {
        printf("KMP success\n");
        return ;
    }
    printf("KMP fail\n");

}

static inline void string_print_next(int* next , int len)
{
    for(int i = 0; i < len; i++)
    {
        printf(i == 0 ? "%d" : "->%d" , next[i]);
    }
    printf("\n");    
}

void String_print(String* string , String* substring)
{
    for(int i = 0; i < string -> len; i++)
    {
        printf(i == 0 ? "%c" : "->%c" , string -> data[i]);
    }
    printf("\n");
    for(int i = 0; i < substring -> len; i++)
    {
        printf(i == 0 ? "%c" : "->%c" , substring -> data[i]);
    }
    printf("\n");

    int* next = String_build_next(substring);
    string_print_next(next , substring -> len);
}


