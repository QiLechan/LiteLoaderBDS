/**
 * @file  SeedItemComponentLegacy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SeedItemComponentLegacy.
 *
 */
class SeedItemComponentLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEEDITEMCOMPONENTLEGACY
public:
    class SeedItemComponentLegacy& operator=(class SeedItemComponentLegacy const &) = delete;
    SeedItemComponentLegacy(class SeedItemComponentLegacy const &) = delete;
    SeedItemComponentLegacy() = delete;
#endif

public:
    /**
     * @symbol ??0SeedItemComponentLegacy@@QEAA@AEAVItem@@@Z
     * @hash   -719103297
     */
    MCAPI SeedItemComponentLegacy(class Item &);
    /**
     * @symbol ?init@SeedItemComponentLegacy@@QEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   1455183640
     */
    MCAPI bool init(class Json::Value &, class SemVersion const &);
    /**
     * @symbol ?isPlanting@SeedItemComponentLegacy@@QEBA_NXZ
     * @hash   -800054228
     */
    MCAPI bool isPlanting() const;
    /**
     * @symbol ?setPlanting@SeedItemComponentLegacy@@QEAAX_N@Z
     * @hash   1208647666
     */
    MCAPI void setPlanting(bool);
    /**
     * @symbol ?useOn@SeedItemComponentLegacy@@QEAA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
     * @hash   1524700620
     */
    MCAPI bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &);

//private:
    /**
     * @symbol ?_canPlant@SeedItemComponentLegacy@@AEBA_NAEBVBlock@@@Z
     * @hash   -1736286259
     */
    MCAPI bool _canPlant(class Block const &) const;

private:

};