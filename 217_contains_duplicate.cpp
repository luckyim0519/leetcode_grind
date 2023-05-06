#include <iostream>
#include <vector>
#include <unordered_map>

    std::vector<int> nums {1,2,3,4,4};

    /* 
        method 1 
        This approach  is the brutal approach where I have started off first

        >> using the nested while loops,

        this algorithm is the brutal force, where it will
        experience the runtime error.
        Time complexity is O(n^2)
        Space complexity is O(1)
    */

    int slow = 0;
    int fast = 1;

    while( slow < nums.size() ){
        while( fast < nums.size()){
            if (nums[slow] == nums[fast]){
                return 1;
            }
            fast += 1; 
        }
        slow += 1;
        fast = slow + 1;
    }
    return 0;
    /* 
        method 2
        This approach  is the brutal approach where I have started off first
        I just realized that we can convert the while loop into for loop,
        but the idea is the same.
        >> using the nested for loops instead of while loop

        this algorithm is the brutal force, where it will
        experience the runtime error.
        Time complexity is O(n^2)
        Space complexity is O(1)
    */

   for(int slow = 0; slow < nums.size(); ++i){
        for(int fast = slow+1; fast < nums.size(); ++j){
            if(nums[slow] == nums[fast]){
                return 1;
            }
        }
   }
   return 0;

    /*
        method 3 
        This approach is the hashmap or unordered map ( in c++ ) approach to incrase the 
        time complexity, which will get rid of runtime error.

        >> using the unordered_map

        Time complexity is O(n log n)
        Space complexity is O(n)
    */

   


   
