#pragma once
// IWYU pragma private; include "UnityEngine/LineTextureMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LineTextureMode)
// Forward declare root types
namespace UnityEngine {
struct LineTextureMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LineTextureMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LineTextureMode
struct CORDL_TYPE LineTextureMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LineTextureMode_Unwrapped
  enum struct __LineTextureMode_Unwrapped : int32_t {
    __E_Stretch = static_cast<int32_t>(0x0),
    __E_Tile = static_cast<int32_t>(0x1),
    __E_DistributePerSegment = static_cast<int32_t>(0x2),
    __E_RepeatPerSegment = static_cast<int32_t>(0x3),
    __E_Static = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LineTextureMode_Unwrapped() const noexcept {
    return static_cast<__LineTextureMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LineTextureMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LineTextureMode(int32_t value__) noexcept;

  /// @brief Field DistributePerSegment value: I32(2)
  static ::UnityEngine::LineTextureMode const DistributePerSegment;

  /// @brief Field RepeatPerSegment value: I32(3)
  static ::UnityEngine::LineTextureMode const RepeatPerSegment;

  /// @brief Field Static value: I32(4)
  static ::UnityEngine::LineTextureMode const Static;

  /// @brief Field Stretch value: I32(0)
  static ::UnityEngine::LineTextureMode const Stretch;

  /// @brief Field Tile value: I32(1)
  static ::UnityEngine::LineTextureMode const Tile;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10777 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LineTextureMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LineTextureMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LineTextureMode, "UnityEngine", "LineTextureMode");
