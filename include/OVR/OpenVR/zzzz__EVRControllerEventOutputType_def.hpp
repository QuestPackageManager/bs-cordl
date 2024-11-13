#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRControllerEventOutputType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRControllerEventOutputType)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRControllerEventOutputType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRControllerEventOutputType);
// Type: OVR.OpenVR::EVRControllerEventOutputType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EVRControllerEventOutputType
struct CORDL_TYPE EVRControllerEventOutputType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRControllerEventOutputType_Unwrapped
  enum struct __EVRControllerEventOutputType_Unwrapped : int32_t {
    __E_ControllerEventOutput_OSEvents = static_cast<int32_t>(0x0),
    __E_ControllerEventOutput_VREvents = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRControllerEventOutputType_Unwrapped() const noexcept {
    return static_cast<__EVRControllerEventOutputType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRControllerEventOutputType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRControllerEventOutputType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ControllerEventOutput_OSEvents value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRControllerEventOutputType const ControllerEventOutput_OSEvents;

  /// @brief Field ControllerEventOutput_VREvents value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EVRControllerEventOutputType const ControllerEventOutput_VREvents;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8888 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRControllerEventOutputType, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVRControllerEventOutputType, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRControllerEventOutputType, "OVR.OpenVR", "EVRControllerEventOutputType");
