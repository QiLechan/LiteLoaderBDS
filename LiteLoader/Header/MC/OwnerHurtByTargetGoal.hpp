// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OwnerHurtByTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERHURTBYTARGETGOAL
public:
    class OwnerHurtByTargetGoal& operator=(class OwnerHurtByTargetGoal const&) = delete;
    OwnerHurtByTargetGoal(class OwnerHurtByTargetGoal const&) = delete;
    OwnerHurtByTargetGoal() = delete;
#endif

public:
    /*0*/ virtual ~OwnerHurtByTargetGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void start();
    /*4*/ virtual void stop();
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void __unk_vfn_2();
    MCAPI OwnerHurtByTargetGoal(class Mob&, std::vector<struct MobDescriptor> const&);

protected:

private:

};