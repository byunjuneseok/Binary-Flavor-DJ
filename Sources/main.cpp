#include <iostream>
#include <string>

#include <Modules/Hub.h>

#include <QApplication>
#include <QWidget>
#include <ModuleWindows/DeckModuleWindow.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Bfdj::MixerModule mainMixer;
    mainMixer.SetName("Main Mixer");

    std::cout << "Create module." << std::endl;
    Bfdj::DeckModule deck1;
    Bfdj::DeckModule deck2;
    deck1.SetName("Deck 1");
    deck2.SetName("Deck 2");

    std::cout << "Assign Mixer." << std::endl;
    Bfdj::Hub mainHub;
    mainHub.AssignMixer(mainMixer);
    mainHub.PrintState();

    std::cout << "Assign deck." << std::endl;

    mainMixer.SetName("Changed Mixer Name");
    
    mainHub.AssignDeck(1, deck1);
    mainHub.AssignDeck(3, deck2);
    mainHub.PrintState();

    // test DeckModule & DeckModuleWindow
    Bfdj::DeckModuleWindow testDeckWindow(nullptr ,&deck1);
    testDeckWindow.show();

    return app.exec();
}