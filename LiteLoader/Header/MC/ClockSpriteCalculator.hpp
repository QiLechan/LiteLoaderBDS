// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ClockSpriteCalculator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLOCKSPRITECALCULATOR
public:
    class ClockSpriteCalculator& operator=(class ClockSpriteCalculator const &) = delete;
    ClockSpriteCalculator(class ClockSpriteCalculator const &) = delete;
#endif

public:
    MCAPI ClockSpriteCalculator();
    MCAPI int getFrame() const;
    MCAPI int update(class Actor &, bool);
    MCAPI int update(class BlockSource const &, class Vec3 const &, bool);

protected:

private:

};