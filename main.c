
//demonstrates local variables within blocks

#include <stdio.h>

int main(void)
{
    //define a variable local to main()
    int count = 0;

    printf("\nOutside the block, count = %d", count);

    //start block... "{" indicates the start of block and "}" indicates the end of block
    {
        //define a variable local to the block
        int count = 999;
        printf("\nWithin the block, count = %d", count);
    }

    //back outside the block again
    printf("\nOutside the block again, count = %d\n", count);

    return 0;
}
