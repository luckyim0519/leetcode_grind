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
    // we are going to use the python method... for the ease of algorithm
    hash = {} 
    // key -> element in the nums array, value -> occurence frequency
    
    //initialize this hash map first
    for num in nums:
        hash[num] = 1  // initilize the frequency as 1 
    
    for num in nums:

        freq = hash[num]
        //end case where we end the function if the frequency is more than 1 
        if freq > 1:
            return True
        //if not, we will increment the frequency by 1 
        hash[num] += 1 
        // becareful when you freq = hash[num] this frequency will get affected which results in
        // undesirable result ! freq will be keep 1 ...! 
    //for the default case.  we are ending the fucntion as False 
    return False
   

   /* revision of the auto variable in c++ 
   
    auto vs auto & 

    auto -> when you need a local copy. This will never produce reference.
    The copy constructor must exist, but it might not get called due to the
    copy elision opitmization

    auto && when you don't care if the object is local or not.
    This will always produce a reference, but if the initializer is a 
    temporary (eg the function returns by value), it will behave essentially
    like the own local object.

    Also, this does not guarantee that the object will be modifiable.
    const cobject or reference it will deduce const. 

    auto& and auto & is a little more specific .
    
    auto& guarantees that you are sharing the variable with sth else.
    It is always a reference and never to a temporary.

    auto const & is like auto &&, but provide read-only access.
   
   */
    

   
