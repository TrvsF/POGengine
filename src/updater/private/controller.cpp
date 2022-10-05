#include "../controller.h"

namespace updater
{
	Controller::Controller(Input* input)
	{
		m_controller_state	= ControllerState::Game;
		m_input				= input;
		m_player			= nullptr;
	}

	void Controller::check_game_inputs()
	{
		if (m_player == nullptr) 
		{ 
			m_player = game::Game::Get()->GetPlayer();
		}

		if (m_input->KeyDown("w"))
		{ m_player->MoveUp(); }
		if (m_input->KeyDown("s"))
		{ m_player->MoveDown(); }
		if (m_input->KeyDown("a"))
		{ m_player->MoveLeft(); }
		if (m_input->KeyDown("d"))
		{ m_player->MoveRight(); }
	}

	void Controller::check_menu_inputs() {}
}