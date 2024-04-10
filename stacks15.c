#include <stdio.h>
 
void towers(int, char, char, char);
 
int main()
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char fromrod, char torod, char auxrod)
{
    // Base Condition if no of disks are
    if (num == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", fromrod, torod);
        return;
    }
 
    // Recursively calling function twice
    towers(num - 1, fromrod, auxrod, torod);
    printf("\n Move disk %d from rod %c to rod %c", num, fromrod, torod);
    towers(num - 1, auxrod, torod, fromrod);
}