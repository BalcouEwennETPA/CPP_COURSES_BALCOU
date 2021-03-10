#include <string>
#include <iostream>

class Course{
    private :
        std::string _Pseudo;
        std::string _nameCourse;
        int _score;
        int _Bestscorerace;
    public :
        void afficher();
        std::string getPseudo;
        std::string getnameCourse;
        float getscore;
        float getBestscorerace;
        Course(std::string Pseudo, std::string nameCourse)
    }