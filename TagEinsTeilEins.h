#pragma once
#include <SFML\Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace BlazeIt
{
	class TagEinsTeilEins : public State
	{
	public:
		TagEinsTeilEins(GameDataRef data);

		void Init();

		void HandleInput();
		void Update(float dt);
		void Draw(float dt);
	private:
		GameDataRef _data;
		sf::Clock _clock;

		sf::Texture _backgroundtexture;
		sf::Sprite _background;

	};


}