/*
** EPITECH PROJECT, 2022
** Remastered 'My' Library
** File description:
** String manipulation header file
*/

#pragma once

#include <stdlib.h>
#include <stdint-gcc.h>

char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, size_t n);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, size_t n);
char *my_strdup(char const *src);
char *my_strndup(char const *src, size_t n);

int my_strcmp(char const *str1, char const *str2);
int my_strncmp(char const *str1, char const *str2, size_t n);

char *my_strchr(char *str, char c);
char *my_strrchr(char *str, char c);
char *my_strstr(char *haystack, char const *needle);
char **my_strsplit(char const *str, char separator);
