#include <iostream>
#include <string>

#include <Modules/Hub.h>

#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

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

    mainHub.show();

    std::cout << "Y" << std::endl;

    std::cout << "X" << std::endl;

    return app.exec();
}