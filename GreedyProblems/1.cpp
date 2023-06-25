class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> meets;
        
        for(int i=0;i<n;i++){
            meets.push_back(make_pair(end[i],start[i]));
        }
        sort(meets.begin(),meets.end());
        int lastmeeting = -1;
        int noOfMeeting = 0;
        for(int i=0;i<n;i++)
        {
            if(meets[i].second > lastmeeting){
                lastmeeting = meets[i].first;
                noOfMeeting++;
            }
        }
        return noOfMeeting;
        
    }
};
