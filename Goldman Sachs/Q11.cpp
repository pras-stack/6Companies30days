Question : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/
  
Solution:
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int XOR = 0;
    for (int i = 0; i < n; ++i)
      XOR ^= ((i + 1) ^ arr[i]);

    int setbit_no = XOR & ~(XOR - 1);
    int bucket1 = 0, bucket2 = 0;

    for (int i = 0; i < n; ++i)
    {
      if ((arr[i] & setbit_no))
        bucket1 ^= arr[i];
      else
        bucket2 ^= arr[i];

      if (((i + 1) & setbit_no))
        bucket1 ^= (i + 1);
      else
        bucket2 ^= (i + 1);
    }

    int *ans = new int[2];

    int flag = 0;
    for (int i = 0; i < n; ++i)
    {
      if (arr[i] == bucket1)
      {
        flag = 1;
        break;
      }
    }

    if (flag)
    {
      ans[0] = bucket1;
      ans[1] = bucket2;
    }
    else
    {
      ans[1] = bucket1;
      ans[0] = bucket2;
    }
    return ans;
    }
};
