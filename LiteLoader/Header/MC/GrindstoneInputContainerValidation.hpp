// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GrindstoneInputContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GRINDSTONEINPUTCONTAINERVALIDATION
public:
    class GrindstoneInputContainerValidation& operator=(class GrindstoneInputContainerValidation const&) = delete;
    GrindstoneInputContainerValidation(class GrindstoneInputContainerValidation const&) = delete;
    GrindstoneInputContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~GrindstoneInputContainerValidation();
    /*1*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual int getContainerOffset(class ContainerScreenContext const&) const;

protected:

private:

};