#pragma once
// IWYU pragma private; include "UnityEngine/FocusType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FocusType)
// Forward declare root types
namespace UnityEngine {
struct FocusType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::FocusType);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.FocusType
struct CORDL_TYPE FocusType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FocusType_Unwrapped
  enum struct __FocusType_Unwrapped : int32_t {
    __E_Native = static_cast<int32_t>(0x0),
    __E_Keyboard = static_cast<int32_t>(0x1),
    __E_Passive = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FocusType_Unwrapped() const noexcept {
    return static_cast<__FocusType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FocusType(int32_t value__) noexcept;

  /// @brief Field Keyboard value: I32(1)
  static ::UnityEngine::FocusType const Keyboard;

  /// @brief Field Native value: I32(0)
  static ::UnityEngine::FocusType const Native;

  /// @brief Field Passive value: I32(2)
  static ::UnityEngine::FocusType const Passive;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16638 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::FocusType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::FocusType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FocusType, "UnityEngine", "FocusType");
