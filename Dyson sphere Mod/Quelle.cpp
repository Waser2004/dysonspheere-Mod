#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

int main() 
{

	// create window
	RenderWindow window(VideoMode(50, 50), "Hey");

	// set Framerate
	window.setFramerateLimit(60);

	while (window.isOpen()) 
	{
		// loop thorugh all window events that were triggerd
		Event event;
		while (window.pollEvent(event)) 
		{
			// check if user closed window
			if (event.type == Event::Closed) 
			{
				window.close();
			}
		}

	}
	return 0;
}