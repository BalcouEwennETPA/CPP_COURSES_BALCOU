#include "course.h"
#include <string>
#include <iostream>

std::string Course::getPseudo(){
    return _Pseudo;
}

std::string Course::getnameCourse(){
    return _nameCourse;
}

int Course::getscore(){
    return _Score;
}

int Course::getBestscorerace(){
    return _Bestscorerace
}


Course::Course(std::string Pseudo, std::string nameCourse, int score) : _Pseudo(Pseudo), _nameCourse(nameCourse), _Score(Score)