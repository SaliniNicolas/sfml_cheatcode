#include "sfml.hpp"

int main()
{
    ContextSettings option;
    option.antialiasingLevel = 8;
    window.create(VideoMode(WIN_WIDTH, WIN_HEIGHT, 32), FENETRE, Style::Default, option);
    window.setVerticalSyncEnabled(true); 
    loadFont();
    setTxt(txt, "Heyyy ca gaze ?");
    CircleShape shape(50.f);
    shape.setFillColor(Color::White);
    ConvexShape convex;
    convex.setPointCount(4);
    convex.setPoint(0, Vector2f(10.f, 10.f));
    convex.setPoint(1, Vector2f(30.f, 0.f));
    convex.setPoint(2, Vector2f(50.f, 10.f));
    convex.setPoint(3, Vector2f(30.f, 20.f));
    convex.setPosition(300, 300);
     
    while(window.isOpen())
    {
        Event event;
        while(window.pollEvent(event))
       {
        input.inputHandler(event, window);
        checkBtn();
        shape.setPosition(posX, 0);
       }
       window.clear(Color::Black);
       window.draw(txt);
       window.draw(shape);
       window.draw(convex);
       window.display();
    }

    return 0;
}

/*void inputHandler(Event event, RenderWindow &window)
{
      if(event.type == Event::Closed)
      {
        window.close();
      }
      if(event.type == Event::KeyPressed)
      {
        if(event.key.code == Keyboard::Escape)
        {
          window.close();
        }
      }
      if(event.type == Event::MouseButtonPressed)
      {
        if(event.mouseButton.button == Mouse::Left)
        {
            setTxt(txt, "souris gauche");
        }
        if(event.mouseButton.button == Mouse::Right)
        {
          setTxt(txt, "souris droite");
        }
      }
      if(Keyboard::isKeyPressed(Keyboard::Up))
      {
        setTxt(txt, "up");
      } 
      if(Mouse::isButtonPressed(Mouse::Middle))
      {
        setTxt(txt, "middle");
      }
}*/

void loadFont()
{
    if(!font.loadFromFile("res/LT.otf"))
    {
           cout << "Erreur chargement font" << endl;
           exit(1); 
    }
}

void setTxt(Text &txt, String str)
{
    txt.setFont(font);
    txt.setString(str);
    txt.setCharacterSize(28);
    txt.setFillColor(Color::Blue);
    txt.setStyle(Text::Bold);
}

void checkBtn()
{
  if(input.getLeft())
  {
    posX -= 1;
    sprintf(tmp, "%d", posX);
    setTxt(txt, tmp);
  }
  if(input.getRight())
  {
    posX += 1;
    sprintf(tmp, "%d", posX);
    setTxt(txt, tmp);
  }
  if(input.getUp())
  {
    setTxt(txt, "up");
  }
  if(input.getDown())
  {
    setTxt(txt, "down");
  }
  if(input.getAttaque())
  {
    setTxt(txt, "attaque");
  }
  if(input.getEchape())
  {
    window.close();
  }

}