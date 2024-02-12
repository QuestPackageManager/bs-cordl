#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRNotificationStyle)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRNotificationStyle;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRNotificationStyle);
// Type: OVR.OpenVR::EVRNotificationStyle
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8579))
// CS Name: ::OVR.OpenVR::EVRNotificationStyle
struct CORDL_TYPE EVRNotificationStyle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRNotificationStyle_Unwrapped
  enum struct __EVRNotificationStyle_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Application = static_cast<int32_t>(0x64),
    __E_Contact_Disabled = static_cast<int32_t>(0xc8),
    __E_Contact_Enabled = static_cast<int32_t>(0xc9),
    __E_Contact_Active = static_cast<int32_t>(0xca),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRNotificationStyle_Unwrapped() const noexcept {
    return static_cast<__EVRNotificationStyle_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRNotificationStyle(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRNotificationStyle();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRNotificationStyle const None;

  /// @brief Field Application value: static_cast<int32_t>(0x64)
  static ::OVR::OpenVR::EVRNotificationStyle const Application;

  /// @brief Field Contact_Disabled value: static_cast<int32_t>(0xc8)
  static ::OVR::OpenVR::EVRNotificationStyle const Contact_Disabled;

  /// @brief Field Contact_Enabled value: static_cast<int32_t>(0xc9)
  static ::OVR::OpenVR::EVRNotificationStyle const Contact_Enabled;

  /// @brief Field Contact_Active value: static_cast<int32_t>(0xca)
  static ::OVR::OpenVR::EVRNotificationStyle const Contact_Active;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRNotificationStyle, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVRNotificationStyle, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRNotificationStyle, "OVR.OpenVR", "EVRNotificationStyle");
