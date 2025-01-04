/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> water(n); 
    vector<int> capacity(n);  
    int TripsNeeded = 0;      

    for (int i = 0; i < n; ++i) {
        cin >> water[i] >> capacity[i];
    }

    while (true) {
        int largestTank = -1;
        for (int i = 0; i < n; ++i) {
            if (water[i] < capacity[i]) { 
                if (largestTank == -1 || capacity[i] > capacity[largestTank]) {
                    largestTank = i;
                }
            }
        }
        if (largestTank == -1) break;


        int& mainTankWater = water[largestTank];
        int mainTankCapacity = capacity[largestTank];
        for (int i = 0; i < n; ++i) {
            if (i != largestTank && water[i] < capacity[i]) {
                int waterNeeded = capacity[i] - water[i];

                int waterTransferred = min(mainTankWater, waterNeeded);

                water[i] += waterTransferred;
                mainTankWater -= waterTransferred;

                if (mainTankWater == 0) break;
            }
        }

        if (mainTankWater < mainTankCapacity) {
            TripsNeeded++;
            mainTankWater = mainTankCapacity; 
        }
    }

    cout << TripsNeeded << endl;
    return 0;
}
*/