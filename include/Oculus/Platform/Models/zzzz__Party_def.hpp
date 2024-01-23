#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Party)
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Party;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Party);
// Type: Oculus.Platform.Models::Party
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13466))
// CS Name: ::Oculus.Platform.Models::Party*
class CORDL_TYPE Party : public ::System::Object {
public:
  // Declarations
  /// @brief Field ID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) uint64_t _cordl_ID;

  /// @brief Field InvitedUsersOptional, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InvitedUsersOptional, put = __cordl_internal_set_InvitedUsersOptional))::Oculus::Platform::Models::UserList* InvitedUsersOptional;

  /// @brief Field InvitedUsers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_InvitedUsers, put = __cordl_internal_set_InvitedUsers))::Oculus::Platform::Models::UserList* InvitedUsers;

  /// @brief Field LeaderOptional, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_LeaderOptional, put = __cordl_internal_set_LeaderOptional))::Oculus::Platform::Models::User* LeaderOptional;

  /// @brief Field Leader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Leader, put = __cordl_internal_set_Leader))::Oculus::Platform::Models::User* Leader;

  /// @brief Field UsersOptional, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_UsersOptional, put = __cordl_internal_set_UsersOptional))::Oculus::Platform::Models::UserList* UsersOptional;

  /// @brief Field Users, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Users, put = __cordl_internal_set_Users))::Oculus::Platform::Models::UserList* Users;

  constexpr uint64_t& __cordl_internal_get__cordl_ID();

  constexpr uint64_t const& __cordl_internal_get__cordl_ID() const;

  constexpr void __cordl_internal_set__cordl_ID(uint64_t value);

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_InvitedUsersOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __cordl_internal_get_InvitedUsersOptional() const;

  constexpr void __cordl_internal_set_InvitedUsersOptional(::Oculus::Platform::Models::UserList* value);

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_InvitedUsers();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __cordl_internal_get_InvitedUsers() const;

  constexpr void __cordl_internal_set_InvitedUsers(::Oculus::Platform::Models::UserList* value);

  constexpr ::Oculus::Platform::Models::User*& __cordl_internal_get_LeaderOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __cordl_internal_get_LeaderOptional() const;

  constexpr void __cordl_internal_set_LeaderOptional(::Oculus::Platform::Models::User* value);

  constexpr ::Oculus::Platform::Models::User*& __cordl_internal_get_Leader();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __cordl_internal_get_Leader() const;

  constexpr void __cordl_internal_set_Leader(::Oculus::Platform::Models::User* value);

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_UsersOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __cordl_internal_get_UsersOptional() const;

  constexpr void __cordl_internal_set_UsersOptional(::Oculus::Platform::Models::UserList* value);

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_Users();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __cordl_internal_get_Users() const;

  constexpr void __cordl_internal_set_Users(::Oculus::Platform::Models::UserList* value);

  static inline ::Oculus::Platform::Models::Party* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2707d3c, size 0x1f4, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "Party", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Party(Party&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Party", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Party(Party const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Party();

public:
  /// @brief Field ID, offset: 0x10, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field InvitedUsersOptional, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___InvitedUsersOptional;

  /// @brief Field InvitedUsers, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___InvitedUsers;

  /// @brief Field LeaderOptional, offset: 0x28, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___LeaderOptional;

  /// @brief Field Leader, offset: 0x30, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___Leader;

  /// @brief Field UsersOptional, offset: 0x38, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___UsersOptional;

  /// @brief Field Users, offset: 0x40, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___Users;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Party, 0x48>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Party, ____cordl_ID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Party, ___InvitedUsersOptional) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Party, ___InvitedUsers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Party, ___LeaderOptional) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Party, ___Leader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Party, ___UsersOptional) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Party, ___Users) == 0x40, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Party);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Party*, "Oculus.Platform.Models", "Party");
