#include <utility>

#include <utility>

//
// Created by Juneseok Byun on 2019-05-13.
//

#ifndef BINARYFLAVORDJ_MODULE_HPP
#define BINARYFLAVORDJ_MODULE_HPP

#include <string>

namespace Bfdj
{
    class Module
    {
    public:
        Module() = default;
        virtual ~Module() = default;

        void SetName(std::string name)
        {
            name = std::move(name);
        }

        std::string GetName() const
        {
            return name;
        }

    protected:
        std::string name;

    };

}


#endif //BINARYFLAVORDJ_MODULE_H
