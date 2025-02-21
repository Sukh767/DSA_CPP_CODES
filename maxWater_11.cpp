// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

/* These Solution is correct but not suitable for lengthy dataset 
 ? -- Time complexity of the code is O(n2), it's not a optimized approach 
 ? -- it gaves the TLE - time limit exceeded
*/

    /* Brute force approach */
int maxArea(vector<int>& height) {
        int width = 0;
        int maxWater = 0;
        

        for(int i = 0; i <=height.size()-2; i++){
            for(int j = i+1; j <= height.size()-1;j++){
                cout<< "i = "<<i << " j = "<<j <<endl;
                int left = height[i];
                int right = height[j];
                cout<<"left "<<left<<" right "<<right<<endl;
                width = j-i;
                cout<<"Width "<<width<<endl;

                /*
                ? ------------ Shorthand Code ----------- ? 
                for(int i = 0; i <= height.size()-2; i++){
                    for(int j = i+1; j <= height.size()-1;j++){
                        width = j - i;
                        int height = min( height[i],  height[j]);
                        int area = width * height;
                        maxWater = max(maxWater, area);
                    }
                }
                */
                if(left > right){
                    int area = width * right;
                    cout<<"Area "<<area<<endl;
                    
                    maxWater = max(maxWater, area);
                    cout<<"maxWater "<<maxWater<<endl;
                } else if(right > left){
                    int area = width * left;
                     cout<<"Area "<<area<<endl;
                    
                    maxWater = max(maxWater, area);
                    cout<<"maxWater "<<maxWater<<endl;
                }else{
                    int area = width * left;
                    maxWater = max(maxWater, area);
                }


            }
        }

        return maxWater;
    }


    /* Optimized Solution  */
/*
 * Time Complexity O(n)
*/
    int maxArea(vector<int>& height) {
        int width = 0;
        int maxWater = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while(left < right){
            width = right - left;
           int hgt = min(height[left], height[right]);
            maxWater = max(maxWater, width * hgt);

            height[left] > height[right] ? right-- : left++; 
        }

        return maxWater;
    }
int main() {
    // Write C++ code here
    vector<int> height = {0,2};
    int ans = maxArea(height);
    
    cout<<"Ans is : "<<ans;

    return 0;
}