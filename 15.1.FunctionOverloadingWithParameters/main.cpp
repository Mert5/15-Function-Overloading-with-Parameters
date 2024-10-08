#include <iostream>

// Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o

int maximum(int x, int y){
    std::cout << "Int overload called. " << std::endl;
    return (x>y)? x: y ;
}

double maximum(double x, double y){ 
    std::cout << "Double overload called. " << std::endl;
    return (x>y)? x : y ;
}


double maximum(int x, double y){        // you can even increase number of these functions
    std::cout << "(int, double) overload called. " << std::endl;
    return (x>y)? x : y ;
}

double maximum(double x, int y){ 
    std::cout << "(double, int) overload called. " << std::endl;
    return (x>y)? x : y ;
}

double maximum(double x, int y, int z){ 
    std::cout << "(double, int, int) overload called. " << std::endl;
    return x;
}

std::string_view maximum(std::string_view x, std::string_view y){
    std::cout << "(string_view, string_view) overload called. " << std::endl;
    return (x>y)? x : y ;
}

int main(){

    int x{13};
    int y{75};
    double m{6.9};
    double n{7.1};

    auto result = maximum(m,x,y);
    
    maximum("Hello", "World");

    return 0;
}
