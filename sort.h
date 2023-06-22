/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

int _putchar(char c); /* Outputs to stdout */
void print_array(const int *array, size_t size); /* Prints an array of integers */
void print_list(const listint_t *list); /* Prints a list of integers */
void bubble_sort(int *array, size_t size); /* Bubble sort algorithm */
void insertion_sort_list(listint_t **list); /* Insertion sort algorithm */
void selection_sort(int *array, size_t size); /* Selection sort algorithm */
void quick_sort(int *array, size_t size); /* Quick sort algorithm */
void shell_sort(int *array, size_t size); /* Shell sort algorithm */
void cocktail_sort_list(listint_t **list); /* Cocktail shaker sort algorithm */
void counting_sort(int *array, size_t size); /* Counting sort algorithm */
void merge_sort(int *array, size_t size); /* Merge sort algorithm */
void heap_sort(int *array, size_t size); /* Heap sort algorithm */
void radix_sort(int *array, size_t size); /* Radix sort algorithm */
void bitonic_sort(int *array, size_t size); /* Bitonic sort algorithm */
void quick_sort_hoare(int *array, size_t size); /* Quick sort algorithm */
void sort_deck(deck_node_t **deck); /* Sorts a deck of cards (qsort) */

typedef enum kind_e
{
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
    const char *value;
    const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;
