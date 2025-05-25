#pragma once
#include "Player.h"
#include "Obstaculo.h"
#include "vector"
#include "Ente.h"

/**
*	Felipe Simbalista: 25/05/2025
* 
*	Faz a verificação de colisão
* 
*	Se uma entidade entra dentro de outra, essa classe é responsável por chamar uma ação da entidade que se locomoveu pra dentro da outra
* 
*	Essa classe não altera diretamente outras, ela apenas "avisa" outras classes o que está acontecendo
*/

class GerenciadorColisao : public Ente
{
private:
	std::vector<Character*>* characters;
	std::vector<Obstaculo*>* obstaculos;
public:

	void executar();
	GerenciadorColisao();
	GerenciadorColisao(std::vector<Character*>* characters, std::vector<Obstaculo*>*);
	~GerenciadorColisao();
	
	
	void colision();
	
};

