//
// Created by Juneseok Byun on 2019-05-13.
//
#include <Modules/DeckModule.h>
#include <iostream>

namespace Bfdj
{
    void DeckModule::Play()
    {
        if (playState)
        {
            playState = false;
            std::cout << "Playing -> Paused" << std::endl;
        }
        else
        {
            playState = true;
            std::cout << "Paused -> Playing" << std::endl;
        }
    }

    void DeckModule::Cue()
    {
        if (playState)
        {
            playState = false;

            std::cout << "Back to the Cue point." << std::endl;
            std::cout << "Playing -> Paused" << std::endl;

        }
        else
        {
            std::cout << "Save the cue point." << std::endl;
        }
    }
}