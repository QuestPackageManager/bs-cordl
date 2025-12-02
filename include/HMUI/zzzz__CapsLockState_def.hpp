#pragma once
// IWYU pragma private; include "HMUI/CapsLockState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CapsLockState)
// Forward declare root types
namespace HMUI {
struct CapsLockState;
}
// Write type traits
MARK_VAL_T(::HMUI::CapsLockState);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.CapsLockState
struct CORDL_TYPE CapsLockState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CapsLockState_Unwrapped
  enum struct __CapsLockState_Unwrapped : int32_t {
    __E_Lowercase = static_cast<int32_t>(0x0),
    __E_UppercaseOnce = static_cast<int32_t>(0x1),
    __E_Uppercase = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CapsLockState_Unwrapped() const noexcept {
    return static_cast<__CapsLockState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CapsLockState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CapsLockState(int32_t value__) noexcept;

  /// @brief Field Lowercase value: I32(0)
  static ::HMUI::CapsLockState const Lowercase;

  /// @brief Field Uppercase value: I32(2)
  static ::HMUI::CapsLockState const Uppercase;

  /// @brief Field UppercaseOnce value: I32(1)
  static ::HMUI::CapsLockState const UppercaseOnce;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19113 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::CapsLockState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::CapsLockState, 0x4>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CapsLockState, "HMUI", "CapsLockState");
