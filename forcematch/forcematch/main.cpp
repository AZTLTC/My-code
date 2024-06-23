#include "forcematch.h"

int main()
{
    String* string0 = String_init();
    String* string1 = String_init();

    String_assign(string0 , "HELLO");
    String_assign(string1 , "LLo");

    String_print(string0);
    String_print(string1);

    Forcematch(string0, string1);

    return 0;
}