#ifndef _RIGGED_H_
#define _RIGGED_H
#include <iostream>
#include <string> 
#include <vector>

class Rigged
{
        private: 
        std::vector <std::string> lotteryEntrants;

        public:
        void enterName(std::string);

        std::string winner();

};

#endif
