class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int result =0;
        int current_floor=0;
        for(int i =0;i<requests.size();i++){
            result += abs(current_floor-requests[i]);
            current_floor = requests[i];
        }

        return result;
    }
};