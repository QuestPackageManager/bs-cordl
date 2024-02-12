#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Team)
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Team;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Team);
// Type: Oculus.Platform.Models::Team
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13437))
// CS Name: ::Oculus.Platform.Models::Team*
class CORDL_TYPE Team : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssignedUsers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AssignedUsers, put = __cordl_internal_set_AssignedUsers))::Oculus::Platform::Models::UserList* AssignedUsers;

  /// @brief Field MaxUsers, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxUsers, put = __cordl_internal_set_MaxUsers)) int32_t MaxUsers;

  /// @brief Field MinUsers, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_MinUsers, put = __cordl_internal_set_MinUsers)) int32_t MinUsers;

  /// @brief Field Name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name))::StringW Name;

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_AssignedUsers();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __cordl_internal_get_AssignedUsers() const;

  constexpr void __cordl_internal_set_AssignedUsers(::Oculus::Platform::Models::UserList* value);

  constexpr int32_t& __cordl_internal_get_MaxUsers();

  constexpr int32_t const& __cordl_internal_get_MaxUsers() const;

  constexpr void __cordl_internal_set_MaxUsers(int32_t value);

  constexpr int32_t& __cordl_internal_get_MinUsers();

  constexpr int32_t const& __cordl_internal_get_MinUsers() const;

  constexpr void __cordl_internal_set_MinUsers(int32_t value);

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr void __cordl_internal_set_Name(::StringW value);

  static inline ::Oculus::Platform::Models::Team* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x273d5dc, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "Team", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Team(Team&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Team", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Team(Team const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Team();

public:
  /// @brief Field AssignedUsers, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___AssignedUsers;

  /// @brief Field MaxUsers, offset: 0x18, size: 0x4, def value: None
  int32_t ___MaxUsers;

  /// @brief Field MinUsers, offset: 0x1c, size: 0x4, def value: None
  int32_t ___MinUsers;

  /// @brief Field Name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Team, 0x28>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Team, ___AssignedUsers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Team, ___MaxUsers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Team, ___MinUsers) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Team, ___Name) == 0x20, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Team);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Team*, "Oculus.Platform.Models", "Team");
