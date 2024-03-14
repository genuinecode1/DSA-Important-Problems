

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-


class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int start=0;
        int end = size-1;
        int maxi = 0;
        while(start<end){
            if(height[start]<=height[end]){
            int temp = abs(end-start)*height[start];
            maxi = max(maxi,temp);
            start++;
            }
            else{
            int temp = abs(end-start)*height[end];
            maxi = max(maxi,temp);
            end--;
            }
        }
      return maxi;
    }
};