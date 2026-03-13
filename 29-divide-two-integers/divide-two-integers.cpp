class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);

        long long s = 0, e = dvd, ans = 0;

        while(s <= e){
            long long mid = s + (e - s)/2;

            if(mid * dvs <= dvd){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }

        if((dividend < 0) ^ (divisor < 0))
            ans = -ans;

        return ans;
    }
};