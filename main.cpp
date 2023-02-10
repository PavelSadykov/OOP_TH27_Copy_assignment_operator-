//
//  main.cpp
//  ООП ДЗ 27 Оператор присваивания перемещением
//
//  Created by Павел on 09.02.2023.
//
#include "CAR.hpp"
#include <iostream>




int main(int argc, const char * argv[]) {
    Car a;
    Car b;
    Car c;
    b.setSpeed(90);
    c.setSpeed(80);
    b.setColor("Red");
    c.setColor("Green");
    a = Car();
    
    std::cout<<"Speed of Car a = "<<a.getSpeed()<<std::endl;
    std::cout<<"Color of Car a = "<<a.getColor()<<std::endl;
    
    std::cout<<"Speed of Car b = "<<b.getSpeed()<<std::endl;
    std::cout<<"Color of Car b = "<<b.getColor()<<std::endl;
   
    std::cout<<"Speed of Car c = "<<c.getSpeed()<<std::endl;
    std::cout<<"Color of Car c = "<<c.getColor()<<std::endl;
    
    b = std::move(c);
    std::cout<<"Speed of Car b = "<<b.getSpeed()<<std::endl;
    std::cout<<"Color of Car b = "<<b.getColor()<<std::endl;
    
    
    return 0;
}
