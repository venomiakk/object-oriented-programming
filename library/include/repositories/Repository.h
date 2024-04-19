//
// Created by adrian on 21.06.23.
//

#ifndef COMPUTERSERVICE_REPOSITORY_H
#define COMPUTERSERVICE_REPOSITORY_H

#include <memory>
#include <string>
#include <vector>


using namespace std;


template <class T>
class Repository
{
public:
    virtual const vector<shared_ptr<T>>& getStorage() const= 0;
    virtual bool add(const shared_ptr<T>&) = 0;
    virtual void rm(const shared_ptr<T>&)= 0;
    virtual string report() const = 0;
    virtual const shared_ptr<T>& get(const int&) const= 0;
    virtual ~Repository()= default;
};


#endif //COMPUTERSERVICE_REPOSITORY_H
