#ifndef KID_HPP
#define KID_HPP

#include <iostream>
using namespace std;

namespace wrapper {
class Kid : public {
  public:
    Kid();
    ~Kid();
    int getID();
    int getTID();
    bool isStanding();
    void standUp();
    void doMarch();
  private:
    int id;
    int tid;
  };
}