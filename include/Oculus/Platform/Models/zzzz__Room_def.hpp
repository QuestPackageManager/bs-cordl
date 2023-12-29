#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__RoomJoinPolicy_def.hpp"
#include "Oculus/Platform/zzzz__RoomJoinability_def.hpp"
#include "Oculus/Platform/zzzz__RoomType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Room)
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform::Models {
class TeamList;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Oculus::Platform::Models {
class MatchmakingEnqueuedUserList;
}
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Room;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Room);
// Type: Oculus.Platform.Models::Room
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 172, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13421)), TypeDefinitionIndex(TypeDefinitionIndex(13418)), TypeDefinitionIndex(TypeDefinitionIndex(2611)),
// TypeDefinitionIndex(TypeDefinitionIndex(13417))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13534)) CS Name: ::Oculus.Platform.Models::Room*
class CORDL_TYPE Room : public ::System::Object {
public:
  // Declarations
  /// @brief Field ApplicationID, offset 0x10, size 0x8
  __declspec(property(get = __get_ApplicationID, put = __set_ApplicationID)) uint64_t ApplicationID;

  /// @brief Field DataStore, offset 0x18, size 0x8
  __declspec(property(get = __get_DataStore, put = __set_DataStore))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* DataStore;

  /// @brief Field Description, offset 0x20, size 0x8
  __declspec(property(get = __get_Description, put = __set_Description))::StringW Description;

  /// @brief Field ID, offset 0x28, size 0x8
  __declspec(property(get = __get__cordl_ID, put = __set__cordl_ID)) uint64_t _cordl_ID;

  /// @brief Field InvitedUsersOptional, offset 0x30, size 0x8
  __declspec(property(get = __get_InvitedUsersOptional, put = __set_InvitedUsersOptional))::Oculus::Platform::Models::UserList* InvitedUsersOptional;

  /// @brief Field InvitedUsers, offset 0x38, size 0x8
  __declspec(property(get = __get_InvitedUsers, put = __set_InvitedUsers))::Oculus::Platform::Models::UserList* InvitedUsers;

  /// @brief Field IsMembershipLocked, offset 0x40, size 0x1
  __declspec(property(get = __get_IsMembershipLocked, put = __set_IsMembershipLocked)) bool IsMembershipLocked;

  /// @brief Field JoinPolicy, offset 0x44, size 0x4
  __declspec(property(get = __get_JoinPolicy, put = __set_JoinPolicy))::Oculus::Platform::RoomJoinPolicy JoinPolicy;

  /// @brief Field Joinability, offset 0x48, size 0x4
  __declspec(property(get = __get_Joinability, put = __set_Joinability))::Oculus::Platform::RoomJoinability Joinability;

  /// @brief Field MatchedUsersOptional, offset 0x50, size 0x8
  __declspec(property(get = __get_MatchedUsersOptional, put = __set_MatchedUsersOptional))::Oculus::Platform::Models::MatchmakingEnqueuedUserList* MatchedUsersOptional;

  /// @brief Field MatchedUsers, offset 0x58, size 0x8
  __declspec(property(get = __get_MatchedUsers, put = __set_MatchedUsers))::Oculus::Platform::Models::MatchmakingEnqueuedUserList* MatchedUsers;

  /// @brief Field MaxUsers, offset 0x60, size 0x4
  __declspec(property(get = __get_MaxUsers, put = __set_MaxUsers)) uint32_t MaxUsers;

  /// @brief Field Name, offset 0x68, size 0x8
  __declspec(property(get = __get_Name, put = __set_Name))::StringW Name;

  /// @brief Field OwnerOptional, offset 0x70, size 0x8
  __declspec(property(get = __get_OwnerOptional, put = __set_OwnerOptional))::Oculus::Platform::Models::User* OwnerOptional;

  /// @brief Field Owner, offset 0x78, size 0x8
  __declspec(property(get = __get_Owner, put = __set_Owner))::Oculus::Platform::Models::User* Owner;

  /// @brief Field TeamsOptional, offset 0x80, size 0x8
  __declspec(property(get = __get_TeamsOptional, put = __set_TeamsOptional))::Oculus::Platform::Models::TeamList* TeamsOptional;

  /// @brief Field Teams, offset 0x88, size 0x8
  __declspec(property(get = __get_Teams, put = __set_Teams))::Oculus::Platform::Models::TeamList* Teams;

  /// @brief Field Type, offset 0x90, size 0x4
  __declspec(property(get = __get_Type, put = __set_Type))::Oculus::Platform::RoomType Type;

  /// @brief Field UsersOptional, offset 0x98, size 0x8
  __declspec(property(get = __get_UsersOptional, put = __set_UsersOptional))::Oculus::Platform::Models::UserList* UsersOptional;

  /// @brief Field Users, offset 0xa0, size 0x8
  __declspec(property(get = __get_Users, put = __set_Users))::Oculus::Platform::Models::UserList* Users;

  /// @brief Field Version, offset 0xa8, size 0x4
  __declspec(property(get = __get_Version, put = __set_Version)) uint32_t Version;

  constexpr uint64_t& __get_ApplicationID();

  constexpr uint64_t const& __get_ApplicationID() const;

  constexpr void __set_ApplicationID(uint64_t value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __get_DataStore();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __get_DataStore() const;

  constexpr void __set_DataStore(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr ::StringW& __get_Description();

  constexpr ::StringW const& __get_Description() const;

  constexpr void __set_Description(::StringW value);

  constexpr uint64_t& __get__cordl_ID();

  constexpr uint64_t const& __get__cordl_ID() const;

  constexpr void __set__cordl_ID(uint64_t value);

  constexpr ::Oculus::Platform::Models::UserList*& __get_InvitedUsersOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __get_InvitedUsersOptional() const;

  constexpr void __set_InvitedUsersOptional(::Oculus::Platform::Models::UserList* value);

  constexpr ::Oculus::Platform::Models::UserList*& __get_InvitedUsers();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __get_InvitedUsers() const;

  constexpr void __set_InvitedUsers(::Oculus::Platform::Models::UserList* value);

  constexpr bool& __get_IsMembershipLocked();

  constexpr bool const& __get_IsMembershipLocked() const;

  constexpr void __set_IsMembershipLocked(bool value);

  constexpr ::Oculus::Platform::RoomJoinPolicy& __get_JoinPolicy();

  constexpr ::Oculus::Platform::RoomJoinPolicy const& __get_JoinPolicy() const;

  constexpr void __set_JoinPolicy(::Oculus::Platform::RoomJoinPolicy value);

  constexpr ::Oculus::Platform::RoomJoinability& __get_Joinability();

  constexpr ::Oculus::Platform::RoomJoinability const& __get_Joinability() const;

  constexpr void __set_Joinability(::Oculus::Platform::RoomJoinability value);

  constexpr ::Oculus::Platform::Models::MatchmakingEnqueuedUserList*& __get_MatchedUsersOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingEnqueuedUserList*> const& __get_MatchedUsersOptional() const;

  constexpr void __set_MatchedUsersOptional(::Oculus::Platform::Models::MatchmakingEnqueuedUserList* value);

  constexpr ::Oculus::Platform::Models::MatchmakingEnqueuedUserList*& __get_MatchedUsers();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingEnqueuedUserList*> const& __get_MatchedUsers() const;

  constexpr void __set_MatchedUsers(::Oculus::Platform::Models::MatchmakingEnqueuedUserList* value);

  constexpr uint32_t& __get_MaxUsers();

  constexpr uint32_t const& __get_MaxUsers() const;

  constexpr void __set_MaxUsers(uint32_t value);

  constexpr ::StringW& __get_Name();

  constexpr ::StringW const& __get_Name() const;

  constexpr void __set_Name(::StringW value);

  constexpr ::Oculus::Platform::Models::User*& __get_OwnerOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __get_OwnerOptional() const;

  constexpr void __set_OwnerOptional(::Oculus::Platform::Models::User* value);

  constexpr ::Oculus::Platform::Models::User*& __get_Owner();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __get_Owner() const;

  constexpr void __set_Owner(::Oculus::Platform::Models::User* value);

  constexpr ::Oculus::Platform::Models::TeamList*& __get_TeamsOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::TeamList*> const& __get_TeamsOptional() const;

  constexpr void __set_TeamsOptional(::Oculus::Platform::Models::TeamList* value);

  constexpr ::Oculus::Platform::Models::TeamList*& __get_Teams();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::TeamList*> const& __get_Teams() const;

  constexpr void __set_Teams(::Oculus::Platform::Models::TeamList* value);

  constexpr ::Oculus::Platform::RoomType& __get_Type();

  constexpr ::Oculus::Platform::RoomType const& __get_Type() const;

  constexpr void __set_Type(::Oculus::Platform::RoomType value);

  constexpr ::Oculus::Platform::Models::UserList*& __get_UsersOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __get_UsersOptional() const;

  constexpr void __set_UsersOptional(::Oculus::Platform::Models::UserList* value);

  constexpr ::Oculus::Platform::Models::UserList*& __get_Users();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __get_Users() const;

  constexpr void __set_Users(::Oculus::Platform::Models::UserList* value);

  constexpr uint32_t& __get_Version();

  constexpr uint32_t const& __get_Version() const;

  constexpr void __set_Version(uint32_t value);

  static inline ::Oculus::Platform::Models::Room* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b5770 size 0x3b0 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "Room", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Room(Room&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Room", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Room(Room const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Room();

public:
  /// @brief Field ApplicationID, offset: 0x10, size: 0x8, def value: None
  uint64_t ___ApplicationID;

  /// @brief Field DataStore, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ___DataStore;

  /// @brief Field Description, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Description;

  /// @brief Field ID, offset: 0x28, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field InvitedUsersOptional, offset: 0x30, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___InvitedUsersOptional;

  /// @brief Field InvitedUsers, offset: 0x38, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___InvitedUsers;

  /// @brief Field IsMembershipLocked, offset: 0x40, size: 0x1, def value: None
  bool ___IsMembershipLocked;

  /// @brief Field JoinPolicy, offset: 0x44, size: 0x4, def value: None
  ::Oculus::Platform::RoomJoinPolicy ___JoinPolicy;

  /// @brief Field Joinability, offset: 0x48, size: 0x4, def value: None
  ::Oculus::Platform::RoomJoinability ___Joinability;

  /// @brief Field MatchedUsersOptional, offset: 0x50, size: 0x8, def value: None
  ::Oculus::Platform::Models::MatchmakingEnqueuedUserList* ___MatchedUsersOptional;

  /// @brief Field MatchedUsers, offset: 0x58, size: 0x8, def value: None
  ::Oculus::Platform::Models::MatchmakingEnqueuedUserList* ___MatchedUsers;

  /// @brief Field MaxUsers, offset: 0x60, size: 0x4, def value: None
  uint32_t ___MaxUsers;

  /// @brief Field Name, offset: 0x68, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field OwnerOptional, offset: 0x70, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___OwnerOptional;

  /// @brief Field Owner, offset: 0x78, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___Owner;

  /// @brief Field TeamsOptional, offset: 0x80, size: 0x8, def value: None
  ::Oculus::Platform::Models::TeamList* ___TeamsOptional;

  /// @brief Field Teams, offset: 0x88, size: 0x8, def value: None
  ::Oculus::Platform::Models::TeamList* ___Teams;

  /// @brief Field Type, offset: 0x90, size: 0x4, def value: None
  ::Oculus::Platform::RoomType ___Type;

  /// @brief Field UsersOptional, offset: 0x98, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___UsersOptional;

  /// @brief Field Users, offset: 0xa0, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___Users;

  /// @brief Field Version, offset: 0xa8, size: 0x4, def value: None
  uint32_t ___Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Room, 0xb0>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___ApplicationID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___DataStore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___Description) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ____cordl_ID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___InvitedUsersOptional) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___InvitedUsers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___IsMembershipLocked) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___JoinPolicy) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___Joinability) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___MatchedUsersOptional) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___MatchedUsers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___MaxUsers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___Name) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___OwnerOptional) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___Owner) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___TeamsOptional) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___Teams) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___Type) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___UsersOptional) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___Users) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Room, ___Version) == 0xa8, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Room);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Room*, "Oculus.Platform.Models", "Room");
