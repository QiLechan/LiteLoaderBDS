// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AttributeInstanceDelegate.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HungerAttributeDelegate : public AttributeInstanceDelegate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUNGERATTRIBUTEDELEGATE
public:
    class HungerAttributeDelegate& operator=(class HungerAttributeDelegate const&) = delete;
    HungerAttributeDelegate(class HungerAttributeDelegate const&) = delete;
    HungerAttributeDelegate() = delete;
#endif

public:
    /*0*/ virtual ~HungerAttributeDelegate();
    /*1*/ virtual void tick();
    /*2*/ virtual void notify(__int64);
    /*3*/ virtual void __unk_vfn_0();
    MCAPI HungerAttributeDelegate(class AttributeInstance const&, class Player*);

protected:

private:

};