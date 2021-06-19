/* Enter your solutions in this file */
#include <stdio.h>
int isprime(int);
float average(int p[], int n )
{  float s=0.0;
   for(int i=0;i<n;i++)
   {
       s+=p[i];
   }
   float x=s/n;
   return x;
}


int min(int p[], int n)
{   int m=p[0];
    for(int i=1;i<n;i++)
    {
        if(p[i]<m)
        {
            m=p[i];
        }
    }
    return m;
}



int max(int p[], int n)
{   int m=p[0];
    for(int i=1;i<n;i++)
    {
        if(p[i]>m)
        {
            m=p[i];
        }
    }
    return m;
}



int factors(int n, int ret[])
{  int p=0;
    while(n!=1)
  {
    for( int i=2;i<=n;i++)
    {
        if(isprime(i)) 
        {
            while (n%i==0)
            { n=n/i;
              ret[p]=i;
              p++;
            }
        }
    }
  }
  return (p);
}


int isprime(int n)
{ int i, flag = 1;
for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
    
      flag = 0;
      break;
    }
  }
 return flag;
}




int mode(int x[], int n)
{   int p[20]={0};
    int count;
    for(int i=0;i<n;i++)
    {   count=0;
        for(int j=0; j<n; j++)
        { if(x[j]==x[i])
           {count++;}
        }
        p[i]=count;
    }
    int index=0;
    int mx=p[0];
    for(int i=1;i<n;i++)
    {
       if(p[i]>mx)
       {
           mx=p[i];
           index=i;
       }
    }
 return x[index];
}
