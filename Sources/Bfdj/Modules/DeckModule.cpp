//
// Created by Juneseok Byun on 2019-05-13.
//
#include <Modules/DeckModule.h>
#include <iostream>
#include <string>

namespace Bfdj
{
    bool DeckModule::loadTrack(std::string &filePath)
    {
        if (playState)
        {
            return false;
        }
        else
        {
            m_MetaData->ReadMetaData(filePath);
            m_Analyzer->Analyze();
            return true;
        }
    }

    int DeckModule::GetDeckNumber()
    {
        return m_DeckNumber;
    }

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