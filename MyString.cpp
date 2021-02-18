#include "MyString.h"

unsigned int strLen(const char* str) {
    int lenS = 0;
    while (str[lenS] != '\0')
       lenS++;
    return lenS;
}

void strCpy(char *dest, const char *source) {
    int lenS = 0, lenS2 = 0;
  
   while (dest[lenS] != '\0') {
       dest[lenS] = 0;
       lenS++;
    }
   
    while (source[lenS2] != '\0') {
       dest[lenS2] = source[lenS2];
       lenS2++;
    }
}

void strCat(char *dest, const char *source) {
    int lenS = 0, j = 0;
    while (dest[lenS] != '\0') {
        lenS++;
    }

    while (source[j] != '\0') {
        dest[lenS] = source[j];
        j++;
        lenS++;
    }
}

void strReverse(char *str) {
    int lenS = 0;
    char tmp;
    while (str[lenS] != '\0') lenS++;
    for (int j = 0; j < lenS/2; j++) {
        tmp = str[j];
        str[j] = str[lenS-j-1];
        str[lenS-j-1] = tmp;
    }
}

void strToUpper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if( (str[i] >= 'a') && (str[i] <= 'z'))
           str[i] = str[i] - 32;
        i++;
    }
}

void strToLower(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if( (str[i] >= 'A') && (str[i] <= 'Z'))
           str[i] = str[i] + 32;
        i++;
    }
}

int strCmp(const char *str1, const char *str2) {
    int i = 0;
    while ((str1[i] != '\0') && (str2[i] != '\0')) {
        if (str1[i] == str2[i]) i++;
        if (str1[i] < str2[i]) return -1;
        if (str1[i] > str2[i]) return 1;
    }
    return 0;
}

int strStr(const char *str, const char *substr) {
    int i = 0, lenS2 = 0, first = 0, j, k;

    while (substr[lenS2] != '\0') lenS2++; 
    while  (str[i+lenS2-1] != '\0') {
        if (str[i] == substr[0]) {
            first = i;
            k = i;
            for (j = 0; j < lenS2; ++j)
                if (str[k] == substr[j])  k++;
                else break;
        };
        if (j  == lenS2)
            break;
        else first = -1;
        i++;
    }
    return first;
}