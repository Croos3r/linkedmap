/*
** EPITECH PROJECT, 2022
** Linked map library
** File description:
** Property related utilities
*/

#include <stdlib.h>
#include "map.h"

property_t *create_property(char *key, char *value)
{
    property_t *property = malloc(sizeof(property_t));

    if (property == NULL)
        return NULL;
    property->key = key;
    property->value = value;
    return property;
}

void destroy_property(property_t *property)
{
    if (property == NULL)
        return;
    free(property->key);
    free(property->value);
    free(property);
}
