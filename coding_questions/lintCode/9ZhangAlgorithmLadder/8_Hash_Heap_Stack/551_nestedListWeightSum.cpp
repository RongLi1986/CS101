/*
Nested List Weight Sum

 Description
 Notes
 Testcase
 Judge
Given a nested list of integers, return the sum of all integers in the list 
weighted by their depth. Each element is either an integer, or a list -- 
whose elements may also be integers or other lists.

Have you met this question in a real interview? Yes
Example
Given the list [[1,1],2,[1,1]], return 10. (four 1's at depth 2, one 2 at 
depth 1, 4 * 1 * 2 + 1 * 2 * 1 = 10)
Given the list [1,[4,[6]]], return 27. (one 1 at depth 1, one 4 at depth 2, 
and one 6 at depth 3; 1 + 42 + 63 = 27)
*/


/*

*/

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer,
 *     // rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds,
 *     // if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds,
 *     // if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    int depthSum(const vector<NestedInteger>& nestedList) {
        return helper(nestedList, 1);
    }
    
    int helper(const vector<NestedInteger>& nestedList, int levels){
        // Write your code here
        int sum = 0;
        
        for(int i=0;i<nestedList.size();i++){
            if(nestedList[i].isInteger()){
                sum  += levels * nestedList[i].getInteger();
            }else{
                sum += helper(nestedList[i].getList(), levels+1);
            }
            
        }
        
        //cout<<sum<<endl;
        
        return sum;
    }
};