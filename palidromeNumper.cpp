class Solution {
public:
    bool isPalindrome(int x) {
        if(x>INT_MAX || x<0)
                return false;
        // flag = false
        long int num =0;
        int ori =x;
        while(x!=0){
            num = num*10;
            if(num>INT_MAX )
                return false;
            
            num =(num)+(x%10);
            x/=10;
        }

        if (ori == num){
            return true;
        }
        else{
            return false;
        }
        
        
    }
        
};