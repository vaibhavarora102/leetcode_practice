class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int lena, lenb;
        lena =a.size()-1;
        lenb =b.size()-1;
        int carry=0;   
       while(lena>=0||lenb>=0){
           int sum =carry;
           if(lena>=0) sum+= a[lena] - '0';
           if(lenb>=0) sum+= b[lenb] - '0';
           carry =sum>1 ? 1:0;
           result +=to_string(sum%2);
           lena--;
           lenb--;
       }       
        if(carry) result+=to_string(carry);          
        reverse(result.begin(),result.end());
        return result;        
    }
};
