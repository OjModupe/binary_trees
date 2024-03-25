#include "binary_trees_h"
/**
 * binary_trees_node - create a node
 * @parent: pointer to parent
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = malloc(sizeof(binary_tree_t));
	if (nodo == NULL)
	return (NULL);
	nodo->n = value;
	nodo->parent = parent;
	nodo->left = NULL;
	nodo->right =NULL;
	return (nodo);
}
