//
// Created by ARmi on 2022/8/6.
//
#include<stdio.h>
#define LEN 7

void MergeSort(int nums[], int left, int right);
/**
 * Merge two subArrays, one is nums[left,mid] and another is nums[mid+1,right]
 * @param nums array
 * @param left
 * @param mid
 * @param right
 */
void Merge(int nums[], int left, int mid, int right);

int main() {
    int dict[LEN] = {38,27,43,3,9,82,10};

    MergeSort(dict,0,LEN - 1);

    return 0;
}

void MergeSort(int nums[], int left, int right){
    if(left == right) {
        return;
    }

    int mid = (left + right) / 2;

    MergeSort(nums,left,mid - 1);

    MergeSort(nums,mid+1,right);

    Merge(nums,left,mid,right);
}

void Merge(int nums[], int left, int mid, int right){
    /**
     * Create two temporary arrays
     * Using VLA (variable-length arrays)
     */

    // copy the left subarray
    int left_size = mid - left + 1;
    int nums_left[left_size];
    for (int i = 0; i < left_size; i++) {
        nums_left[i] = nums[left + i];
    }

    // copy the right subarray
    int right_size = right - mid;
    int nums_right[right_size];
    for (int i = 0; i < right_size; i++) {
        nums_right[i] = nums[mid + 1 + i];
    }


    int left_index = 0;
    int right_index = 0;
    int current_index = left;

    // merge two ordered subarray
    while (left_index < left_size && right_index < right_size) {
        if (nums_left[left_index] <= nums_right[right_index]) {
            nums[current_index] = nums_left[left_index];
            left_index++;
        } else {
            nums[current_index] = nums_right[right_index];
            right_index++;
        }

        current_index++;
    }

    // add the left elements to the end
    while (left_index < left_size) {
        nums[current_index] = nums_left[left_index];
        left_index++;
        current_index++;
    }

    while (right_index < right_size) {
        nums[current_index] = nums_right[right_index];
        right_index++;
        current_index++;
    }
}