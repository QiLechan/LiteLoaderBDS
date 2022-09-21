/**
 * @file  Abilities.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Ability.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Abilities.
 *
 */
class Abilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABILITIES
public:
    Abilities() = delete;
#endif

public:
    /**
     * @symbol ??0Abilities@@QEAA@_N@Z
     * @hash   523836413
     */
    MCAPI Abilities(bool);
    /**
     * @symbol ??0Abilities@@QEAA@AEBV0@@Z
     * @hash   -1961837919
     */
    MCAPI Abilities(class Abilities const &);
    /**
     * @symbol ?addSaveData@Abilities@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -393917466
     */
    MCAPI void addSaveData(class CompoundTag &) const;
    /**
     * @symbol ?forEachAbility@Abilities@@QEAAXAEBV?$function@$$A6AXAEAVAbility@@W4AbilitiesIndex@@@Z@std@@W4Options@Ability@@@Z
     * @hash   -1112281706
     */
    MCAPI void forEachAbility(class std::function<void (class Ability &, enum class AbilitiesIndex)> const &, enum class Ability::Options);
    /**
     * @symbol ?forEachAbility@Abilities@@QEBAXAEBV?$function@$$A6AXAEBVAbility@@W4AbilitiesIndex@@@Z@std@@W4Options@Ability@@@Z
     * @hash   -414593708
     */
    MCAPI void forEachAbility(class std::function<void (class Ability const &, enum class AbilitiesIndex)> const &, enum class Ability::Options) const;
    /**
     * @symbol ?getAbility@Abilities@@QEAAAEAVAbility@@W4AbilitiesIndex@@@Z
     * @hash   1459513249
     */
    MCAPI class Ability & getAbility(enum class AbilitiesIndex);
    /**
     * @symbol ?getAbility@Abilities@@QEBAAEBVAbility@@W4AbilitiesIndex@@@Z
     * @hash   2129180225
     */
    MCAPI class Ability const & getAbility(enum class AbilitiesIndex) const;
    /**
     * @symbol ?getBool@Abilities@@QEBA_NW4AbilitiesIndex@@@Z
     * @hash   18642761
     */
    MCAPI bool getBool(enum class AbilitiesIndex) const;
    /**
     * @symbol ?getFloat@Abilities@@QEBAMW4AbilitiesIndex@@@Z
     * @hash   1662307299
     */
    MCAPI float getFloat(enum class AbilitiesIndex) const;
    /**
     * @symbol ?isAnyAbilitySet@Abilities@@QEBA_NXZ
     * @hash   -387993378
     */
    MCAPI bool isAnyAbilitySet() const;
    /**
     * @symbol ?loadSaveData@Abilities@@QEAA_NAEBVCompoundTag@@@Z
     * @hash   1071667927
     */
    MCAPI bool loadSaveData(class CompoundTag const &);
    /**
     * @symbol ??4Abilities@@QEAAAEAV0@AEBV0@@Z
     * @hash   -1434120452
     */
    MCAPI class Abilities & operator=(class Abilities const &);
    /**
     * @symbol ??8Abilities@@QEBA_NAEBV0@@Z
     * @hash   -2059693889
     */
    MCAPI bool operator==(class Abilities const &) const;
    /**
     * @symbol ?setAbility@Abilities@@QEAAXW4AbilitiesIndex@@AEBVAbility@@@Z
     * @hash   143022311
     */
    MCAPI void setAbility(enum class AbilitiesIndex, class Ability const &);
    /**
     * @symbol ?setAbility@Abilities@@QEAAXW4AbilitiesIndex@@M@Z
     * @hash   1990590527
     */
    MCAPI void setAbility(enum class AbilitiesIndex, float);
    /**
     * @symbol ?setAbility@Abilities@@QEAAXW4AbilitiesIndex@@_N@Z
     * @hash   -329498393
     */
    MCAPI void setAbility(enum class AbilitiesIndex, bool);
    /**
     * @symbol ?setAbilityDiff@Abilities@@QEAAXW4AbilitiesIndex@@_NAEA_N@Z
     * @hash   2068041913
     */
    MCAPI void setAbilityDiff(enum class AbilitiesIndex, bool, bool &);
    /**
     * @symbol ?setDefault@Abilities@@QEAAXXZ
     * @hash   -1383853727
     */
    MCAPI void setDefault();
    /**
     * @symbol ?setFromPermissions@Abilities@@QEAAXW4PlayerPermissionLevel@@@Z
     * @hash   448727008
     */
    MCAPI void setFromPermissions(enum class PlayerPermissionLevel);
    /**
     * @symbol ?unSet@Abilities@@QEAAXW4AbilitiesIndex@@@Z
     * @hash   259223492
     */
    MCAPI void unSet(enum class AbilitiesIndex);
    /**
     * @symbol ?unSet@Abilities@@QEAAXXZ
     * @hash   1001812343
     */
    MCAPI void unSet();
    /**
     * @symbol ?INVALID_ABILITY@Abilities@@2VAbility@@A
     * @hash   1452794941
     */
    MCAPI static class Ability INVALID_ABILITY;
    /**
     * @symbol ?SERIALIZATION_TAG@Abilities@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1613066765
     */
    MCAPI static std::string const SERIALIZATION_TAG;
    /**
     * @symbol ?getAbilityName@Abilities@@SAPEBDW4AbilitiesIndex@@@Z
     * @hash   629696552
     */
    MCAPI static char const * getAbilityName(enum class AbilitiesIndex);
    /**
     * @symbol ?getDefault@Abilities@@SAAEBVAbility@@W4AbilitiesIndex@@@Z
     * @hash   1146133869
     */
    MCAPI static class Ability const & getDefault(enum class AbilitiesIndex);
    /**
     * @symbol ?nameToAbilityIndex@Abilities@@SA?AW4AbilitiesIndex@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1718930905
     */
    MCAPI static enum class AbilitiesIndex nameToAbilityIndex(std::string const &);

//private:

private:
    /**
     * @symbol ?ABILITY_NAMES@Abilities@@0V?$array@PEBD$0BC@@std@@A
     * @hash   -767147388
     */
    MCAPI static class std::array<char const *, 18> ABILITY_NAMES;

};