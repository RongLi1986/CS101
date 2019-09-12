/*
Last Position of Target

Find the last position of a target number in a sorted array. Return -1 if target does not exist.

Have you met this question in a real interview? Yes
Example
Given [1, 2, 2, 4, 5, 5].

For target = 2, return 2.

For target = 5, return 5.

For target = 6, return -1.
*/


/*
binary search template
*/

#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @param A an integer array sorted in ascending order
     * @param target an integer
     * @return an integer
     */
    int lastPosition(vector<int>& A, int target) {
        // Write your code here
        if(A.empty()) return -1;
        if(A[A.size()-1]==target) return A.size()-1;
        int left = 0;
        int right = A.size()-1;
        
        while(left+1<right){
            int mid = (left + right)/2;
            if(A[mid]<=target){
                left = mid;
            }else{
                right =mid;
            }
        }
        
        if(A[left]==target)
            return left;
        return -1;
    }
};


int main(){

	return 0;
}