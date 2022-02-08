// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WallClimberPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALLCLIMBERPATHNAVIGATION
public:
    class WallClimberPathNavigation& operator=(class WallClimberPathNavigation const&) = delete;
    WallClimberPathNavigation(class WallClimberPathNavigation const&) = delete;
    WallClimberPathNavigation() = delete;
#endif

public:
    /*0*/ virtual ~WallClimberPathNavigation();
    /*1*/ virtual void tick(class NavigationComponent&, class Mob&);
    /*2*/ virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Vec3 const&);
    /*3*/ virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Actor&);
    /*4*/ virtual bool moveTo(class NavigationComponent&, class Mob&, class Actor&, float);
    /*5*/ virtual void stop(class NavigationComponent&, class Mob&);
    /*6*/ virtual void __unk_vfn_0();
    /*7*/ virtual bool canUpdatePath(class Mob const&) const;

protected:

private:

};