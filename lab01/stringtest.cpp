#include <iostream>
#include "stringtest.h"
#include "mystring.h"

void stringtest(TestCase item)
{
    switch (item) {
    case TEST_SUBSTR: {
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
        break;
    }
    case TEST_COMPACT: {
        std::cout << "2. char* compact(char *string)" << std::endl;
        char string1[] = "string";
        std::cout << "string: "<< string1 << std::endl;
        std::cout << "result: " << compact(string1) << std::endl;
        char string2[] = "stttriiinggg";
        std::cout << "string: "<< string2 << std::endl;
        std::cout << "result: " << compact(string2) << std::endl;
        break;
    }
    case TEST_SUBSEQ:
    case TEST_ADDWORD:
    case TEST_ISPAL:
    case TEST_MAKEPAL:
    case TEST_TXT_2_DOUBLE:
    default: break;
    }
}
