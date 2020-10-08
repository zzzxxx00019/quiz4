#include <stdio.h>

int totalHammingDistance(int *nums, int numsSize)
{
    if (!nums || !numsSize) return 0 ;
    
    int distance = 0 ;
    int bit1[32] = {0} ;    

    for (int i = 0 ; i < numsSize ; i++){;
        while(nums[i]){
            bit1[ __builtin_ctz(nums[i]) ] ++ ;
            nums[i] ^= nums[i] & -nums[i] ;
        }
    }

    for (int i = 0 ; i < 32 ; i++ ){
        distance += bit1[i] * (numsSize - bit1[i]) ;
    }

    return distance ;
}

int main()
{
    int nums[] = {4, 14, 2} ;
    printf("%d\n",totalHammingDistance(nums, 3)) ;

    return 0 ;
}
