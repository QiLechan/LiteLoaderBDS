// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTRESULTS_DEPRECATEDASKTYLAING
public:
    class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING& operator=(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &) = delete;
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &) = delete;
#endif

public:
    /*
    inline bool _read(class ReadOnlyBinaryStream & a0){
        bool (ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING::*rv)(class ReadOnlyBinaryStream &);
        *((void**)&rv) = dlsym("?_read@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@MEAA_NAEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream &>(a0));
    }
    inline void _write(class BinaryStream & a0) const{
        void (ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING::*rv)(class BinaryStream &) const;
        *((void**)&rv) = dlsym("?_write@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@MEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream &>(a0));
    }
    inline void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette & a0, bool a1){
        void (ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING::*rv)(class BlockPalette &, bool);
        *((void**)&rv) = dlsym("?postLoadItems_DEPRECATEDASKTYLAING@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@UEAAXAEAVBlockPalette@@_N@Z");
        return (this->*rv)(std::forward<class BlockPalette &>(a0), std::forward<bool>(a1));
    }
    */
    MCAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();
    MCAPI unsigned char getNumCrafts() const;
    MCAPI std::vector<class ItemInstance> const & getResults() const;

protected:

private:

};