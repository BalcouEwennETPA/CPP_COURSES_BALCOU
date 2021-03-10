#include <string>
#include <iostream>

class Course{
    private :
        std::string _Pseudo;
        std::string _nameCourse;
        int _Score;
        int _Bestscorerace;
    public :
        void afficher();
        std::string getPseudo;
        std::string getnameCourse;
        int getScore;
        int getBestscorerace;
        Course(std::string Pseudo, std::string nameCourse, int score)
    }