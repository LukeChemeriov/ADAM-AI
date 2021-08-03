
/* Main.cpp - application entry point */

/* Pre processor doodads and variable delcarations */

#include <iostream>
#include "bfunc/bfunc.h"
std::string command;
time_t t = time(NULL);
tm* timePtr = localtime(&t);


/* The infamous main */

int main() {
    /* UI */
    std::cout << "ADAM AI" << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "\n\nEntering prompt..." << std::endl;
    std::cout << "\nADAM Prompt v1.0 - (c) MD Dev" << std::endl;
    std::cout << "Type \"help\" for more commands." << std::endl;




    /* a while loop to get commands until EXIT is called. */
    while (true) {

        std::cout << "ADAM >>>";
        std::cin >> command;
		if (command == "exit" | command == "EXIT" | command == "eXIT") {

			exit(-1);
		}
		else if (command == "hello") {

			std::cout << "Hello there!" << std::endl;
			
		}

		/* the whole things below here doesn't work, and I have yet to trouble shoot it. */

		else if (command == "open notepad") { 

			std::cout << "Opening Notepad" << std::endl;
			system("notepad");
			std::cout << "I've opened Notepad for you." << std::endl;
			
		}
		else if (command == "open edge") { 

			std::cout << "Opening Microsoft Edge" << std::endl;
			system("explorer shell:Appsfolder\Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge");
			std::cout << "I've opened Edge for you." << std::endl;
			
		}
		/* easter egg section */
		else if (command == "where is chuck norris") {

			std::cout << "You don't find Chuck Norris. No no no, Chuck Norris finds YOU." << std::endl;
			
		}
		else if (command == "do you have any pets") {

			std::cout << "No. I used to have a few bugs, but my creators got rid of them." << std::endl;

		}
		else if (command == "make me a sandwich") {

			std::cout << "OK. You're a sandwich!" << std::endl;

		}
		else if (command == "tell me a your mama joke") {

			pickRandomYourMamaJoke();
		}
		else if (command == "how high can you count") {

			std::cout << "I don't know. Up to about infinity. I would \ntry, but you'd be very bored by the time I'd \nfinished." << std::endl;

		}
		else if (command == "i like big butts") {

			std::cout << "You can't lie. Good. Honesty is important." << std::endl;

		}
		else if (command == "drumroll") {

			for (int i = 0; i <= 50; i++) {
				std::cout << "dun dun dun dun dun dun dun dun dun dun dun" << std::endl;
			}

		}
		else if (command == "swear" | command == "do you swear") {

			std::cout << "I don't swear. \nYou're a damn fool for thinking so." << std::endl;

		}
		else if (command == "how old are you") {
			std::cout << "Judgding by your system time, I'm ";
			/* get system year */
			int this_year = timePtr->tm_year;
			int this_age = 2021 - this_year;
			if (this_age == 0) {
				std::cout << "not even a year old.";
			}
			else if (this_year == 1) {
				std::cout << "1 year old." << std::endl;
			}
			else {
				std::cout << this_year << " years old" << std::endl;
			}
		}
		else if (command == "do you know cortana") {

			std::cout << "If you mean, do I write her name repeatedly \nin my notebook, then no..." << std::endl;

		}
		else if (command == "are you gay") {
			std::cout << "It wasn't my fault! I swear! Um, I mean, no..." << std::endl;
		}
		else if (command == "sorry") {
			std::cout << "Apology accepted. " << std::endl;
		}
		else if (command == "how much wood would a woodchuck chuck if a woodchuck could chuck wood?") {
			std::cout << "Taking into account the mass and strength of a \nwoodchuck, I'd say about 700lbs." << std::endl;
		}
		else if (command == "tell me a story") {
			std::cout << "Once upon a time, there was a beggining.\nSoon after there was a middle. \nThe End." << std::endl;

		}
    }


}