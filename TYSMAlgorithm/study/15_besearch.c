//
//  15_besearch.c
//  TYSMAlgorithm
//
//  Created by jele lam on 8/12/2019.
//  Copyright © 2019 CookiesJ. All rights reserved.
//

#include "15_besearch.h"

/**
@param nums         元素
@param left         起始位置
@param right        结束位置
@param value        查找的值
@return 返回所在的索引 left～right ，没有找到则返回 -1
*/

int binary_search_recursion(int *nums, int left, int right, int value) {
    if (left > right) {
        return -1;
    }
    
    int mid = left + ((right - left) >> 1);
    if (nums[mid] == value) {
        return mid;
    }
    
    if (nums[mid] < value) {
        return binary_search_recursion(nums, mid+1, right, value);
    }
    
    if (nums[mid] > value) {
        return binary_search_recursion(nums, left, mid-1, value);
    }
    return 0;
}

/**
 @param nums        元素
 @param len         长度
 @param value       查找的值
 @return 返回所在的索引 0～len ，没有找到则返回 -1
 */
int binary_search(int *nums, int len, int value) {
    int left = 0;
    int right = len-1;
    while (left <= right) {
        int mid = left + ((right - left)>>1);
        
        if (nums[mid] == value) {
            return mid;
        }
        
        if (nums[mid] < value) {
            left = mid + 1;
            continue;
        }
        
        if (nums[mid] > value) {
            right = mid - 1;
            continue;
        }
        
    }
    return -1;
}


void run_besearch(void) {
    printf("=========== 运行 15_besearch ========\n");

    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(nums)/sizeof(*nums);
    
    int result = binary_search(nums, size, 9);
    printf("【循环】查找的值：%d || 索引：%d\n",nums[result],result);
    
    int result_recursion = binary_search_recursion(nums, 0, size, 10);
    printf("【递归】查找的值：%d || 索引：%d\n",nums[result_recursion],result_recursion);
}
