
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;

        if (x!=0 && x%10==0)
            return false;

        int reverse = 0;

        while (x > reverse ) {
            reverse = reverse *10 + x%10;
            x=x/10;
        }


        if (x == reverse)
        {
            return true;
        }
        if (x==reverse/10)
        {
            return true;
        }
        return false;
    }
};
