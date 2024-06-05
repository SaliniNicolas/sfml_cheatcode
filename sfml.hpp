#ifndef SFML_HPP
#define SFML_HPP

#include <iostream>
#include <cstdio>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include "input.hpp"

using namespace std;
using namespace sf;

const int  WIN_WIDTH = 800;
const int WIN_HEIGHT = 600;
const string FENETRE = "MOBA";

void loadFont();
void setTxt(Text&, String);
void checkBtn();

Font font;
Text txt;
RenderWindow window;
Input input;
int posX = 1;
char tmp[256];

#endif