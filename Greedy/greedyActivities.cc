
#include<bits/stdc++.h>
using namespace std;

//liked the way of declaring 
//of Activity datatype, instead of int float
//vector<Activity> activities(n);

struct Activity {
    int start;
    int end;
};

bool compare(Activity a, Activity b) {
    return a.end < b.end; // Sort activities by end time
}

int maxActivities(vector<Activity>& activities) {
    sort(activities.begin(), activities.end(), compare); // Sort activities by end time
    
    int count = 1; // Select the first activity
    int last_end_time = activities[0].end;
    
    for (int i = 1; i < activities.size(); i++) {
        if (activities[i].start >= last_end_time) {
            count++;
            last_end_time = activities[i].end; // Update the last end time to the current activity's end time
        }
    }
    
    return count;
}

int main() {
    int n;
    cout << "Enter the number of activities: ";
    cin >> n;
    
    vector<Activity> activities(n);
    cout << "Enter the start and end times of each activity:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> activities[i].start >> activities[i].end;
    }

    int result = maxActivities(activities);
    cout << "Maximum number of activities that can be performed: " << result << endl;

    return 0;
}




/*
Problem: Activity Selection Problem
Description:
You are given n activities with their start and end times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Example:
Input:

n = 6
activities = [{start: 1, end: 2}, {start: 3, end: 4}, {start: 0, end: 6}, {start: 5, end: 7}, {start: 8, end: 9}, {start: 5, end: 9}]
Output:

4 (Explanation: The selected activities are {1,2}, {3,4}, {5,7}, {8,9})
Input:

n = 4
activities = [{start: 1, end: 3}, {start: 2, end: 4}, {start: 3, end: 5}, {start: 0, end: 6}]
Output:

2 (Explanation: The selected activities are {1,3}, {3,5})*/