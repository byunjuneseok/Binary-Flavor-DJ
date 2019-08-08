//
// Created by Juneseok Byun on 2019-05-10.
//

#ifndef BINARY_FLAVOR_DJ_DECKMODULE_HPP
#define BINARY_FLAVOR_DJ_DECKMODULE_HPP

#include <Modules/Module.hpp>

#include <Track/MetaData.hpp>
#include <Track/Analyzer.hpp>

#include <string>

namespace Bfdj
{
    class DeckModule : public Module
    {
    public:
        DeckModule() = default;
        ~DeckModule() override = default;

        bool loadTrack(std::string &filePath);

        int GetDeckNumber();

        void Play();
        void Cue();

    protected:
        int m_DeckNumber = 0;

    private:
        bool playState = false;
        Bfdj::MetaData* m_MetaData = new Bfdj::MetaData;
        Bfdj::Analyzer* m_Analyzer = new Bfdj::Analyzer;
    };
}

#endif //BINARY_FLAVOR_DJ_DECK_H
