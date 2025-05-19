#pragma once
#include <SFML/Graphics.hpp>
class GerenciadorGrafico
{
private:
	sf::Font* font;
	sf::RenderWindow* window;
	sf::Vector2i mousePos;
	static GerenciadorGrafico* pGerGraphic;
	GerenciadorGrafico();
	
public:
	static GerenciadorGrafico* getGerGraphic();
	~GerenciadorGrafico();

	bool isOpen();
	
	sf::Vector2i* getMousePosition() ;
	sf::RenderWindow* getWindow() ;

	sf::Font* getFont() ;
	void display();
	void updateMousePosition();
	void setFrameLimit(int fps);
};

