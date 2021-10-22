#include "span.hpp"

span::span() : _data(std::set<int>()), _max_data(0)
{
}

span::span(const int n) : _data(std::set<int>()), _max_data(n)
{
}

span::span(const span &copy)
{
   *this = copy;
}

span::~span()
{
}

span    &span::operator=(const span &other)
{
   if (this == &other)
      return (*this);
   this->_data = std::set<int>(other._getData());
   this->_max_data = other._getMaxData();
   return (*this);
}

void    span::addNumber(const int n) throw(span::IndexArrayOutOfBounds)
{
   if (_data.size() < _max_data)
      _data.insert(n);
   else
      throw(span::IndexArrayOutOfBounds());
}

uint32_t span::shortestSpan(void) const
{
   uint32_t  shortest = static_cast<long>(INT32_MAX) * 2L + 1L;
   
   if (this->_data.size() < 2)
      return (0);
   std::set<int>::const_iterator it = this->_data.begin();
   while (it != this->_data.end())
   {
      std::set<int>::const_iterator buf = std::set<int>::const_iterator(it);
      it++;
      uint32_t  short_buf = MAX(*buf, *it) -  MIN(*buf, *it);
      if (short_buf < shortest) 
         shortest = short_buf;
   }
   return (shortest);
}

uint32_t span::longestSpan(void) const
{
   if (this->_data.size() > 1)
      return (*(--this->_data.end()) - *this->_data.begin());
   return (0);
}

const std::set<int> &span::_getData() const
{
   return (this->_data);
}

size_t              span::_getMaxData() const
{
   return (this->_max_data);
}



    