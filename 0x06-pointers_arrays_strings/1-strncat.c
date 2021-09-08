#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: poninter to destination string
 * @src: pointer to the source string
 * @n: numder of bytes to print
 * Return: pointer to the resulting string dest
 */

 char *_strncat(char *dest, char *src, int n)
 {
     int i, j;

     i = 0;
     for (j = 0; dest [j] != '\0'; j++);
     while (src [i] != '\0' && i < n)
     {
         dest[j + i] = src[i];
         i++;
     }
     return (dest);
 }
