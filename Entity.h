#pragma once
#include "Ente.h"
/**
*	Felipe Simbalista: 25/05/2025
* 
* Classe abstrata Entity
* 
*	Representa todos os objetos desenhaveis dentro de um estado
* 
*	Em menuState representa bot�es
* 
*	Em GameState representa obstaculos/personagens/projeteis
* 
*	Inicializa a posi��o e o tamanho do shape da entidade
*
*/

class Entity : public Ente
{
protected:
	sf::Vector2f position;
	sf::Vector2f shapeSize;
	sf::RectangleShape shape;
public:
	virtual void executar() = 0;
	const virtual sf::FloatRect getBounds();
	Entity();
	Entity(sf::Vector2f size, sf::Vector2f pos);
	~Entity();

};

