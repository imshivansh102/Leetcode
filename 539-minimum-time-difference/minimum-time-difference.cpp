class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {

        vector<int> minutes;
        // convert all time string into minutes integer value
        for(int i=0; i<timePoints.size(); i++){
            string curr=timePoints[i];

            int hours=stoi(curr.substr(0,2));
            int min=stoi(curr.substr(3,2));
            int totalMinutes=hours*60 + min;
            minutes.push_back(totalMinutes);
        }

        sort(minutes.begin(), minutes.end()); // sort all minutes array.
        
        // calculating minimum difference between two minutes integer value.
        int mini=INT_MAX;
        int n=minutes.size();

        for(int i=0; i<n-1; i++){
            int difference=minutes[i+1] - minutes[i];
            mini = min(mini, difference);
        }
        // important case.
        int lastdiff = (minutes[0] + 1440) - minutes[n-1];
        mini = min(mini, lastdiff);

        return mini;
    }
};