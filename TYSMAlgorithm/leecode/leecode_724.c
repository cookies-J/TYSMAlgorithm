//
//  leecode_724.c
//  TYSMAlgorithm
//
//  Created by jele lam on 8/12/2019.
//  Copyright © 2019 CookiesJ. All rights reserved.
//

#include "leecode_724.h"

int count(int *nums,int numSize) {
    int total_count = 0;
    for (int idx = 0; idx < numSize; idx++) {
        total_count += nums[idx];
    }
    return total_count;
}

int pivotIndex(int * nums,int numsSize) {
    for (int idx = 0; idx < numsSize; idx ++) {
        int left = count(nums, idx);
        int right = count(nums, numsSize) - left - nums[idx];
        if (left == right) {
            return idx;
        }
    }
    return -1;
}

void run_leecode_724(void) {
    printf("=========== 运行 leecode_724 ========\n");
    int nums[] = {1,7,3,6,5,6};
    int size = sizeof(nums) / sizeof(*nums);
    
    int index = pivotIndex(nums, size);
    if (index != -1) {
        printf("Found:\t nums[%d] = %d\n",index,nums[index]);
    } else {
        printf("Not Found! %d\n",index);
    }
}
