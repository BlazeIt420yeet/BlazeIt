#include <sstream>
#include "MainMenuState.h"
#include "DEFINITIONS.h"
#include "TagEinsTeilEins.h"
#include<iostream>

namespace BlazeIt
{
	MainMenuState::MainMenuState(GameDataRef data) : _data(data)
	{

	}

	void MainMenuState::Init()
	{
		_data->assets.LoadTexture("Main Menu Background", MAIN_MENU_BACKGROUND_FILEPATH);
		_data->assets.LoadTexture("PlayButton", PLAY_BUTTON_FILEPATH);
		_data->assets.LoadTexture("CloseButton", CLOSE_BUTTON_FILEPATH);

		_Background.setTexture(this->_data->assets.GetTexture("Main Menu Background"));
		_PlayButton.setTexture(this->_data->assets.GetTexture("PlayButton"));
		_Close.setTexture(this->_data->assets.GetTexture("CloseButton"));

		_PlayButton.setPosition(500, 500);
		_Close.setPosition(500, 1000);
		
		


	}

	void MainMenuState::HandleInput()
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			 if (_data->input.IsSpriteClicked(_Close, sf::Mouse::Left, this->_data->window))
			 {
				_data->window.close();
			 }

			 if (_data->input.IsSpriteClicked(_PlayButton, sf::Mouse::Left, this->_data->window))
			 {
				 _data->machine.AddState(StateRef(new TagEinsTeilEins(_data)), true);
			 }
		}
		

		

	}

	void MainMenuState::Update(float dt)
	{

	}

	void MainMenuState::Draw(float dt)
	{
		_data->window.clear();

		_data->window.draw(_Background);
		_data->window.draw(_PlayButton);
		_data->window.draw(_Close);

		_data->window.display();
	}

}