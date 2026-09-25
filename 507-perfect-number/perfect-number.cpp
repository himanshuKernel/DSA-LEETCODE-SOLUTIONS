class Solution {
public:
    bool checkPerfectNumber(int num) {
        //1 or less than 1 never be perfect no
        if (num<=1) return false;
        //1 is perfect divisor of every no
        int sum = 1;
        for(int i=2;i*i<=num;i++){
            if(num%i ==0){
               sum +=i;
               if((num/i) != i) sum +=num/i;
            }
        }
        return sum ==num;
    }
};