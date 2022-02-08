// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MultiRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIRECIPE
public:
    class MultiRecipe& operator=(class MultiRecipe const&) = delete;
    MultiRecipe(class MultiRecipe const&) = delete;
    MultiRecipe() = delete;
#endif

public:
    /*0*/ virtual ~MultiRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&) const = 0;
    /*2*/ virtual int getCraftingSize() const = 0;
    /*3*/ virtual class RecipeIngredient const& getIngredient(int, int) const = 0;
    /*4*/ virtual std::vector<class ItemInstance> const& getResultItem() const = 0;
    /*5*/ virtual void __unk_vfn_0();
    /*6*/ virtual bool matches(class CraftingContainer&, class Level&) const = 0;
    /*7*/ virtual int size() const = 0;
    /*8*/ virtual class mce::UUID const& getId() const;
    /*9*/ virtual class ItemPack const& getItemPack() const;
    /*10*/ virtual bool isMultiRecipe() const;
    /*11*/ virtual void loadResultList(class BlockPalette const&) const;
    /*
    inline bool isShapeless() const{
        bool (MultiRecipe::*rv)() const;
        *((void**)&rv) = dlsym("?isShapeless@MultiRecipe@@EEBA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};