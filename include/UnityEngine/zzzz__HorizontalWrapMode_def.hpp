#pragma once
// IWYU pragma private; include "UnityEngine/HorizontalWrapMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HorizontalWrapMode)
// Forward declare root types
namespace UnityEngine {
struct HorizontalWrapMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HorizontalWrapMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.HorizontalWrapMode
struct CORDL_TYPE HorizontalWrapMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HorizontalWrapMode_Unwrapped
  enum struct __HorizontalWrapMode_Unwrapped : int32_t {
    __E_Wrap = static_cast<int32_t>(0x0),
    __E_Overflow = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HorizontalWrapMode_Unwrapped() const noexcept {
    return static_cast<__HorizontalWrapMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HorizontalWrapMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HorizontalWrapMode(int32_t value__) noexcept;

  /// @brief Field Overflow value: I32(1)
  static ::UnityEngine::HorizontalWrapMode const Overflow;

  /// @brief Field Wrap value: I32(0)
  static ::UnityEngine::HorizontalWrapMode const Wrap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18399 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::HorizontalWrapMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::HorizontalWrapMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HorizontalWrapMode, "UnityEngine", "HorizontalWrapMode");
