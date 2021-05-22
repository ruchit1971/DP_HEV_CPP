#include <iostream>
#include <vector>
#include "City_MAN.h"



int main() {
   std::vector<std::vector<int>> vec = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    //std::vector<std::vector<int>> vec(4, std::vector<int>(4));
    std::cout << vec[0][1] << "\n";

    std::vector<std::vector<double>> DC = City_MAN(); // T_z, V_z, G_z, D_z

    std::vector<double> T_z = DC[0];
    std::cout << T_z.size() << "\n";

    for (double i : T_z){
        std::cout << i << "\n";
    }






    return 0;
}
