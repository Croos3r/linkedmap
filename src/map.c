/*
** EPITECH PROJECT, 2022
** Linked map library
** File description:
** Project main file
*/

#include <stdlib.h>
#include "map.h"

list_t *create_map(char *key, void *value)
{
    property_t *property = create_property(key, value);

    if (property == NULL)
        return NULL;
    return create_list(property);
}

void destroy_map(list_t *map)
{
    free_list(&map, &destroy_property);
}
