//
// Created by Juneseok Byun on 2019-05-27.
//

#ifndef BINARYFLAVORDJ_ANALYZER_H
#define BINARYFLAVORDJ_ANALYZER_H

#include <string>

namespace Bfdj
{
    class Analyzer
    {
    public:
        Analyzer();
        ~Analyzer();

        void ReadMetaData();
        void Analyze();


    private:
        const std::string* m_FilePath = nullptr;

    };
}

#endif //BINARYFLAVORDJ_ANALYZER_H
