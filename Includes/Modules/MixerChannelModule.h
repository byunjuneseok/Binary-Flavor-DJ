//
// Created by Juneseok Byun on 2019-06-02.
//

#ifndef BINARYFLAVORDJ_MIXERCHANNELMODULE_H
#define BINARYFLAVORDJ_MIXERCHANNELMODULE_H

#include <Modules/DeckModule.h>

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
        float mVolumeFaderValue = 0;
        float mTrimKnobValue = 50;
        float mEQHighKnobValue = 50;
        float mEQMidKnobValue = 50;
        float mEQLowKnobValue = 50;

    private:
        Bfdj::DeckModule* m_parentDeck = nullptr;

    };

}
#endif //BINARYFLAVORDJ_MIXERCHANNELMODULE_H
