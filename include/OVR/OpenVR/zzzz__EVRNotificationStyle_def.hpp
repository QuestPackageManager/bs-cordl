#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRNotificationStyle.hpp"
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
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRNotificationStyle
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRNotificationStyle();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRNotificationStyle(int32_t value__) noexcept;

  /// @brief Field Application value: I32(100)
  static ::OVR::OpenVR::EVRNotificationStyle const Application;

  /// @brief Field Contact_Active value: I32(202)
  static ::OVR::OpenVR::EVRNotificationStyle const Contact_Active;

  /// @brief Field Contact_Disabled value: I32(200)
  static ::OVR::OpenVR::EVRNotificationStyle const Contact_Disabled;

  /// @brief Field Contact_Enabled value: I32(201)
  static ::OVR::OpenVR::EVRNotificationStyle const Contact_Enabled;

  /// @brief Field None value: I32(0)
  static ::OVR::OpenVR::EVRNotificationStyle const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8953 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRNotificationStyle, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRNotificationStyle, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRNotificationStyle, "OVR.OpenVR", "EVRNotificationStyle");
