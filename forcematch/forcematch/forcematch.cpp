#include "forcematch.h"

String* String_init(void)
{
    String* string = (String*)malloc(sizeof(String));

    if(string == NULL)
    {
        printf("Empty!\n");
        exit(0);
    }

    string -> data = NULL;
    string -> len = 0;
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
        string -> data = NULL;
        string -> len  = 0;
        return ;
    }

    temp = data;
    string -> len = len;
    string -> data = (char*)malloc(sizeof(char) * (len + 1));
    if(string -> data == NULL)
    {
        printf("malloc error!\n");
        exit(0);
    }
    for(int i = 0; i < len; i++ , temp++)
    {
        string -> data[i] = *temp;
    }
}

void Forcematch(String* master , String* sub)
{
    int i = 0;
    int j = 0;

    while(i < master -> len && j < sub -> len)
    {
        if(master -> data[i] == sub -> data[j])
        {
            i++;
            j++;
            continue;
        }
        i = i - j + 1;
        j = 0;
    }

    if(j == sub -> len)
    {
        printf(" Force match success!\n");
        return ;
    }
    printf(" Force match fail!\n");
}

void String_print(String* string)
{
    for(int i = 0; i < string -> len; i++)
    {
        printf(i == 0 ? "%c" : "->%c" , string -> data[i]);
    }
    printf("\n");
}






