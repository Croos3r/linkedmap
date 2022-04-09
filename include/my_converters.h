/*
** EPITECH PROJECT, 2021
** Remastered 'My' Library
** File description:
** Converters header file
*/

#pragma once

#include <stdint-gcc.h>
#include "my_strings.h"

/**
 * Convert an integer value associated to a base to it's string representation.
 * @param number
 * @param base_array string containing the digits of the base
 * @return the string representation of the passed integer value associated to
 *         the passed base or NULL if the base is empty.
 */
char *my_itoa_base(int32_t nbr, char const *base_array);

/**
 * Convert a decimal integer to it's string representation.
 * @param number
 * @return the string representation of the passed decimal integer.
 */
char *my_itoa(int32_t nbr);
