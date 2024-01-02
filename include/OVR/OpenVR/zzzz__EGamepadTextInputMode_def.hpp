#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EGamepadTextInputMode)
// Forward declare root types
namespace OVR::OpenVR {
struct EGamepadTextInputMode;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EGamepadTextInputMode);
// Type: OVR.OpenVR::EGamepadTextInputMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8628))
// CS Name: ::OVR.OpenVR::EGamepadTextInputMode
struct CORDL_TYPE EGamepadTextInputMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EGamepadTextInputMode_Unwrapped
  enum struct __EGamepadTextInputMode_Unwrapped : int32_t {
    __E_k_EGamepadTextInputModeNormal = static_cast<int32_t>(0x0),
    __E_k_EGamepadTextInputModePassword = static_cast<int32_t>(0x1),
    __E_k_EGamepadTextInputModeSubmit = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EGamepadTextInputMode_Unwrapped() const noexcept {
    return static_cast<__EGamepadTextInputMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EGamepadTextInputMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EGamepadTextInputMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field k_EGamepadTextInputModeNormal value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EGamepadTextInputMode const k_EGamepadTextInputModeNormal;

  /// @brief Field k_EGamepadTextInputModePassword value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EGamepadTextInputMode const k_EGamepadTextInputModePassword;

  /// @brief Field k_EGamepadTextInputModeSubmit value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EGamepadTextInputMode const k_EGamepadTextInputModeSubmit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EGamepadTextInputMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EGamepadTextInputMode, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EGamepadTextInputMode, "OVR.OpenVR", "EGamepadTextInputMode");
