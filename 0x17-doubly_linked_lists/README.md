0x17. C - Doubly linked lists

TASK  Print list
 function that prints all the elements of a dlistint_t list and returns the number of nodes -Prototype: size_t print_dlistint(const dlistint_t *h);
List length function that returns the number of elements in a linked dlistint_t list.
Prototype: size_t dlistint_len(const dlistint_t *h);

TASK  Add node
 function that adds a new node at the beginning of a dlistint_t list and returns the address of the new element, or NULL if it failed -Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);

TASK  Add node at the end
 function that adds a new node at the end of a dlistint_t list aND returns the address of the new element, or NULL if it failed -Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Free list function that frees a dlistint_t lis -Prototype: void free_dlistint(dlistint_t *head);

TASK  Get node at index
 function that returns the nth node of a dlistint_t linked list and where index is the index of the node, starting from 0 -if the node does not exist, return NULL --Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

TASK  Sum list
 function that returns the sum of all the data (n) of a dlistint_t linked list and if the list is empty, return 0 -Prototype: int sum_dlistint(dlistint_t *head);

TASK  Insert at index
 function that inserts a new node at a given position and rewturns the address of the new node, or NULL if it failed -if it is not possible to add the new node at index idx, do not add the new node and return NULL -Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

TASK  Delete at index
function that deletes the node at index index of a dlistint_t Tlinked list and where index is the index of the node that should be deleted. Index starts at 0
-Returns: 1 if it succeeded, -1 if it failed -Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
