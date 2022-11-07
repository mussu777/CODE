#include<iostream>
#include<vector>
using namespace std;                             
							   
							                
bool isPossible(int stalls[], int k, int mid )
{

    int cowCount = 1;	
    int lastPosition = stalls[0];	
    for(int i =0; i<5; i++){
        if(stalls[i]-lastPosition >= mid)
        {	
            cowCount++;
            if(cowCount==k){
                return true;	
            }
            //update lastPosition of cow & keep checking on right side for further max value
            lastPosition = stalls[i];
        }
    }
    return false;	
}

    int aggressiveCows(int stalls[], int k)
{ 
    //sort stall array for getting a linear number line for code
    //   sort(stalls.begin() , stalls.end());
    
    int start = 0;
    int maxi=-1;
    for(int i =0; i<5; i++)
    {
        maxi = max(maxi,stalls[i]);
    }
    int end = maxi;
    int ans ;
    int mid  = start+(end-start)/2;
    
    while(start<=end){
        if(isPossible(stalls,k,mid)){
            //possible solution -> save in ans and move right coz we need to find largest max distance, right side move
            ans = mid;
            start = mid+1;
        }
        else
        {
            //solution not possible, move left
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main()
{
    // int k;
    // cout<<"enter the numbers ";
    // cin>>k;
    int  v[5];
    cout<<"enter the desired numbers of stalls in sorted way ";
    for(int i = 0; i<5 ; i++)
    {
        cin>>v[i];
    }
    int n;
    cout<<"enter the number of cows"<<endl;
    cin>>n;

     int answer = aggressiveCows(v, n);
     cout<<answer;
//    for(int i=0; i<answer.size(); i++)
//    {
//     cout<<answer[i];
//    }

    return 0;
}