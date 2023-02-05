class Solution {
    public int majorityElement(int[] nums) {
        int c=0;
        int ele=0;
        for(int num:nums)
        {
            if(c==0)
              ele=num;
            if(num==ele)
              c++;
            else
              c-=1;
        }
        return ele;
    }
}
