class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        
        vector<pair<int, double>> cars;
        
        // Step 1: store position + time
        for(int i = 0; i < n; i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        
        // Step 2: sort by position descending
        sort(cars.begin(), cars.end(), greater<pair<int, double>>());
        
        stack<double> st;
        
        // Step 3: process cars
        for(auto &car : cars) {
            double currTime = car.second;
            
            // if stack empty OR new fleet
            if(st.empty() || currTime > st.top()) {
                st.push(currTime);
            }
            // else: merge → do nothing
        }
        
        return st.size();
    }
};