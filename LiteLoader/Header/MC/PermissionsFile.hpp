// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_PERMISSIONSFILE
#include "Extra/PermissionsFileAPI.hpp"
#undef EXTRA_INCLUDE_PART_PERMISSIONSFILE
class PermissionsFile {
#include "Extra/PermissionsFileAPI.hpp"
public:
    MCAPI void applyPlayerPermissionsFromDisk(class Player&, class UserEntityIdentifierComponent const&, enum CommandPermissionLevel);
    MCAPI class std::unordered_map<std::string, enum PlayerPermissionLevel, struct std::hash<std::string >, struct std::equal_to<std::string >, class std::allocator<struct std::pair<std::string const, enum PlayerPermissionLevel> > > const& getPermissions() const;
    MCAPI std::vector<std::string> getXUIDsByPermission(enum PlayerPermissionLevel) const;
    MCAPI bool isPermissionsSet(std::string const&, enum PlayerPermissionLevel) const;
    MCAPI void persistPlayerPermissionsToDisk(std::string const&, enum PlayerPermissionLevel);
    MCAPI void persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const&, enum PlayerPermissionLevel);
    MCAPI enum FileReadResult reload();

protected:

private:
    MCAPI class std::tuple<enum FileReadResult, class Json::Value> readPermissionFile();
    MCAPI void setDefaultPlayerPermission(class Player&, enum CommandPermissionLevel);
};