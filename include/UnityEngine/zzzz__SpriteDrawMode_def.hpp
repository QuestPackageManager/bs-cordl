#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteDrawMode)
// Forward declare root types
namespace UnityEngine {
struct SpriteDrawMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SpriteDrawMode);
// Type: UnityEngine::SpriteDrawMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::SpriteDrawMode
struct CORDL_TYPE SpriteDrawMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SpriteDrawMode_Unwrapped
  enum struct __SpriteDrawMode_Unwrapped : int32_t {
    __E_Simple = static_cast<int32_t>(0x0),
    __E_Sliced = static_cast<int32_t>(0x1),
    __E_Tiled = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SpriteDrawMode_Unwrapped() const noexcept {
    return static_cast<__SpriteDrawMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteDrawMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpriteDrawMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Simple value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SpriteDrawMode const Simple;

  /// @brief Field Sliced value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SpriteDrawMode const Sliced;

  /// @brief Field Tiled value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SpriteDrawMode const Tiled;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpriteDrawMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SpriteDrawMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpriteDrawMode, "UnityEngine", "SpriteDrawMode");
