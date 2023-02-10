//
//  CAR.cpp
//  ООП ДЗ 27 Оператор присваивания перемещением
//
//  Created by Павел on 09.02.2023.
//

#include "CAR.hpp"

Car::Car (): _speed(100), _color("White"){}

int Car:: getSpeed(){
    return _speed;
}
std::string Car:: getColor(){
    return _color;
}
void Car:: setSpeed(int speed){
    _speed = speed;
}
void Car:: setColor(std::string color){
    _color = color;
}

Car & Car :: operator = (Car && other)noexcept{
    log ("оператор присваивания перемещением");
     std::swap(_speed,other._speed);
     std::swap(_color,other._color);
     return *this;
}

void Car:: log(const char *msg){
    std::cout<<"["<<this<< "]" <<msg<<'\n';
}

