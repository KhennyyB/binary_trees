#include "binry_trees.h"

/**
 *
 *
 *
 */

void tree_stats(const binary_tree_t *tree, size_t n,
		size_t *leaf, sie_t *height)
{
	if (tree!= NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			if (leaves != NULL)
			{
				(*leaves)++;
			}
			if ((height != NULL) && (n > *height))
			{
				*height = n;
			}
		}
		else
		{
			tree_stats(tree->left, n + 1, leaves, height);
			tree_stats(tree->right, n + 1, leaves, height);
		}
	}
}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer to root
 *
 * Return: 1 if perfect, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

}
