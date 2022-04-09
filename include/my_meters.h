/*
** EPITECH PROJECT, 2021
** Remastered 'My' Library
** File description:
** Meters header file
*/

#pragma once

#include <stddef.h>
#include <stdint-gcc.h>
#include "my_strings.h"

/**
 * Get the length of a string.
 * @param string
 * @return the length of the passed string.
 */
size_t my_strlen(char const *string);

/**
 * Get the visual length of an integer value associated to a base.
 * @param number
 * @param base_array string containing the digits of the base.
 * @return the visual length of the passed number in the passed base
 *          or -1 if the base is empty.
 */
size_t my_intlen_base(int32_t number, char const *base_array);

/**
 * Get the visual length of an unsigned integer value associated to a base.
 * @param number
 * @param base_array string containing the digits of the base.
 * @return the visual length of the passed number in the passed base
 *          or -1 if the base is emtpy.
 */
size_t my_uintlen_base(uint32_t number, char const *base_array);

/**
 * Get the visual length of a decimal integer value.
 * @param number
 * @return the visual length of the passed decimal number.
 */
size_t my_intlen(int32_t number);
