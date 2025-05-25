#pragma once
#include <SFML/Graphics.hpp>
class GerenciadorGrafico
{
private:
	float winWidth;
	float winHeight;
	sf::FloatRect standartView;
	sf::Font* font;
	sf::RenderWindow* window;
	sf::Vector2i mousePos;
	
	
	static GerenciadorGrafico* pGerGraphic;
	GerenciadorGrafico();
	
public:
	~GerenciadorGrafico();
	//getters	
	const sf::FloatRect getStdView()const;
	static GerenciadorGrafico* getGerGraphic();
	sf::Vector2i* getMousePosition();
	sf::RenderWindow* getWindow();
	sf::Font* getFont();
	bool isOpen();
	
	

	void display();
	void updateMousePosition();
	void setFrameLimit(int fps);
};

