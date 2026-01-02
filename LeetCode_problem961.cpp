/*961. N-Repeated Element in Size 2N Array*/
/*


 You are given an integer array nums with the following properties:

   1) nums.length == 2 * n.
   2) nums contains n + 1 unique elements.
   3) Exactly one element of nums is repeated n times.
    Return the element that is repeated n times.


Constraints:
   1) 2 <= n <= 5000
   2) nums.length == 2 * n
   3) 0 <= nums[i] <= 104
   4)nums contains n + 1 unique elements and one of them is repeated exactly n times .


*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std ;


// using the unordered_map ;
class Solution_one{
    public :
    int repeatedNTimes(vector<int> & nums){
        int n = nums.size() / 2 ;

        unordered_map<int , int >mp ;
        for(int i=0 ; i<nums.size() ; i++){
            mp[nums[i]]++ ;

            if(mp[nums[i]] == n) return nums[i] ;
        }
        return -1 ;
    }
};

class Solution_two{
  public :
    int repeatedNTimes(vector<int>&nums){
       unordered_set<int>s ;

       for(int i=0 ; i<nums.size() ; i++){
            if(s.count(nums[i])) return nums[i] ;
            s.insert(nums[i]) ;
       }
       return -1 ;
    }
};

int main(){
    int n ;
    cout<<"Enter the length of the Array :- " ;
    cin>>n ;
    vector<int>nums(n) ;

    cout<<"Enter the digits in the Array :-  " ;
    for(int i=0 ; i<n ; i++){
        cin>>nums[i] ;
    }

    Solution_one Ans_one ;
    Solution_two Ans_two ;

    cout<<Ans_one.repeatedNTimes(nums)<<endl ;
    cout<<Ans_two.repeatedNTimes(nums) ;

    return 0 ;
}