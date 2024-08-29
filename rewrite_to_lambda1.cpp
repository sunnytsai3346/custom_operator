#include <iostream>
/*struct Multiply{
    int factor;
    Multiply(int factor):factor(factor){};
    int operator()(int x) const {
        return x * factor;
    }
    
};*/

int main() {
   // Multiply multiplyBy3(3);
  //std::cout << multiplyBy3(5); // Outputs 15
  /* the following is rewritten with lambda way */
    int factor=3;
    auto Multiply=[factor](const int x){return x*factor;};
    
    std::cout << Multiply(5) <<std::endl;// Outputs 15
}
