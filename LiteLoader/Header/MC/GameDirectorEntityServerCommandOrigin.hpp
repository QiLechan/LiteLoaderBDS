// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ActorServerCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GameDirectorEntityServerCommandOrigin : public ActorServerCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEDIRECTORENTITYSERVERCOMMANDORIGIN
public:
    class GameDirectorEntityServerCommandOrigin& operator=(class GameDirectorEntityServerCommandOrigin const&) = delete;
    GameDirectorEntityServerCommandOrigin(class GameDirectorEntityServerCommandOrigin const&) = delete;
    GameDirectorEntityServerCommandOrigin() = delete;
#endif

public:
    /*0*/ virtual ~GameDirectorEntityServerCommandOrigin();
    /*1*/ virtual std::string const& getRequestId() const;
    /*2*/ virtual class std::optional<class Vec2> getRotation() const;
    /*3*/ virtual class Level* getLevel() const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*6*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*7*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void __unk_vfn_2();
    /*10*/ virtual void __unk_vfn_3();
    /*11*/ virtual void __unk_vfn_4();
    /*12*/ virtual void __unk_vfn_5();
    /*13*/ virtual enum CommandOriginType getOriginType() const;
    /*14*/ virtual void __unk_vfn_6();
    /*15*/ virtual void handleCommandOutputCallback(class Json::Value&&) const;
    /*16*/ virtual void updateValues();
    /*17*/ virtual bool isValid() const;
    /*18*/ virtual void _setUUID(class mce::UUID const&);
    /*
    inline enum CommandPermissionLevel getPermissionsLevel() const{
        enum CommandPermissionLevel (GameDirectorEntityServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?getPermissionsLevel@GameDirectorEntityServerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ");
        return (this->*rv)();
    }
    inline bool canUseCommandsWithoutCheatsEnabled() const{
        bool (GameDirectorEntityServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?canUseCommandsWithoutCheatsEnabled@GameDirectorEntityServerCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isSelectorExpansionAllowed() const{
        bool (GameDirectorEntityServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?isSelectorExpansionAllowed@GameDirectorEntityServerCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI GameDirectorEntityServerCommandOrigin(class Actor&);
    MCAPI GameDirectorEntityServerCommandOrigin(struct ActorUniqueID, class Level&);
    MCAPI static std::unique_ptr<class GameDirectorEntityServerCommandOrigin> load(class CompoundTag const&, class Level&);

protected:

private:

};