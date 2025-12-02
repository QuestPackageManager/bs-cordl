#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRInputFilterCancelType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRInputFilterCancelType)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRInputFilterCancelType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRInputFilterCancelType);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRInputFilterCancelType
struct CORDL_TYPE EVRInputFilterCancelType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRInputFilterCancelType_Unwrapped
  enum struct __EVRInputFilterCancelType_Unwrapped : int32_t {
    __E_VRInputFilterCancel_Timers = static_cast<int32_t>(0x0),
    __E_VRInputFilterCancel_Momentum = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRInputFilterCancelType_Unwrapped() const noexcept {
    return static_cast<__EVRInputFilterCancelType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRInputFilterCancelType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRInputFilterCancelType(int32_t value__) noexcept;

  /// @brief Field VRInputFilterCancel_Momentum value: I32(1)
  static ::OVR::OpenVR::EVRInputFilterCancelType const VRInputFilterCancel_Momentum;

  /// @brief Field VRInputFilterCancel_Timers value: I32(0)
  static ::OVR::OpenVR::EVRInputFilterCancelType const VRInputFilterCancel_Timers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8434 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRInputFilterCancelType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRInputFilterCancelType, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRInputFilterCancelType, "OVR.OpenVR", "EVRInputFilterCancelType");
