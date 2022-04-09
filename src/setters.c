/*
** EPITECH PROJECT, 2022
** Linked map library
** File description:
** Setters for maps
*/

#include <stddef.h>
#include "map.h"
#include "my_strings.h"

bool set_map_property(list_t **map, char *key, char *value)
{
    if (map == NULL)
        return false;
    if (*map == NULL) {
        *map = create_map(key, value);
        return true;
    }
    for (list_t *current = *map; current != NULL; current = current->next) {
        if (my_strcmp(((property_t *) current->value)->key, key) == 0) {
            free(((property_t *) current->value)->value);
            ((property_t *) current->value)->value = my_strdup(value);
            return true;
        }
    }
    add_element(map, create_property(key, value));
    return true;
}

bool remove_map_property(list_t **map, char *key)
{
    list_t *previous;

    if (map == NULL)
        return false;
    if (*map == NULL)
        return false;
    for (list_t *current = *map; current != NULL; current = current->next) {
        if (my_strcmp(((property_t *) current->value)->key, key) == 0) {
            previous->next = current->next;
            current->next = NULL;
            free_list(&current, &destroy_property);
            return true;
        }
        previous = current;
    }
    return false;
}

bool remove_map_property_if(list_t **map, bool (* predicate)(property_t *prop))
{
    list_t *previous;

    if (map == NULL)
        return false;
    if (*map == NULL)
        return false;
    for (list_t *current = *map; current != NULL; current = current->next) {
        if (predicate((property_t *) current->value)) {
            previous->next = current->next;
            current->next = NULL;
            free_list(&current, &destroy_property);
            return true;
        }
        previous = current;
    }
    return false;
}
