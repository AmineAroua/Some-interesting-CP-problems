#include <bits/stdc++.h>

using namespace std;

// HERE IS THE SOLUTION
/*
Triangular number problem : 
A number is called triangular it is in the form 1+...+n (e.g :  1  , 3 = 1+2 , 6 = 1+2+3)
you are given an integer m .Find the maximum number of triangular numbers with the sum less than or equal  to m.
This is the brute force solution.
*/
int main()
{
    cin.tie(0);
    cout.tie(0);
    boost;

    int m;  
    cin>>m;
    int i = 1;
    int s = 0; // sum
    int t = 0;
    while(s+t+i<=m)
    {
        t+=i;
        s+=t;
        i++;             
                         // 1 , (1+2) + 1 , (1+2+3) + (1+2) + 1 , (1+2+3+4) + (1+2+3) + (1+2) + 1 , 15 + 10 + 6 + 3 + 1
                         //f(1) = 1 , f(x) = f(x-1) + cur  (cur : current triangular number)
                         // f(x) : sum of the fist x triangular numbers
                         // we should use two variables t : the current triangular number , s = f(x) = s+t
    }
    cout<<i-1<<endl;  // 1+3+6+10+15 = 35
}

