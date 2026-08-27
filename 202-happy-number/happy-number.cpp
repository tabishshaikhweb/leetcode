class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        while(n!=1 && n!=4)
        {
            sum=0;
            while(n>0)
            {
                int u=n%10;
                sum+=(u*u);
                n=n/10;
            }
            n=sum;
        }
        if(n==1) return true;
        else return false;
    }
};