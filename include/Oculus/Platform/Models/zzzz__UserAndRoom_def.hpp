#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserAndRoom)
namespace Oculus::Platform::Models {
class Room;
}
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class UserAndRoom;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserAndRoom);
// Type: Oculus.Platform.Models::UserAndRoom
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13441))
// CS Name: ::Oculus.Platform.Models::UserAndRoom*
class CORDL_TYPE UserAndRoom : public ::System::Object {
public:
  // Declarations
  /// @brief Field RoomOptional, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_RoomOptional, put = __cordl_internal_set_RoomOptional))::Oculus::Platform::Models::Room* RoomOptional;

  /// @brief Field Room, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Room, put = __cordl_internal_set_Room))::Oculus::Platform::Models::Room* Room;

  /// @brief Field User, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_User, put = __cordl_internal_set_User))::Oculus::Platform::Models::User* User;

  constexpr ::Oculus::Platform::Models::Room*& __cordl_internal_get_RoomOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Room*> const& __cordl_internal_get_RoomOptional() const;

  constexpr void __cordl_internal_set_RoomOptional(::Oculus::Platform::Models::Room* value);

  constexpr ::Oculus::Platform::Models::Room*& __cordl_internal_get_Room();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Room*> const& __cordl_internal_get_Room() const;

  constexpr void __cordl_internal_set_Room(::Oculus::Platform::Models::Room* value);

  constexpr ::Oculus::Platform::Models::User*& __cordl_internal_get_User();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __cordl_internal_get_User() const;

  constexpr void __cordl_internal_set_User(::Oculus::Platform::Models::User* value);

  static inline ::Oculus::Platform::Models::UserAndRoom* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x273d6bc, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "UserAndRoom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserAndRoom(UserAndRoom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserAndRoom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserAndRoom(UserAndRoom const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserAndRoom();

public:
  /// @brief Field RoomOptional, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::Room* ___RoomOptional;

  /// @brief Field Room, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::Room* ___Room;

  /// @brief Field User, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___User;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserAndRoom, 0x28>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserAndRoom, ___RoomOptional) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserAndRoom, ___Room) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserAndRoom, ___User) == 0x20, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserAndRoom);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserAndRoom*, "Oculus.Platform.Models", "UserAndRoom");
