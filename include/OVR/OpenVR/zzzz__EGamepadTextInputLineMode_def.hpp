#pragma once
// IWYU pragma private; include "OVR/OpenVR/EGamepadTextInputLineMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EGamepadTextInputLineMode)
// Forward declare root types
namespace OVR::OpenVR {
struct EGamepadTextInputLineMode;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EGamepadTextInputLineMode);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EGamepadTextInputLineMode
struct CORDL_TYPE EGamepadTextInputLineMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EGamepadTextInputLineMode_Unwrapped
  enum struct __EGamepadTextInputLineMode_Unwrapped : int32_t {
    __E_k_EGamepadTextInputLineModeSingleLine = static_cast<int32_t>(0x0),
    __E_k_EGamepadTextInputLineModeMultipleLines = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EGamepadTextInputLineMode_Unwrapped() const noexcept {
    return static_cast<__EGamepadTextInputLineMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EGamepadTextInputLineMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EGamepadTextInputLineMode(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8428 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field k_EGamepadTextInputLineModeMultipleLines value: I32(1)
  static ::OVR::OpenVR::EGamepadTextInputLineMode const k_EGamepadTextInputLineModeMultipleLines;

  /// @brief Field k_EGamepadTextInputLineModeSingleLine value: I32(0)
  static ::OVR::OpenVR::EGamepadTextInputLineMode const k_EGamepadTextInputLineModeSingleLine;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EGamepadTextInputLineMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EGamepadTextInputLineMode, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EGamepadTextInputLineMode, "OVR.OpenVR", "EGamepadTextInputLineMode");
