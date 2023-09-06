// ques link:
// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int total=0;
    int n=arr.size();
	for(int i=1;i<n;i++){
        total+=i;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum-total;
}
