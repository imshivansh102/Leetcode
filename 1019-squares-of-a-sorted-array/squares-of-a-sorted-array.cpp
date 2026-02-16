class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n= nums.size();
        int i=0;
        int j=n-1;
        
        vector<int> result(n);
        int k=n-1; // points last position of result.

        while(k>=0){ // We are using two Pointer approach.
            int a=nums[i]*nums[i];
            int b=nums[j]*nums[j];

            if( a > b ){ // if a greater store a in result and increment i 
                result[k]=a; // storing elements from back side of vector.
                i++;
            }
            else{ // when b is greater or equal to a store b in result and decrement j.
                result[k]=b;
                j--;
            }
            k--;

        }
        return result;
        
    }
};