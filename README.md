<div align=center>  
    <img  
    style="text-align:center"  
    src="https://raw.githubusercontent.com/coding-max/hbtn_config/main/assets/head_low-level.png"  
    alt="Holberton School"/>  
</div>

# C - argc, argvC - Binary trees

# Resources

Read or watch:

* [Binary tree (note the first line: Not to be confused with B-tree.)](https://en.wikipedia.org/wiki/Binary_tree)
* [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
* [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
* [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
* [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

# Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# General

What is a binary tree<br>
What is the difference between a binary tree and a Binary Search Tree<br>
What is the possible gain in terms of time complexity compared to linked lists<br>
What are the depth, the height, the size of a binary tree<br>
What are the different traversal methods to go through a binary tree
What is a complete, a full, a perfect, a balanced binary tree

# Requirements

- General
  <br>Allowed editors: vi, vim, emacs
  <br>
  All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

# More Info
* Data structures<br>
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.
# Basic Binary Tree
````
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
````
# Binary Search Tree
````
typedef struct binary_tree_s bst_t;
````
# AVL Tree
````
typedef struct binary_tree_s avl_t;
````
# Max Binary Heap
````
typedef struct binary_tree_s heap_t;
````
# Print function

To match the examples in the tasks, you are given this [function](https://github.com/hs-hq/0x1C.c)<br>
This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction

# Example
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20221129094006/Treedatastructure.png">

## Author

*  https://github.com/melekmoalla