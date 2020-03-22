
#include <iostream>
#include<utility>
#include <vector> 
#include <algorithm>
using namespace std; 
  
int main()  
{  
    vector<int> result;
    int n, numberOfHouse, budget, dummy,sum, count;
    cin >> n;
    vector<int> priceOfHouses;
    for(int i=0;i < n ; i++)
    {
        numberOfHouse = 0;
        budget = 0;
        sum = 0;
        count = 0;  
        priceOfHouses.clear();
       cin >> numberOfHouse;
       cin >> budget;
       for(int j=0 ; j < numberOfHouse; j++ )
       {
           cin >> dummy; 
           priceOfHouses.push_back(dummy);
       }
       std::sort (priceOfHouses.begin(), priceOfHouses.end());
       for(int i=0; i < priceOfHouses.size(); i++)
       {
          if(sum < budget)
          {
              sum = sum + priceOfHouses[i];

              count++;
          }
         dummy = i;
       }
       if(sum > budget){
           sum -= priceOfHouses[dummy];
           count--;
       }
        result.push_back(count);
    }
    
    int size = result.size();
    for(int i=0; i <  size ; i++)
    {
      cout << "Case #" << (i+1) << ":  "<< result[i]<< endl; 
    } 
    return 0;  
}  
  