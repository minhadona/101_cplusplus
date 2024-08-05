#include <iostream> 


namespace cachorro{
int x =1 ; 
}

namespace gato{
int x =5 ;
}

int main () {
std::cout << gato::x ; 
return 0; 

}
