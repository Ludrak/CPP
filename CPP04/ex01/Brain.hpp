#pragma once

#include <string>
#include <iostream>

class Brain 
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain &copy);
        ~Brain();

        Brain   &operator=(const Brain &other);

        void        addIdea(const std::string &idea);
        std::string &getIdea(const int index) const;
};
