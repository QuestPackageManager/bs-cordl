#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomJoinPolicy)
// Forward declare root types
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::RoomJoinPolicy);
// Type: Oculus.Platform::RoomJoinPolicy
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13418))
// CS Name: ::Oculus.Platform::RoomJoinPolicy
struct CORDL_TYPE RoomJoinPolicy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RoomJoinPolicy_Unwrapped
  enum struct __RoomJoinPolicy_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Everyone = static_cast<int32_t>(0x1),
    __E_FriendsOfMembers = static_cast<int32_t>(0x2),
    __E_FriendsOfOwner = static_cast<int32_t>(0x3),
    __E_InvitedUsers = static_cast<int32_t>(0x4),
    __E_Unknown = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RoomJoinPolicy_Unwrapped() const noexcept {
    return static_cast<__RoomJoinPolicy_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RoomJoinPolicy(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomJoinPolicy();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::RoomJoinPolicy const None;

  /// @brief Field Everyone value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::RoomJoinPolicy const Everyone;

  /// @brief Field FriendsOfMembers value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::RoomJoinPolicy const FriendsOfMembers;

  /// @brief Field FriendsOfOwner value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::RoomJoinPolicy const FriendsOfOwner;

  /// @brief Field InvitedUsers value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::RoomJoinPolicy const InvitedUsers;

  /// @brief Field Unknown value: static_cast<int32_t>(0x5)
  static ::Oculus::Platform::RoomJoinPolicy const Unknown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RoomJoinPolicy, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::RoomJoinPolicy, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomJoinPolicy, "Oculus.Platform", "RoomJoinPolicy");
