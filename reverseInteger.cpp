class Solution {
public:
    int reverse(int x) {
        int rem =1;
        int num = 0;
        int i =0;
        
        while (x!=0){
            
            if (num > INT_MAX / 10 || num < INT_MIN / 10)
			return 0;
            
            rem = x%10;
            num =num*10 +rem;
            x/=10;
            i++;
            
        }
    
        return num;
        
    }
};