#pragma once
#include <SFML\Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace BlazeIt
{
	class MainMenuState : public State
	{
	public:
		MainMenuState(GameDataRef data);

		void Init();

		void HandleInput();
		void Update(float dt);
		void Draw(float dt);
	private:
		GameDataRef _data;

		sf::Sprite _PlayButton;
		sf::Sprite _Background;
		sf::Sprite _Close;

		


	};


}