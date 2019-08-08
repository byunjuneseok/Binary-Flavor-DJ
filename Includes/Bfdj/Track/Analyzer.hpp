//
// Created by Juneseok Byun on 2019-05-27.
//

#ifndef BINARYFLAVORDJ_ANALYZER_HPP
#define BINARYFLAVORDJ_ANALYZER_HPP

#include <string>

namespace Bfdj
{
    class Analyzer
    {
    public:
        Analyzer()=default;
        ~Analyzer()=default;

        void ReadMetaData();
        void Analyze();


    private:
        const std::string* m_FilePath = nullptr;

    };
}

#endif //BINARYFLAVORDJ_ANALYZER_H

// deck -> MixerCh -> Mixer -> Hub
// deck -> Hub
