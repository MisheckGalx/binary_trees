# Binary Tree Project

## Project Overview

This project, developed by Alexandre Gautier, focuses on building a foundation in Software Engineering. The main topic is binary trees, specifically delving into C programming, algorithms, and data structures.

## Project Details

### Group Members
- Misheck Gogo
- Brian Musakwa

![ALT TEXT](https://d14b9ctw0m6fid.cloudfront.net/ugblog/wp-content/uploads/2020/09/Picture1-1.jpg)


### Learning Objectives
By the end of this project, you should be able to explain:

1. What is a binary tree?
2. The difference between a binary tree and a Binary Search Tree.
3. The time complexity gain compared to linked lists.
4. The concepts of depth, height, and size of a binary tree.
5. Different traversal methods for binary trees.
6. Characteristics of complete, full, perfect, and balanced binary trees.

### Technical Requirements
- Editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc.
- Coding standards: Betty style.
- Use of specified data structures and types for binary trees.
- README.md file at the root of the project folder is mandatory.
- No global variables allowed.
- Maximum of 5 functions per file.
- Use of standard library is allowed.
- Prototypes of functions in a header file named binary_trees.h.
- Header files should be include gua

## Getting Started

To begin the project, follow the provided guidelines and utilize the specified data structures for binary trees. Ensure adherence to coding standards and push all required files to the project repository.

## Additional Resources
- Read or watch recommended materials on binary trees, data structures, and algorithms.

## Note
The provided print function is for visualization purposes only and does not need to be included in the repository. It won't be used during the correction process.


Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are allowed to use the standard library
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called binary_trees.h
Don’t forget to push your header file
All your header files should be include guarded
GitHub
There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

More Info
Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

Basic Binary Tree
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
Binary Search Tree
typedef struct binary_tree_s bst_t;
AVL Tree
typedef struct binary_tree_s avl_t;
Max Binary Heap
typedef struct binary_tree_s heap_t;
Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.

Print function
To match the examples in the tasks, you are given a function

The function is used only for visualization purposes. It doesn’t need to be pushed into this repo. It may not be used during the correction
