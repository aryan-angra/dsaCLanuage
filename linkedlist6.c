#include<stdio.h>
#include<stdlib.h>
 
/**
 * The structure for the polynomial
 * This is a linked list with two variable
 * int coeff The Coefficient
 * int pow The power of x
 */
typedef struct link {
    int coeff;
    int pow;
    struct link * next;
} my_poly;
 
/** The prototypes */
void my_create_poly(my_poly **);
void my_show_poly(my_poly *);
 
/**
 * The simple menu driven main function
 */
int main() {
     my_poly * poly1;
        my_create_poly(&poly1);
        my_show_poly(poly1);
   
    return 0;
}
 

void my_create_poly(my_poly ** node) {
    int flag; //A flag to control the menu
    int coeff, pow;
    my_poly * tmp_node; //To hold the temporary last address
    tmp_node = (my_poly *) malloc(sizeof(my_poly)); //create the first node
    *node = tmp_node; //Store the head address to the reference variable
    do {
        //Get the user data
        printf("\nEnter Coeff:");
        scanf("%d", &coeff);
        tmp_node->coeff = coeff;
        printf("\nEnter Pow:");
        scanf("%d", &pow);
        tmp_node->pow = pow;
        //Done storing user data
 
        //Now increase the Linked on user condition
        tmp_node->next = NULL;
 
        //Ask user for continuation
        printf("\nContinue adding more terms to the polynomial list?(Y = 1/N = 0): ");
        scanf("%d", &flag);
        //printf("\nFLAG: %c\n", flag);
        //Grow the linked list on condition
        if(flag) {
            tmp_node->next = (my_poly *) malloc(sizeof(my_poly)); //Grow the list
            tmp_node = tmp_node->next;
            tmp_node->next = NULL;
        }
    } while (flag);
}
 
void my_show_poly(my_poly * node) {
    printf("\nThe polynomial expression is:\n");
    while(node != NULL) {
        printf("%dx^%d", node->coeff, node->pow);
        node = node->next;
        if(node != NULL)
            printf(" + ");
    }
}