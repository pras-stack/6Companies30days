Question : https://practice.geeksforgeeks.org/problems/maximum-height-tree4803/1/?page=2&company[]=Walmart&query=page2company[]Walmart
Solution : 
class Solution{
public:
    int height(int N)
    {
        int i=0;
    for(i=0;i<1000;i++)
    {
    if(((i*(i+1))/2)>N)
    break;
    }
    return i-1;
    }
};
