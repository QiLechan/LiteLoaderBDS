/**
 * @file  DeferredDescriptor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemDescriptor.hpp"
#include "Json.hpp"
#include "ItemTagDescriptor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeferredDescriptor.
 *
 */
class DeferredDescriptor : public ItemTagDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDDESCRIPTOR
public:
    class DeferredDescriptor& operator=(class DeferredDescriptor const &) = delete;
    DeferredDescriptor(class DeferredDescriptor const &) = delete;
    DeferredDescriptor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?clone@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     * @hash   -1556039588
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @vftbl  2
     * @symbol ?sameItem@DeferredDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
     * @hash   1725484296
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @vftbl  3
     * @symbol ?getFullName@DeferredDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1650684214
     */
    virtual std::string const & getFullName() const;
    /**
     * @vftbl  6
     * @symbol ?toMap@DeferredDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     * @hash   -1763282974
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @vftbl  7
     * @symbol ?save@DeferredDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
     * @hash   -1268735418
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @vftbl  9
     * @symbol ?getType@DeferredDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
     * @hash   -1114845567
     */
    virtual enum class ItemDescriptor::InternalType getType() const;
    /**
     * @vftbl  10
     * @symbol ?shouldResolve@DeferredDescriptor@@UEBA_NXZ
     * @hash   -1712213597
     */
    virtual bool shouldResolve() const;
    /**
     * @vftbl  11
     * @hash   -341782524
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol ?resolve@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     * @hash   -1420433781
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;

//private:
    /**
     * @symbol ?_initFromBlockLegacy@DeferredDescriptor@@AEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@AEBVBlockLegacy@@$$QEAV?$WeakPtr@VItem@@@@@Z
     * @hash   1963471029
     */
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> _initFromBlockLegacy(class BlockLegacy const &, class WeakPtr<class Item> &&) const;
    /**
     * @symbol ?_initFromItem@DeferredDescriptor@@AEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@$$QEAV?$WeakPtr@VItem@@@@F@Z
     * @hash   -1700663717
     */
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> _initFromItem(class WeakPtr<class Item> &&, short) const;

private:

};