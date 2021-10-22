#pragma once

#include <exception>
#include <set>

#define ABS(x) (x < 0 ? -x : x)
#define MAX(x, y) (x < y ? y : x)
#define MIN(x, y) (x < y ? x : y)

class span 
{
    private:
        std::set<int>       _data;
        size_t              _max_data;
    
        const std::set<int> &_getData() const;
        size_t              _getMaxData() const;

    public:
        span();
        span(const int n);
        span(const span &copy);
        ~span();

        span        &operator=(const span &other);

        class   IndexArrayOutOfBounds : public std::exception
        {
            virtual const char  *what () const throw()
            {
                return ("Index array out of bounds.");
            }
        };

        void        addNumber(const int n) throw(span::IndexArrayOutOfBounds);

        uint32_t    shortestSpan(void) const;
        uint32_t    longestSpan(void) const;
};
