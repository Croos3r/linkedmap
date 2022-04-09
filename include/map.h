/*
** EPITECH PROJECT, 2022
** Linked map library
** File description:
** Main header file of the project
*/

#pragma once

#include <stdbool.h>
#include "list.h"

typedef struct property {
    char *key;
    char *value;
} property_t;

list_t *create_map(char *key, void *value);
void destroy_map(list_t *map);

property_t *create_property(char *key, char *value);
void destroy_property(property_t *property);
bool set_map_property(list_t **map, char *key, char *value);
char *get_map_property(list_t *map, char *key);
char *get_map_property_or_default(list_t *map, char *key, char *default_value);
bool has_map_property(list_t *map, char *key);
bool remove_map_property(list_t **map, char *key);
bool remove_map_property_if(list_t **map, bool (* predicate)(property_t *prop));
char *pop_map_property(list_t *map, char *key);
