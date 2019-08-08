//
// Created by Juneseok Byun on 2019-08-08.
//

#include <iostream>
#include <string>
#include <Modules/Hub.hpp>
#include <ModuleWindows/DeckModuleWindow.hpp>
#include <QApplication>
#include <QWidget>


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

    mainHub.AssignDeck(1, &deck1);
    mainMixer.AssignDeck(1, &deck1);
    mainHub.AssignDeck(3, &deck2);
    mainMixer.AssignDeck(3, &deck2);

    mainHub.PrintState();

    mainHub.CheckDeckState();

    // test DeckModule & DeckModuleWindow
    // Bfdj::DeckModuleWindow testDeckWindow(nullptr ,&deck1);
    // testDeckWindow.show();

    return app.exec();
}