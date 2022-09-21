/**
 * @file  GameRules.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "GameRule.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameRules.
 *
 */
class GameRules {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULES
public:
    class GameRules& operator=(class GameRules const &) = delete;
#endif

public:
    /**
     * @symbol ??0GameRules@@QEAA@XZ
     * @hash   -455221919
     */
    MCAPI GameRules();
    /**
     * @symbol ??0GameRules@@QEAA@AEBV0@@Z
     * @hash   -215995999
     */
    MCAPI GameRules(class GameRules const &);
    /**
     * @symbol ?createAllGameRulesPacket@GameRules@@QEBA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@XZ
     * @hash   1674611462
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> createAllGameRulesPacket() const;
    /**
     * @symbol ?deserializeRules@GameRules@@QEAAXAEBVGameRulesChangedPacketData@@@Z
     * @hash   -877113616
     */
    MCAPI void deserializeRules(class GameRulesChangedPacketData const &);
    /**
     * @symbol ?getBool@GameRules@@QEBA_NUGameRuleId@@_N@Z
     * @hash   -567370516
     */
    MCAPI bool getBool(struct GameRuleId, bool) const;
    /**
     * @symbol ?getInt@GameRules@@QEBAHUGameRuleId@@@Z
     * @hash   1640906435
     */
    MCAPI int getInt(struct GameRuleId) const;
    /**
     * @symbol ?getRule@GameRules@@QEBAPEBVGameRule@@UGameRuleId@@@Z
     * @hash   -236064116
     */
    MCAPI class GameRule const * getRule(struct GameRuleId) const;
    /**
     * @symbol ?getRules@GameRules@@QEBAAEBV?$vector@VGameRule@@V?$allocator@VGameRule@@@std@@@std@@XZ
     * @hash   672737930
     */
    MCAPI std::vector<class GameRule> const & getRules() const;
    /**
     * @symbol ?getTagData@GameRules@@QEAAXAEBVCompoundTag@@@Z
     * @hash   2066258920
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @symbol ?hasRule@GameRules@@QEBA_NUGameRuleId@@@Z
     * @hash   1028652439
     */
    MCAPI bool hasRule(struct GameRuleId) const;
    /**
     * @symbol ?nameToGameRuleIndex@GameRules@@QEBA?AUGameRuleId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   825811271
     */
    MCAPI struct GameRuleId nameToGameRuleIndex(std::string const &) const;
    /**
     * @symbol ?setMarketplaceOverrides@GameRules@@QEAAXXZ
     * @hash   664031761
     */
    MCAPI void setMarketplaceOverrides();
    /**
     * @symbol ?setRule@GameRules@@QEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@H_NPEA_N2PEAVValidationError@GameRule@@@Z
     * @hash   -1622559970
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, int, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?setRule@GameRules@@QEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@M_NPEA_N2PEAVValidationError@GameRule@@@Z
     * @hash   7800140
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, float, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?setRule@GameRules@@QEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@_N1PEA_N2PEAVValidationError@GameRule@@@Z
     * @hash   -2092373816
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, bool, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?setTagData@GameRules@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -405899852
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @symbol ??1GameRules@@QEAA@XZ
     * @hash   443139697
     */
    MCAPI ~GameRules();
    /**
     * @symbol ?DEFAULT_PLAYER_SPAWN_RADIUS@GameRules@@2IB
     * @hash   781852589
     */
    MCAPI static unsigned int const DEFAULT_PLAYER_SPAWN_RADIUS;
    /**
     * @symbol ?DEFAULT_RANDOMTICKSPEED@GameRules@@2HB
     * @hash   56490363
     */
    MCAPI static int const DEFAULT_RANDOMTICKSPEED;
    /**
     * @symbol ?MAX_FUNCTIONCOMMANDLIMIT@GameRules@@2HB
     * @hash   1407316245
     */
    MCAPI static int const MAX_FUNCTIONCOMMANDLIMIT;
    /**
     * @symbol ?MAX_PLAYER_SPAWN_RADIUS@GameRules@@2IB
     * @hash   224269819
     */
    MCAPI static unsigned int const MAX_PLAYER_SPAWN_RADIUS;
    /**
     * @symbol ?MAX_RANDOMTICKSPEED@GameRules@@2HB
     * @hash   162853829
     */
    MCAPI static int const MAX_RANDOMTICKSPEED;
    /**
     * @symbol ?MIN_PLAYER_SPAWN_RADIUS@GameRules@@2IB
     * @hash   944521171
     */
    MCAPI static unsigned int const MIN_PLAYER_SPAWN_RADIUS;
    /**
     * @symbol ?WORLD_POLICY_TAG_NAME@GameRules@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   219708553
     */
    MCAPI static std::string const WORLD_POLICY_TAG_NAME;

//private:
    /**
     * @symbol ?_registerRule@GameRules@@AEAAAEAVGameRule@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UGameRuleId@@@Z
     * @hash   -1941025612
     */
    MCAPI class GameRule & _registerRule(std::string const &, struct GameRuleId);
    /**
     * @symbol ?_registerRules@GameRules@@AEAAXXZ
     * @hash   421060780
     */
    MCAPI void _registerRules();
    /**
     * @symbol ?_setGameRule@GameRules@@AEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@PEAVGameRule@@TValue@4@W4Type@4@_NPEA_N4PEAVValidationError@4@@Z
     * @hash   1651551429
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setGameRule(class GameRule *, union GameRule::Value, enum class GameRule::Type, bool, bool *, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?_setRule@GameRules@@AEAA?AV?$unique_ptr@VGameRulesChangedPacket@@U?$default_delete@VGameRulesChangedPacket@@@std@@@std@@UGameRuleId@@TValue@GameRule@@W4Type@6@_NPEA_N4PEAVValidationError@6@@Z
     * @hash   676481444
     */
    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setRule(struct GameRuleId, union GameRule::Value, enum class GameRule::Type, bool, bool *, bool *, class GameRule::ValidationError *);

private:

};