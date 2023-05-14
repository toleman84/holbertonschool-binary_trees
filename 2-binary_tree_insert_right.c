#include "binary_trees.h"

/**
 *
 *
 *
 *
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_s *newChild_right = NULL;

    newChild_right = malloc(sizeof(binary_tree_s));
    if (newChild_right = NULL)
    {
        return (NULL);
    }

    // padre es un puntero al nodo para insertar el hijo derecho
    // Y value es el valor a almacenar en el nuevo nodo
    // if el padre ya tiene un hijo derecho, el nuevo nodo debe tomar su lugar,
    // y el antiguo hijo derecho debe establecerse como hijo derecho del nuevo nodo.
    if ((*parent)->right)
    {
        (*parent)->newChild_right = value;
    }

    // Su función debe devolver un puntero al nodo creado, o NULL en caso de falla o si el padre es NULL
    return (newChild_right);
}
