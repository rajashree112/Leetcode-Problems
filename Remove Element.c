int removeElement(int* nums, int numsSize, int val) {
    int length = numsSize, flag =0, duplicate = 0;
    for (int i=0; i < numsSize; i++) {
        if (flag == 0 && nums[i] == val) {
            length--;
            duplicate++;
            flag = 1;
        }
        else if (flag == 1 && nums[i] == val) {
            duplicate++;
            length--;
        }
        else if (nums[i] !=val) {
            nums[i-duplicate] = nums[i];
            flag = 0;
        }
    }
    return length;
}
