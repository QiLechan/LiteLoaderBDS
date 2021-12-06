// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_SEEDITEMCOMPONENTLEGACY
#include "Extra/SeedItemComponentLegacyAPI.hpp"
#undef EXTRA_INCLUDE_PART_SEEDITEMCOMPONENTLEGACY
class SeedItemComponentLegacy {
#include "Extra/SeedItemComponentLegacyAPI.hpp"
public:
    MCAPI bool init(class Json::Value&, class SemVersion const&);
    MCAPI bool isPlanting() const;
    MCAPI void setPlanting(bool);
    MCAPI bool useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&);

protected:

private:
    MCAPI bool _canPlant(class Block const&) const;
};