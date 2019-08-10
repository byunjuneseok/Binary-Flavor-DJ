//
// Created by Juneseok Byun on 2019-06-02.
//

#ifndef BINARYFLAVORDJ_MIXERCHANNELMODULE_HPP
#define BINARYFLAVORDJ_MIXERCHANNELMODULE_HPP

#include <Modules/DeckModule.hpp>

namespace Bfdj
{
    class MixerChannelModule : public Module
    {
    public:
        explicit MixerChannelModule(Bfdj::DeckModule* parentDeck);

        ~MixerChannelModule() override = default;

        void SetVolumeFaderValue(float value);
        void SetTrimKnobValue(float value);
        void SetEQHighKnobValue(float value);
        void SetEQMidKnobValue(float value);
        void SetEQLowKnobValue(float value);

        void LimitValue(float value);
        Bfdj::DeckModule* GetParentDeckPointer() const;

    protected:
        float volumeFaderValue = 0;
        float trimKnobValue = 50;
        float eqHighKnobValue = 50;
        float eqMidKnobValue = 50;
        float eqLowKnobValue = 50;

    private:
        Bfdj::DeckModule* m_parentDeck = nullptr;

    };

}
#endif //BINARYFLAVORDJ_MIXERCHANNELMODULE_H
