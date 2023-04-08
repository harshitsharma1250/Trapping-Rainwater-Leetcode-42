// Here I have used the two pointers approach which generally halps us in finding the range
// This range we are interested here is the one in which the water can be stored
// Instead of finding the total water stored, we will find the water stored on each building
// We will be taking the min of the maximum heights building on the left and the right side of our curr building



class Solution {
public:
    int trap(vector<int>& height) {
        int l= 0;
        int r = height.size()-1 ;
        int rm = 0 ;
        int lm = 0 ;
        int res = 0 ;

        while(l<=r){

            if(height[l]<=height[r]){

                if(lm<=height[l]){
                    lm = height[l] ;
                }
                else{
                    res+= lm - height[l] ;
                }
                l++ ;
            }

            else{
                if(rm<=height[r]){
                    rm = height[r] ;
                }
                else{
                    res+=(rm-height[r]) ;
                }
                r-- ;
            }
        }
        return res ;
    }
};   

// Time complexity => O(N)
// Space Complexity => O(1) 
