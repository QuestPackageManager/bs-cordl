#pragma once
// IWYU pragma private; include "OVR/OpenVR/VROverlayInputMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VROverlayInputMethod)
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayInputMethod;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayInputMethod);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VROverlayInputMethod
struct CORDL_TYPE VROverlayInputMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VROverlayInputMethod_Unwrapped
  enum struct __VROverlayInputMethod_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Mouse = static_cast<int32_t>(0x1),
    __E_DualAnalog = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VROverlayInputMethod_Unwrapped() const noexcept {
    return static_cast<__VROverlayInputMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VROverlayInputMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VROverlayInputMethod(int32_t value__) noexcept;

  /// @brief Field DualAnalog value: I32(2)
  static ::OVR::OpenVR::VROverlayInputMethod const DualAnalog;

  /// @brief Field Mouse value: I32(1)
  static ::OVR::OpenVR::VROverlayInputMethod const Mouse;

  /// @brief Field None value: I32(0)
  static ::OVR::OpenVR::VROverlayInputMethod const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VROverlayInputMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayInputMethod, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayInputMethod, "OVR.OpenVR", "VROverlayInputMethod");
