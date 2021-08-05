/* 
bfunc.h - basic functions (tho at time of writing, creator LukeChemeriov can't see this actually being used much.)
 */

/* pre-processor things */
#include <iostream>
#include <cstdlib>

/* pick random joke */
void pickRandomYourMamaJoke() {
    int maxRandomNumber = 7;
    srand(time(0));
    int randomNumber = rand()%maxRandomNumber;
    try {
        switch (randomNumber) {
            case 1:
                std::cout << "Yo mama is so cool, she deserves a present!" << std::endl;
            case 2:
                std::cout << "Yo mama is so nice, you're luck to have her!" << std::endl;
            case 3:
                std::cout << "Yo mama so fit that she could run a marathon, \nteach a Zumba class AND climb Mount Everest without stopping to catch her breath once." << std::endl;
            case 4:
                std::cout << "Yo mama so smart that an employee from \nWikipedia calls her when they need to verify facts about 18th century political figures." << std::endl;
            case 5:
                std::cout << "Yo mama's like a puppy... everybody wants to give her a hug." << std::endl;
            case 6:
                std::cout << "Yo mama's breath smells so fresh that Tesco could make a chewing gum flavour based on it." << std::endl;
                std::cout << "MD Dev is not affiliated with Tesco." << std::endl;
            
        }
    
    }
    catch (int Exception) {
        std::cout << "Yo mama's ageing with such grace and beauty that she could be featured on the cover of Elle magazine." << std::endl;
    }
}