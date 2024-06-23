#include "KMP.h"

int main()
{
    String* string0 = String_init();
    String* string1 = String_init();

    String_assign(string0 , "ABCABDE");
    String_assign(string1 , "FFEF");

    String_print(string0 , string1);

    String_KMP(string0 , string1);


    return 0;
}