void swap (int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int* a, int low, int high) {
    
    int pivot = a[high];
    int j = low -1;
    int i = low;
    
    for (; i < high; i++) {
        if (a[i] <= pivot) {
            j += 1;
            swap(&a[i], &a[j]);
        }
    }
    swap (&a[j+1], &a[high]);
    return j+1;
}

void quick_sort (int* a, int low, int high) {
    
    if (low < high) {
        int pivot = partition(a, low, high);
        quick_sort (a, low, pivot -1);
        quick_sort (a, pivot+1, high);
    }
}


int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
 
    if (numsSize < 3) {
        int** r = (int**) malloc(sizeof(int*));
        *returnSize = 0;
        return r;
    }
    
    int** a = (int**) malloc(numsSize*numsSize* sizeof(int*));
    memset (a, 0, numsSize* sizeof(int*));
    int* size = (int*) malloc (numsSize*numsSize* sizeof(int));
    *returnSize = 0;
    
    int low = 1;
    int high = numsSize -1;
    
    quick_sort (nums, 0, numsSize-1);
    
    for (int i = 0; i < numsSize; i++) {
        if (i > 0 && nums[i-1] == nums[i])
            continue;
        low = i+1;
        high = numsSize -1;
        while (low < high) {
            if (nums[i] + nums[low] + nums[high] == 0) {
                a[*returnSize] = (int*) malloc (3*sizeof(int));
                memset(a[*returnSize], 0, 3*sizeof(int));
                a[*returnSize][0] = nums[i];
                a[*returnSize][1] = nums[low];
                a[*returnSize][2] = nums[high];
                size[*returnSize] = 3;
                *returnSize += 1;
                low ++;
                while (low < high && nums[low -1] == nums[low])
                    low ++;
            } else if (nums[i] + nums[low] + nums[high] > 0)
                high --;
            else if (nums[i] + nums[low] + nums[high] < 0)
                low ++;
        }
    }
    
    int** ret = (int**) realloc (a, (*returnSize)*sizeof(int*));
    *returnColumnSizes = (int*)realloc(size, (*returnSize)*sizeof(int));
        
    return ret;
}
