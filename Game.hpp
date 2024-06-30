#ifndef BOOK_GAME_HPP
#define BOOK_GAME_HPP

#include <SFML/Graphics.hpp>

class Game {
	public: 
		Game();
		void run();

	private:
		void processEvents();
		void update(sf::Time deltaTime);
		void render();
		void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

	private:
		const float PlayerSpeed;
		const sf::Time TimePerFrame;

		sf::RenderWindow mWindow;
		sf::CircleShape mPlayer;

		bool mIsMovingUp;
		bool mIsMovingDown;
		bool mIsMovingLeft;
		bool mIsMovingRight;

};

#endif // BOOK_GAME_HPP
