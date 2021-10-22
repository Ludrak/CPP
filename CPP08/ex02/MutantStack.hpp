#pragma once

#include <stack>
#include <vector>
template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator                 iterator;
        typedef typename std::stack<T>::container_type::const_iterator           const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator         reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator   const_reverse_iterator;

        const_iterator          cbegin() const
        {
            return (this->c.cbegin());
        }

        iterator                begin()
        {
            return (this->c.begin());
        }

        const_reverse_iterator  crbegin() const
        {
            return (this->c.crbegin());
        }

        reverse_iterator        rbegin()
        {
            return (this->c.rbegin());
        }

        const_iterator          cend() const
        {
            return (this->c.cend());
        }

        iterator                end()
        {
            return (this->c.end());
        }

        const_reverse_iterator  crend() const
        {
            return (this->c.crend());
        }

        reverse_iterator        rend()
        {
            return (this->c.rend());
        }
};
