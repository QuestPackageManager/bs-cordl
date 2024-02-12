#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMembershipLockStatus)
// Forward declare root types
namespace Oculus::Platform {
struct RoomMembershipLockStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::RoomMembershipLockStatus);
// Type: Oculus.Platform::RoomMembershipLockStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13312))
// CS Name: ::Oculus.Platform::RoomMembershipLockStatus
struct CORDL_TYPE RoomMembershipLockStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RoomMembershipLockStatus_Unwrapped
  enum struct __RoomMembershipLockStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Lock = static_cast<int32_t>(0x1),
    __E_Unlock = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RoomMembershipLockStatus_Unwrapped() const noexcept {
    return static_cast<__RoomMembershipLockStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RoomMembershipLockStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMembershipLockStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::RoomMembershipLockStatus const Unknown;

  /// @brief Field Lock value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::RoomMembershipLockStatus const Lock;

  /// @brief Field Unlock value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::RoomMembershipLockStatus const Unlock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RoomMembershipLockStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::RoomMembershipLockStatus, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomMembershipLockStatus, "Oculus.Platform", "RoomMembershipLockStatus");
