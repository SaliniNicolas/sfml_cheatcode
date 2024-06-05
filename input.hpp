#ifndef INPUT_HPP
#define INPUT_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace sf;

class Input{

    private:
        bool left;
        bool right;
        bool up;
        bool down;
        bool attaque;
        bool echape;
    public:
        Input();
        void setButtonLeft(bool);
        void setButtonRight(bool);
        void setButtonUp(bool);
        void setButtonDown(bool);
        void setButtonAttaque(bool);
        void setButtonEchape(bool);
        void inputHandler(Event event, RenderWindow &window);
        bool getLeft()const{return left;}
        bool getRight()const{return right;}
        bool getUp()const{return up;}
        bool getDown()const{return down;}
        bool getAttaque()const{return attaque;}
        bool getEchape()const{return echape;}
};

#endif