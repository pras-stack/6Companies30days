  Question : https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#
  
  Solution: string encode(string src)
{     
  int n= src.size();
  string p ="";
  
  for (int i=0;i<n;i++)
  {
      p +=src[i];
      int cnt =1;
      
      while(i+1 <n && src[i]==src[i+1])
      {
         cnt++;
         i++;
      }
      p+=to_string(cnt);
  }
 return p;
  
}     
 
