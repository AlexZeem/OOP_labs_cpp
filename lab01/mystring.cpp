#include <cstring>
#include "mystring.h"

int substr(char* string1, char* string2)
{
    if (strlen(string2) > strlen(string1)) {
        return -1;
    }

    if (strlen(string1) == strlen(string2)) {
        return 0;
    }

    char* pch = strstr(string1, string2);
    for (size_t i = 0; i < strlen(string1); ++i) {
        if (*pch == string1[i]) {
            return i;
        }
    }

    return -1;
}

char* compact(char *string)
{
    char* result = string;

    size_t j = 0;
    for (size_t i = 0; i < strlen(string); ++i) {
        if (result[j] != string[i]) {
            ++j;
            result[j] = string[i];
        }
    }
    result[++j] = '\0';

    return result;
}

int subseq(char *string1, char *string2)
{
    size_t longerLength = (strlen(string2) > strlen(string1)) ? strlen(string2) : strlen(string1);
    size_t count = (strlen(string2) < strlen(string1)) ? strlen(string2) : strlen(string1);
    bool seq = false;
    int prev = 0;
    int next = 0;

    for (size_t i = 0; i < longerLength; ++i) {
        size_t j = i;
        for (size_t k = 0; k < count && j < longerLength; ++k) {
            if (string2[j] == string1[k]) {
                if (!seq) {
                    seq = true;
                    next = 1;
                } else {
                    ++next;
                }
                ++j;
            } else {
                if (seq) {
                    seq = false;
                    if (prev < next) {
                        prev = next;
                    }
                }
            }
        }
    }

    int result = 0;
    if (prev < next) {
        result = next;
    } else {
        result = prev;
    }
    return result;
}

int addword(char *word, char *arr, int size)
{
    return -1;
}

char* sort(char** strings, int size)
{
    char* result;

    return result;
}

bool ispal(char* string)
{
    return false;
}

char* makepal(char* string)
{
    char* result = string;

    return result;
}

double* txt2double(char* string, int* size)
{
    double* result = 0;

    return result;
}
