class Solution {
public:
    int countPrimes(int n) {
          
          int county=0;


          for (int i = 2; i < n; i++)
          {
            if(n%i==0){
               return  false;
            } 


          }

          county++;

          return county;
          


        
    }
};