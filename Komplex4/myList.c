/**
 ============================================================================
 Name        : @file 		myList.c
 Author      : @author 		Daniyal Ibrahim
 Date		 : @date		27.10.2020
 Version     : @version 	1.0
 Description : @brief 		Aufgabe 4.3 Dynamic Data Structures (Linked List)
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "../komplex4.h"

/**
 * @see emplInfo
 * a structure with an employee object as an attribute and a next node structure
 * to point at the next element in the list
 */
struct node {
  emplInfo data;
  struct node * next; /** THE next node is a pointer to the next node in linked list*/
};

/**
 *  A struct for linked list, contains pointer to head node
 */
struct list {
  Node * head; /** The node is a pointer to the head node in linked list */
};
/**
 * A function to create a node
 * @param data
 * @return Node pointer
 */
Node * createnode(emplInfo data);

/**
 * A function to create a new node
 * @param	emplInfo data
 * @see 	Node
 * @return 	Node*
 */
Node * createnode(emplInfo data){
  Node * newNode = malloc(sizeof(Node));
  if (!newNode) {
    return NULL;
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

/**
 * A function to create a linked list
 * @return List *
 */
List * makelist(){
  List * list = malloc(sizeof(List));
  if (!list) {
    return NULL;
  }
  list->head = NULL;
  return list;
}
/**
 * display the linked list
 * @param 	List
 * @see 	struct List
 * @return 	void
 */
void display(List * list) {
  Node * current = list->head;
  if(list->head == NULL)
    return;

  for(; current != NULL; current = current->next) {
	  printf("_________________\n|Employee:\t|\n");
	  printf("|ID: %d \t|, \n|Name: %s |, \n|Salary: %1.2f |\n", current->data.pID,current->data.name,current->data.salary);
	  printf("_________________ \n\t|\n\t|\n");
  }
}
/**
 * add a new employee to a node
 * @param emplInfo data
 * @param List* list
 * @return void
 */
void add(emplInfo data, List * list){
  Node * current = NULL;
  if(list->head == NULL){
    list->head = createnode(data);
  }
  else {
    current = list->head;
    while (current->next!=NULL){
      current = current->next;
    }
    current->next = createnode(data);
  }
}
/**
 * delete the node using employee id
 * @param 	emplInfo
 * @param	List*
 * @return 	void
 */
void delete(emplInfo data, List * list){
  Node * current = list->head;
  Node * previous = current;
  while(current != NULL){
    if(current->data.pID == data.pID){
      previous->next = current->next;
      if(current == list->head)
        list->head = current->next;
      free(current);
      return;
    }
    previous = current;
    current = current->next;
  }
}

/**
 * delete the complete list
 * @param 	List
 * @return void
 */
void destroy(List * list){
  Node * current = list->head;
  Node * next = current;
  while(current != NULL){
    next = current->next;
    free(current);
    current = next;
  }
  free(list);
}

