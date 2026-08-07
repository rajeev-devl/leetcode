int averageValue(int* nums, int numsSize) {
    int a=0,count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%3==0 && nums[i]%2==0){
            a += nums[i];
            count++;
        }
    }if(count==0){
        return count;
    }
    int avg = a/count;
    return avg;
}