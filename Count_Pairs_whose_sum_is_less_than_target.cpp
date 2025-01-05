class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
       sort(begin(arr),end(arr));
       int left = 0;
       int count = 0;
       int right = arr.size()-1;
       while(left < right){
           if(arr[left]+arr[right] < target){
               count += right-left;
               left++;
               
           }
           else{
               right--;
           }
       }
       return count;
    }
};
