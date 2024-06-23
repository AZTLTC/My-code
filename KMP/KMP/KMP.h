#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string>


typedef struct String 
{
    char* data;
    int len;
}String;

String* String_init(void);
void String_assign(String* string , char* data);
void String_KMP(String* string , String* substring);
void String_print(String* string , String* substring);


