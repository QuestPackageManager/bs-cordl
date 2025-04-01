#pragma once
// IWYU pragma private; include "UnityEngine/TextAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextAnchor)
// Forward declare root types
namespace UnityEngine {
struct TextAnchor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextAnchor);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextAnchor
struct CORDL_TYPE TextAnchor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextAnchor_Unwrapped
  enum struct __TextAnchor_Unwrapped : int32_t {
    __E_UpperLeft = static_cast<int32_t>(0x0),
    __E_UpperCenter = static_cast<int32_t>(0x1),
    __E_UpperRight = static_cast<int32_t>(0x2),
    __E_MiddleLeft = static_cast<int32_t>(0x3),
    __E_MiddleCenter = static_cast<int32_t>(0x4),
    __E_MiddleRight = static_cast<int32_t>(0x5),
    __E_LowerLeft = static_cast<int32_t>(0x6),
    __E_LowerCenter = static_cast<int32_t>(0x7),
    __E_LowerRight = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextAnchor_Unwrapped() const noexcept {
    return static_cast<__TextAnchor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAnchor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextAnchor(int32_t value__) noexcept;

  /// @brief Field LowerCenter value: I32(7)
  static ::UnityEngine::TextAnchor const LowerCenter;

  /// @brief Field LowerLeft value: I32(6)
  static ::UnityEngine::TextAnchor const LowerLeft;

  /// @brief Field LowerRight value: I32(8)
  static ::UnityEngine::TextAnchor const LowerRight;

  /// @brief Field MiddleCenter value: I32(4)
  static ::UnityEngine::TextAnchor const MiddleCenter;

  /// @brief Field MiddleLeft value: I32(3)
  static ::UnityEngine::TextAnchor const MiddleLeft;

  /// @brief Field MiddleRight value: I32(5)
  static ::UnityEngine::TextAnchor const MiddleRight;

  /// @brief Field UpperCenter value: I32(1)
  static ::UnityEngine::TextAnchor const UpperCenter;

  /// @brief Field UpperLeft value: I32(0)
  static ::UnityEngine::TextAnchor const UpperLeft;

  /// @brief Field UpperRight value: I32(2)
  static ::UnityEngine::TextAnchor const UpperRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18408 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextAnchor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAnchor, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAnchor, "UnityEngine", "TextAnchor");
