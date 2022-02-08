// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMANDORIGIN
public:
    class ServerCommandOrigin& operator=(class ServerCommandOrigin const&) = delete;
    ServerCommandOrigin(class ServerCommandOrigin const&) = delete;
    ServerCommandOrigin() = delete;
#endif

public:
    /*0*/ virtual ~ServerCommandOrigin();
    /*1*/ virtual std::string const& getRequestId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual class BlockPos getBlockPosition() const;
    /*4*/ virtual class Vec3 getWorldPosition() const;
    /*5*/ virtual class std::optional<class Vec2> getRotation() const;
    /*6*/ virtual class Level* getLevel() const;
    /*7*/ virtual class Dimension* getDimension() const;
    /*8*/ virtual class Actor* getEntity() const;
    /*9*/ virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /*10*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*11*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*12*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*13*/ virtual void __unk_vfn_0();
    /*14*/ virtual void __unk_vfn_1();
    /*15*/ virtual void __unk_vfn_2();
    /*16*/ virtual void __unk_vfn_3();
    /*17*/ virtual void __unk_vfn_4();
    /*18*/ virtual enum CommandOriginType getOriginType() const;
    /*19*/ virtual void __unk_vfn_5();
    /*20*/ virtual void handleCommandOutputCallback(class Json::Value&&) const;
    /*21*/ virtual void updateValues();
    /*22*/ virtual class CompoundTag serialize() const;
    /*23*/ virtual void __unk_vfn_6();
    /*24*/ virtual void _setUUID(class mce::UUID const&);
    /*
    inline bool isSelectorExpansionAllowed() const{
        bool (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?isSelectorExpansionAllowed@ServerCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canUseCommandsWithoutCheatsEnabled() const{
        bool (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?canUseCommandsWithoutCheatsEnabled@ServerCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isValid() const{
        bool (ServerCommandOrigin::*rv)() const;
        *((void**)&rv) = dlsym("?isValid@ServerCommandOrigin@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~ServerCommandOrigin(){
         (ServerCommandOrigin::*rv)();
        *((void**)&rv) = dlsym("??1ServerCommandOrigin@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ServerCommandOrigin(std::string const&, class ServerLevel&, enum CommandPermissionLevel, class AutomaticID<class Dimension, int>);
    MCAPI static std::unique_ptr<class ServerCommandOrigin> load(class CompoundTag const&, class ServerLevel&);

protected:

private:

};