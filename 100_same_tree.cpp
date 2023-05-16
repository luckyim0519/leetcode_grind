// This is the simplest recursion approach

// recursion happens when the return of the  function is the function or
// calling the its own function inside the function


/*
    This is the best solution that I found.
    
    1. you need to use the return isSameTree to traverse the
    both branches. If you do not use the return only one bracn will traverse.
    
    2. you need to use if condition to check whether the node is matching
    if they are not matching straight return the false
     -case 1 : if either one node is NULL , then return false
     -case 2 : if p.val != q.val, then return false
     
     condition for true
     -case 1 : if p == q , then traverse it
     -case 2 : if both p and q are nullptr, then return true
*/
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p != NULL and q != NULL){
            std::cout << p->val  << "," << q->val << std::endl;
        }
        //base case -> return true ...
        if(p == NULL and q == NULL){
            return true;
        }
        //base case-> return false ...
        if(p == NULL ^ q == NULL){
            return false;            
        }
        
        if(p->val == q->val){
            return isSameTree(p->right, q->right) && isSameTree(p->left,q->left) ;   
        }
        
        return false;
        
    }
    /*
        this pyuthon code  is not passing 9 test cases ...
        needs to be debugged with logic maybe!
    */
 
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool: 
        #BASE CASE
        if p == q :
            return True
        elif p == None and q == None:
            return True
        elif p != q or( p == None ^ q == None): 
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
        