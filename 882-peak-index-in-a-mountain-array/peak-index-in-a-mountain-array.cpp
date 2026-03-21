class Solution {
public:
    int findPeakIndex(vector<int> arr){
        int start=0;
        int end=arr.size()-1;
        int mid=(start+end)/2;

        while(start<end){
            if(arr[mid]<arr[mid+1]){ //search right side
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=(start+end)/2;
        }
        return start;//loop is running and when start and end are at same position then that element is peak then return start or end.
    }
    int peakIndexInMountainArray(vector<int>& arr) {

        return findPeakIndex(arr);
        
    }
};