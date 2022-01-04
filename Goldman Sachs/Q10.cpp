Question : Find max 10 numbers in a list having 10M entries.
  
Solution:
int findMinMax(int X[], int n)
{
    int max = X[0]
    int min = X[0]
    for (int i = 1; i &lt; n; i = i + 1)
    {
        if (X[i] &gt; max)
            max = X[i]
        else if (X[i] &lt; min)
            min = X[i]
    }
    int res[2] = {max, min}
    return res
}
