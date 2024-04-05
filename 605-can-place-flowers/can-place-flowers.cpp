class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)
            return true;
        int size=flowerbed.size();
        if(size==1){
            if(flowerbed[size-1]==0 && n==1)
                return  true;
            else
                return false;
        }
        int count=0;
        if(flowerbed[0]==0&&flowerbed[1]==0){
            count++;
            flowerbed[0]=1;
        }
        for(int i=1;i<size-1;i++){
            if(flowerbed[i] == 0 && flowerbed[i+1]==0 &&flowerbed[i-1]==0){
                count++;
                flowerbed[i]=1;
            }
        }
        if(flowerbed[size-1]==0&&flowerbed[size-2]==0)
            count++;
        return count >= n;    
    }
};