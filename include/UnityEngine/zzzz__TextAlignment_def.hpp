#pragma once
// IWYU pragma private; include "UnityEngine/TextAlignment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextAlignment)
// Forward declare root types
namespace UnityEngine {
struct TextAlignment;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextAlignment);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextAlignment
struct CORDL_TYPE TextAlignment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextAlignment_Unwrapped
  enum struct __TextAlignment_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Center = static_cast<int32_t>(0x1),
    __E_Right = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextAlignment_Unwrapped() const noexcept {
    return static_cast<__TextAlignment_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAlignment();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextAlignment(int32_t value__) noexcept;

  /// @brief Field Center value: I32(1)
  static ::UnityEngine::TextAlignment const Center;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::TextAlignment const Left;

  /// @brief Field Right value: I32(2)
  static ::UnityEngine::TextAlignment const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22148 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextAlignment, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAlignment, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAlignment, "UnityEngine", "TextAlignment");
