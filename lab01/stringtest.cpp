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
    {
        std::cout << "3. int subseq(char *string1, char *string2)" << std::endl;
        char string1[] = "string";
        char string2[] = "ring";
        std::cout << "string1: "<< string1 << ";\tstring2: " << string2 << std::endl;
        std::cout << "result: " << substr(string1, string2) << std::endl;
        char string3[] = "striiringgg";
        std::cout << "string1: "<< string1 << ";\tstring2: " << string3 << std::endl;
        std::cout << "result: " << substr(string1, string3) << std::endl;
        break;
    }
    case TEST_ADDWORD:
    {
        std::cout << "4. int addword(char *word, char *arr, int size)" << std::endl;
        char arr[] = "Hello\0World\0";
        char word1[] = "Holla";
        char word2[] = "World";
        std::cout << "arr: "<< arr << ";\tword: " << word1 << ";\tsize: " << 2 << std::endl;
        std::cout << "result: " << addword(word1, arr, 2) << " - overflow" << std::endl;
        std::cout << "arr: "<< arr << ";\tword: " << word2 << ";\tsize: " << 2 << std::endl;
        std::cout << "result: " << addword(word2, arr, 2) << " - exist" << std::endl;
        std::cout << "arr: "<< arr << ";\tword: " << word1 << ";\tsize: " << 3 << std::endl;
        std::cout << "result: " << addword(word1, arr, 3) << " - add" << std::endl;
        std::cout << "new arr: "<< arr << std::endl;
        break;
    }
    case TEST_SORT:
    {
        std::cout << "5. char* sort(char **strings, int size)" << std::endl;
        break;
    }
    case TEST_ISPAL:
    {
        std::cout << "6. bool ispal(char *string)" << std::endl;
        break;
    }
    case TEST_MAKEPAL:
    {
        std::cout << "7. char* makepal(char *string)" << std::endl;
        break;
    }
    case TEST_TXT_2_DOUBLE:
    {
        std::cout << "8. double* txt2double(char * , int *size)" << std::endl;
        break;
    }
    default: break;
    }
}
