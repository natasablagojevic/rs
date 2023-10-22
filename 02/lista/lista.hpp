#pragma once

#include<iostream>
#include<memory>

namespace matf 
{
  class lista
  {
    public:
      // definisi mi podrazumevanu implementaciju za ovaj konstruktor
      lista() = default;  

      void push_back(int x) 
      {
        
      };

      void push_front(int x) 
      {
        auto newElement = std::make_unique<element>(x, std::move(m_start));
        m_start = std::move(newElement);
        ++m_size;
      };

      size_t size() const {return m_size;}

      int operator[](size_t index) const
      {
        if (!m_start)
          throw "index out of bounds";

        auto current = m_start.get();
        for (auto i = 0u; i < index; ++i) {
          current = current->m_next.get();

          if (!current)
            throw "index out of bounds";
        }

        return current->m_value;
       }

    private:

      class element 
      {
        public:
          element(int value = 0, std::unique_ptr<element> next = nullptr) 
            : m_value(value), m_next(std::move(next)) {}
             
        private:
          int m_value;
          std::unique_ptr<element> m_next;
      };

      size_t m_size;
      std::unique_ptr<element> m_start = nullptr;


  };

  std::ostream &operator<<(std::ostream &out, const matf::lista &l);
}