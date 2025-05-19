#include "GerenciadorGrafico.h"
#include <iostream>

GerenciadorGrafico* GerenciadorGrafico::pGerGraphic = NULL;
GerenciadorGrafico::GerenciadorGrafico()
{

	window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Menu Teste", sf::Style::Close | sf::Style::Titlebar);
	font = new sf::Font();
	if (!font->loadFromFile("C://Users//Felipe//Documents//menuTeste//menuTeste//TypeLightSans-KV84p.otf")) {
		std::cerr << "Erro ao carregar a fonte";
	}

}

GerenciadorGrafico::~GerenciadorGrafico()
{
	if (window)
		delete window;
	if(font)
		delete font;
}

void GerenciadorGrafico::display() {
	window->display();
}
bool GerenciadorGrafico::isOpen()
{
	return window->isOpen();
}

GerenciadorGrafico* GerenciadorGrafico::getGerGraphic()
{
	if (!pGerGraphic) {
		pGerGraphic = new GerenciadorGrafico();
	}
	return pGerGraphic;
}


sf::Vector2i* GerenciadorGrafico::getMousePosition()
{
	return &mousePos;
}


sf::RenderWindow* GerenciadorGrafico::getWindow(){
	return window;
}
sf::Font* GerenciadorGrafico::getFont()
{
	return font;
}

void GerenciadorGrafico::updateMousePosition()
{
	mousePos = sf::Mouse::getPosition(*window);
	
}

void GerenciadorGrafico::setFrameLimit(int fps)
{
	window->setFramerateLimit(fps);
}
