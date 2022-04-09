/*
** EPITECH PROJECT, 2022
** Linked map library
** File description:
** Getters for maps
*/

#include <stddef.h>
#include "map.h"
#include "my_strings.h"

bool has_map_property(list_t *map, char *key)
{
    for (list_t *current = map; current != NULL; current = current->next) {
        if (my_strcmp(((property_t *) current->value)->key, key) == 0)
            return true;
    }
    return false;
}

char *get_map_property(list_t *map, char *key)
{
    if (!has_map_property(map, key) || map == NULL)
        return NULL;
    for (list_t *current = map; current != NULL; current = current->next) {
        if (my_strcmp(((property_t *) current->value)->key, key) == 0)
            return ((property_t *) current->value)->value;
    }
    return NULL;
}

char *get_map_property_or_default(list_t *map, char *key, char *default_value)
{
    char *value = get_map_property(map, key);

    if (value == NULL) {
        set_map_property(&map, key, default_value);
        return default_value;
    }
    return value;
}

char *pop_map_property(list_t *map, char *key)
{
    if (!has_map_property(map, key) || map == NULL)
        return NULL;
    for (list_t *current = map; current != NULL; current = current->next) {
        if (my_strcmp(((property_t *) current->value)->key, key) == 0) {
            remove_map_property(&map, key);
            return ((property_t *) current->value)->value;
        }
    }
    return NULL;
}
