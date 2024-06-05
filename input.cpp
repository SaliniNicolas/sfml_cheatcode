#include "input.hpp"

Input::Input()
{
    setButtonAttaque(false);
    setButtonDown(false);
    setButtonEchape(false);
    setButtonUp(false);
    setButtonLeft(false);
    setButtonRight(false);
}

void Input::setButtonUp(bool tmp)
{
    up = tmp;
}

void Input::setButtonDown(bool tmp)
{
    down = tmp;
}

void Input::setButtonRight(bool tmp)
{
    right = tmp;
}

void Input::setButtonLeft(bool tmp)
{
    left = tmp;
}

void Input::setButtonAttaque(bool tmp)
{
    attaque = tmp;
}

void Input::setButtonEchape(bool tmp)
{
    echape = tmp;
}

void Input::inputHandler(Event event, RenderWindow& window)
{
    if(event.type == Event::Closed)
    {
        window.close();
    }
    if(event.type == Event::KeyPressed)
    {
        switch(event.key.code)
        {
            case Keyboard::Escape:
                setButtonEchape(true);
                    break;
            case Keyboard::Space:
                setButtonAttaque(true);
                    break;
            case Keyboard::Z:
                setButtonUp(true);
                    break;
            case Keyboard::S:
                setButtonDown(true);
                    break;
            case Keyboard::Q:
                setButtonLeft(true);
                    break;
            case Keyboard::D:
                setButtonRight(true);
                    break;
            default:
                break;
        }
    }
    if(event.type == Event::KeyReleased)
    {
        switch(event.key.code)
        {
            case Keyboard::Escape:
                setButtonEchape(false);
                    break;
            case Keyboard::Space:
                setButtonAttaque(false);
                    break;
            case Keyboard::Z:
                setButtonUp(false);
                    break;
            case Keyboard::S:
                setButtonDown(false);
                    break;
            case Keyboard::Q:
                setButtonLeft(false);
                    break;
            case Keyboard::D:
                setButtonRight(false);
                    break;
            default:
                break;
        }
    }
}
