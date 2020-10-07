#include <stdio.h>

int totalHammingDistance(int* nums, int numsSize)
{
    int distance = 0 ;
    int bit1[32] = {0} , bit0[32] = {0} ;
    for (int i = 0 ; i < numsSize ; i++){
        for (int j = 0 ; j < 32 ; j++){
            ( nums[i] >> j ) & 1 ? bit1[j]++ : bit0[j]++ ;
        }
    }
    for (int i = 0 ; i < 32 ; i++)
        distance += bit1[i] * bit0[i] ;

    return distance ;
}

int main()
{

    int nums[] = {4, 14, 2} ;

    printf("%d\n",totalHammingDistance(nums, 3)) ;

    return 0 ;
}
