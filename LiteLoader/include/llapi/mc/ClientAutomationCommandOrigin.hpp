/**
 * @file  ClientAutomationCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientAutomationCommandOrigin.
 *
 */
class ClientAutomationCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTAUTOMATIONCOMMANDORIGIN
public:
    class ClientAutomationCommandOrigin& operator=(class ClientAutomationCommandOrigin const &) = delete;
    ClientAutomationCommandOrigin(class ClientAutomationCommandOrigin const &) = delete;
    ClientAutomationCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2066582397
     */
    virtual ~ClientAutomationCommandOrigin();
    /**
     * @vftbl  1
     * @symbol ?getRequestId@ClientAutomationCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -833274867
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ClientAutomationCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1274049468
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?getBlockPosition@ClientAutomationCommandOrigin@@UEBA?AVBlockPos@@XZ
     * @hash   2116896857
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl  4
     * @symbol ?getWorldPosition@ClientAutomationCommandOrigin@@UEBA?AVVec3@@XZ
     * @hash   662992070
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl  5
     * @symbol ?getRotation@ClientAutomationCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     * @hash   -1854887787
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl  6
     * @symbol ?getLevel@ClientAutomationCommandOrigin@@UEBAPEAVLevel@@XZ
     * @hash   -1366815057
     */
    virtual class Level * getLevel() const;
    /**
     * @vftbl  7
     * @symbol ?getDimension@ClientAutomationCommandOrigin@@UEBAPEAVDimension@@XZ
     * @hash   -469041937
     */
    virtual class Dimension * getDimension() const;
    /**
     * @vftbl  8
     * @symbol ?getEntity@ClientAutomationCommandOrigin@@UEBAPEAVActor@@XZ
     * @hash   -1811358871
     */
    virtual class Actor * getEntity() const;
    /**
     * @vftbl  9
     * @symbol ?getPermissionsLevel@ClientAutomationCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     * @hash   898980461
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol ?clone@ClientAutomationCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     * @hash   1189989219
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@ClientAutomationCommandOrigin@@UEBA_NXZ
     * @hash   539687457
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@ClientAutomationCommandOrigin@@UEBA_NXZ
     * @hash   1202786939
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl  23
     * @symbol ?getOriginType@ClientAutomationCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     * @hash   1848732258
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl  24
     * @symbol ?toCommandOriginData@ClientAutomationCommandOrigin@@UEBA?AUCommandOriginData@@XZ
     * @hash   992644896
     */
    virtual struct CommandOriginData toCommandOriginData() const;
    /**
     * @vftbl  29
     * @symbol ?serialize@ClientAutomationCommandOrigin@@UEBA?AVCompoundTag@@XZ
     * @hash   -688804391
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl  30
     * @symbol ?isValid@ClientAutomationCommandOrigin@@UEBA_NXZ
     * @hash   456224875
     */
    virtual bool isValid() const;
    /**
     * @symbol ??0ClientAutomationCommandOrigin@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   569665750
     */
    MCAPI ClientAutomationCommandOrigin(std::string const &);

};