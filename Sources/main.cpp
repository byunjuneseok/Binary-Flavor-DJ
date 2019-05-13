#include <iostream>
#include <string>

#include <Hub/Hub.h>
#include <Windows/Window.h>
#include <Windows/MixerWindow.h>

int main() {
    Binaryflavordj::MixerModule mainMixer;
    mainMixer.SetName("Main Mixer");

    std::cout << "Create module." << std::endl;
    Binaryflavordj::DeckModule deck1;
    Binaryflavordj::DeckModule deck2;
    deck1.SetName("Deck 1");
    deck2.SetName("Deck 2");

    std::cout << "Assign Mixer." << std::endl;
    Binaryflavordj::Hub mainHub;
    mainHub.AssignMixer(mainMixer);
    mainHub.PrintState();

    std::cout << "Assign deck." << std::endl;

    mainMixer.SetName("Changed Mixer Name");
    
    mainHub.AssignDeck(1, deck1);
    mainHub.AssignDeck(3, deck2);
    mainHub.PrintState();


    return 0;
}