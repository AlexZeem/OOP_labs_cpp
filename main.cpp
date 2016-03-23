#include <iostream>
#include "lab01/mystring.h"

void stringtest()
{
    std::cout << "1. int substr(char *string1, char *string2)" << std::endl;
    char string1[] = "string";
    char string2[] = "string2";
    std::cout << "string1: "<< string1 << ";\tstring2: " << string2 << std::endl;
    std::cout << "result: " << substr(string1, string2) << std::endl;
    char string3[] = "string";
    std::cout << "string1: "<< string1 << ";\tstring2: " << string3 << std::endl;
    std::cout << "result: " << substr(string1, string3) << std::endl;
    char string4[] = "ring";
    std::cout << "string1: "<< string1 << ";\tstring2: " << string4 << std::endl;
    std::cout << "result: " << substr(string1, string4) << std::endl;

    std::cout << "2. char* compact(char *string)" << std::endl;
    char string5[] = "string";
    std::cout << "string: "<< string5 << std::endl;
    std::cout << "result: " << compact(string5) << std::endl;
    char string6[] = "stttriiinggg";
    std::cout << "string: "<< string6 << std::endl;
    std::cout << "result: " << compact(string6) << std::endl;
}

int main()
{
    stringtest();
    return 0;
}
