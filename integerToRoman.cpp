class Solution {
public:
    int peak(string s, char target ){
        for(int i=0; i< s.size(); i++){
            if(s[i]==target){
                return i;
            }
        }
        return -1;
    }
    int romanToInt(string s) {
        string sample="MDCLXVI";
        int value[7]={1000,500,100,50,10,5,1};
        int sm =0;
        int temp = value[peak(sample,s[0])];
        int t =0;
        
        for(int i=1; i< s.size(); i++){
            int top=peak(sample,s[i]);
            t =value[top];
            if(temp<t){
                sm-=temp;
            }
            else{
                sm+=temp;
            }
            temp =t;
             
            
            
            
        }
        sm+=temp;
        return sm;
    }
};