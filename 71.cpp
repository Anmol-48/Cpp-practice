// leetcode Problem 
// There is a class with m students and n exams. You are given a 0-indexed m x n integer matrix score, where each row represents one student and score[i][j] denotes the score the ith student got in the jth exam. The matrix score contains distinct integers only.

// You are also given an integer k. Sort the students (i.e., the rows of the matrix) by their scores in the kth (0-indexed) exam from the highest to the lowest.

// Return the matrix after sorting it.
// Input: score = [[10,6,9,1],[7,5,11,2],[4,8,3,15]], k = 2
// Output: [[7,5,11,2],[10,6,9,1],[4,8,3,15]]
// Explanation: In the above diagram, S denotes the student, while E denotes the exam.
// - The student with index 1 scored 11 in exam 2, which is the highest score, so they got first place.
// - The student with index 0 scored 9 in exam 2, which is the second highest score, so they got second place.
// - The student with index 2 scored 3 in exam 2, which is the lowest score, so they got third place.



class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int row=score.size();
        int col=score[0].size();

        vector<int> m;
        int pos;

        for(int i=0;i<row;i++)
        {
            m.resize(1);
            m=score[i];
            pos=i;

            for(int j=i+1;j<row;j++)
            {
                if(score[j][k]>=m[k]){
                    m=score[j];
                    pos=j;
                }
            }

            if(pos!=i){
                m=score[pos];
                score[pos]=score[i];
                score[i]=m;
            }
        }

        return score;
    }
};
