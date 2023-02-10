//
//  CAR.hpp
//  ООП ДЗ 27 Оператор присваивания перемещением
//
//  Created by Павел on 09.02.2023.
//

#ifndef CAR_hpp
#define CAR_hpp
#include <iostream>
#include <stdio.h>

class Car{
public:
    explicit Car();
    int getSpeed();
    std::string getColor();
    void setSpeed(int speed);
    void setColor(std::string color);
    Car & operator = (Car && other) noexcept ;
    
private:
    int _speed;
    std::string _color;
    void log(const char *msg);

};





#endif /* CAR_hpp */
