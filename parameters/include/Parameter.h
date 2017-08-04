#ifndef PARAMETER_H
#define PARAMETER_H

#include <map>

template <class T>
class Parameter
{
public:
    Parameter(const T default_value)
        : m_default_value(default_value), m_effective_value(default_value) {}

    virtual ~Parameter() {}

    Parameter(const Parameter<T>& other)
        : m_default_value(other.m_default_value), m_effective_value(other.m_effective_value) {}


    Parameter& operator=(const Parameter& other)
    {
        m_effective_value = other.m_effective_value;
        return *this;
    }

    T operator*()
    {
        return m_effective_value;
    }

    void reset()
    {
        set_value(m_default_value);
    }

    T get_value()
    {
        return m_effective_value;
    }

    T set_value(T new_value)
    {
        T previous_value = m_effective_value;
        m_effective_value = new_value;
        return previous_value;
    }

    operator T() const {return m_effective_value;}

protected:

private:
    T m_default_value;
    T m_effective_value;
};

template <class S, class K, class T>
class ParameterSet
{

public:
    ParameterSet(S source)
    : m_source(source)
    {}

    bool load() {
        // use stream metaphor to load hash of Parameter<T> objects from source.
        return true;
    }

    T& operator[] (K index) {

        return m_parameters[index];

    }

protected:

private:

    const S m_source;
    std::map<K,T> m_parameters;


};

#endif // PARAMETER_H
