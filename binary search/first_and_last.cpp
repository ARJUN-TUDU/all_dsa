#include<bits/stdc++.h>

using namespace std ; 

vector<int> search(vector<int> v , int l , int r ,int k,vector<int> myv){
    int mid = l+(r-l)/2 ; 

    if(v[mid]==k){
        
        if(v[mid+1] == k && v[mid-1] == k && mid < v.size()-1){
            int left = mid ; 
            int right = mid ;
            while(v[left]==k){
                left--;
            }
            myv.push_back(left+1);
            while(v[right]==k){
                right++;
            }
            myv.push_back(right-1);
            return myv;

        }else if (v[mid+1]==k && v[mid-1]!=k && mid<v.size()-1){
            myv.push_back(mid);
            while(v[mid]==k){
                mid++;
            }
            myv.push_back(mid-1);
            return myv;
        }
        else if(v[mid-1] == k && mid<v.size()){
            myv.push_back(mid);
            while(v[mid]==k){
                mid--;
            }
            myv.push_back(mid+1);
            return myv;
        }

        
    }

    if(l>r){
        return {1};
    }

    if(v[mid]>k){
        return search(v,l,mid-1,k,myv);
    }
    if(v[mid]<k){
        return search(v,mid+1,r,k,myv);
    }
}

int binary_non(vector<int>v,int k){
    int n = v.size();
    int l = 0 ; 
    int r = n-1 ;

    while(l<r){
        int mid = l+(r-l)/2 ; 

        if(v[mid]==k){
            return mid ;
        }

        if(v[mid]<k){
            l = mid+1 ; 
        }
        else{
            r= mid - 1 ;
        }
    }

    return -1 ;
}


    vector<int> searchRange(vector<int>& nums, int target) {
         int n = nums.size() ; 
         int l = 0 ; 
         int r = n-1 ;
         vector<int> ans ; 

         while(l<r){
             int mid = l+(r-l)/2 ; 
             if(nums[mid]==target){
                if(nums[mid+1] == target && mid < n-1){
                    ans.push_back(mid);
                    ans.push_back(mid+1);
                    
                    return ans ; 
                    
                }
                if(nums[mid-1] == target){
                    ans.push_back(mid);
                    ans.push_back(mid-1);

                    return ans ; 
                     
                }
             }


             if(nums[mid]<target){
                 l = mid+1 ; 
             }
             if(nums[mid]>target){
                 r = mid-1 ; 
             }


         }

         
        return ans;

    };


int occurences(vector<int> v,int l,int r ,int target) {

    int mid = l+(r-l)/2 ; 

    if(v[mid] == target){
        return 1;
    }

}



int search_rotated(vector<int> v ,int l , int r , int k){
    int mid = l+(r-l)/2 ; 

    while(l<=r){
        int mid = l+(r-l)/2 ;

        if(v[mid] == k){
            return mid ;
        }


// any of side of the array 
// will be in sorted order ;
// ! we have to check the key is available in any of the array

        if(v[mid]>=v[l]){
            if(v[mid]>=k && v[l]<=k){
                r = mid-1;
                
                // if not available in left side
                // we will move to right

            }else{
                l =mid+1;
            }
        }else{
            if(v[mid]<=k && v[r]>=k){
                l = mid+1;

                // if not available in right side
                // we will move to right

            }else{
                r = mid - 1;
            }
        }
    }
}

int main(){
    

   vector<int> v = {4,5,6,0,1,2,3} ;
   cout<<search_rotated(v,0,v.size()-1,5);
   cout<<1;
}