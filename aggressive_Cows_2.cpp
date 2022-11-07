#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;        // first cow
    int lastPos = stalls[0]; // simply means placing first cow at zeroth position
    for (int i = 0; i < stalls.size(); i++)
    {
        // try placing other cow i.e. 2nd and every other position and check for minimum distance
        if (stalls[i] - lastPos >= mid)
        {
            // Distance bigger than mid value
            cowCount++;
            if (cowCount == k)
            {
                return true; // cow placed successfully
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

vector<int> aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());                                 //   not perfectly solved in vector wise ......
    int s = 0;                                                         //   output is mofos(wrong)
    int maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }

    int e = maxi;
    vector<int> ans;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(stalls, k, mid))
        {
            ans.push_back(mid);
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    int n;
    cout << "enter the size ";
    cin >> n;
    vector<int> v(n);

    cout << "enter the values to be checked ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int m;
    cout << "Enter the number of cows ";
    cin >> m;

    vector<int> answer = aggressiveCows(v, m);
    for(int i=0; i<answer.size(); i++)
    {
        cout<<answer[i];
    }
}