//
// Created by Juneseok Byun on 2019-06-02.
//

#include <Modules/MixerChannelModule.hpp>

namespace Bfdj
{
    MixerChannelModule::MixerChannelModule(Bfdj::DeckModule* parentDeck)
    :m_parentDeck(parentDeck)
    {

    }

    Bfdj::DeckModule* MixerChannelModule::GetParentDeckPointer() const
    {
        return m_parentDeck;
    }
}
