#include "GerenciadorColisao.h"
#include <iostream>
GerenciadorColisao::GerenciadorColisao():Ente()
{
}
GerenciadorColisao::GerenciadorColisao(std::vector<Character*>* characters, std::vector<Obstaculo*>* obstaculos)
	:Ente()
{
	this->obstaculos = obstaculos;
	this->characters = characters;
	ppPlayer = Player2::getPlayer();
}



GerenciadorColisao::~GerenciadorColisao()
{
	
}

void GerenciadorColisao::colision()
{
	for (auto& charact : *characters) {
		sf::FloatRect characterBounds = charact->getBounds();
		for (const auto& obstac : *obstaculos) {
			sf::FloatRect obstaculoBounds = obstac->getBounds();

			if (characterBounds.intersects(obstaculoBounds)) {
				obstac->setIsColiding(1);
				

				//Centro do personagem
				float charCenterX = characterBounds.left + characterBounds.width / 2.f;
				float charCenterY = characterBounds.top + characterBounds.height / 2.f;
				
				//Centro do obstaculo
				float obstCenterX = obstaculoBounds.left + obstaculoBounds.width / 2.0f;
				float obstCenterY = obstaculoBounds.top + obstaculoBounds.height / 2.0f;

				//Sobreposição em cada eixo
				
				float overlapX = std::min(characterBounds.left + characterBounds.width, obstaculoBounds.left + obstaculoBounds.width) - std::max(characterBounds.left, obstaculoBounds.left);
				//interseção no eixo X


				float overlapY = std::min(characterBounds.top + characterBounds.height, obstaculoBounds.top + obstaculoBounds.height) - std::max(characterBounds.top, obstaculoBounds.top);
				//interseção no eixo y

				// Determinar a direção da colisão pela menor sobreposição
				if (overlapX < overlapY) {
					if (charCenterX < obstCenterX) {
						// Personagem está mais à esquerda que o centro do obstáculo,
						// então o lado DIREITO do personagem colidiu com o lado ESQUERDO do obstáculo.
						charact->hitRight(obstaculoBounds); 
					}
					else {
						// Personagem está mais à direita que o centro do obstáculo,
						// então o lado ESQUERDO do personagem colidiu com o lado DIREITO do obstáculo.
						charact->hitLeft(obstaculoBounds);
					}
				}
				else {
					
					if (charCenterY < obstCenterY) {
						// Personagem está mais acima que o centro do obstáculo,
						// então a parte de BAIXO do personagem colidiu com a parte de CIMA do obstáculo.
						charact->hitGround(obstaculoBounds);
					}
					else {
						// Personagem está mais abaixo que o centro do obstáculo,
						// então a parte de CIMA do personagem colidiu com a parte de BAIXO do obstáculo.
						charact->hitTop(obstaculoBounds);
					}
				}

			}
			else {
				obstac->setIsColiding(0);
			}

		}
	}
}

