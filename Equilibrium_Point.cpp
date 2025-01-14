int findEquilibrium(vector<int> &arr) {
        int total = 0;
       for(int a : arr){
           total += a;
       }
       int pre = 0;
       for(int i = 0; i<arr.size(); ++i){
           pre += arr[i];
           total -= arr[i];
           if(pre-arr[i] == total){
               return i;
           }
           
       }
       return -1;
    }
