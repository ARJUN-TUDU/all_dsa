#include<bits/stdc++.h>

using namespace std; 
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];
         

        for(int i = 0 ; i < m+n ; i ++){
            cout<<i<<" "; 
        }
            
    }

    

int main(){
    vector<int> nums1 = {1,3,4}; 
    vector<int> nums2 = {2,5,6}; 
    int m = nums1.size(); 
    int n = nums2.size(); 

    merge(nums1,m,nums2,n); 
}