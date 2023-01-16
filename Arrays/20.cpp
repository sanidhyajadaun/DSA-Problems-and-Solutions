class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) 
    {
        // sorting the both vectors
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());

        // to count the number of moves
        int count=0;

        // to count no. of moves of every student
        for(int i=0;i<seats.size();i++)
        {
            count += abs(seats[i]-students[i]);
        }

        // returning the total no. of moves
        return count;
    }
};