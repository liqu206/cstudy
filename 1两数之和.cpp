#include <iostream>
#include <vector>
//using::std::vector;
using namespace std;
class Solution
{
public:
  vector<int>twoSum(vector<int>&nums,int target)
  {
    int i,j;
    for(int i=0;i < nums.size();i++)
    {
      for(j=i+1;j < nums.size();j++)
      {
        if(nums[i]+nums[j]==target)
        {
          cout <<'['<< i << ','<< j <<']'<< endl;
          return {};
        }
      }
    }
    return { };
  }
};
int main()
{

  vector<int> a = {1,1,2,2,1,3,4,3};

  Solution b;
  b.twoSum(a,4);
}