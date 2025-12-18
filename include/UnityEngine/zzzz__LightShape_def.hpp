#pragma once
// IWYU pragma private; include "UnityEngine/LightShape.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightShape)
// Forward declare root types
namespace UnityEngine {
struct LightShape;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightShape);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightShape
struct CORDL_TYPE LightShape {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightShape_Unwrapped
  enum struct __LightShape_Unwrapped : int32_t {
    __E_Cone = static_cast<int32_t>(0x0),
    __E_Pyramid = static_cast<int32_t>(0x1),
    __E_Box = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightShape_Unwrapped() const noexcept {
    return static_cast<__LightShape_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightShape();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightShape(int32_t value__) noexcept;

  /// @brief Field Box value: I32(2)
  static ::UnityEngine::LightShape const Box;

  /// @brief Field Cone value: I32(0)
  static ::UnityEngine::LightShape const Cone;

  /// @brief Field Pyramid value: I32(1)
  static ::UnityEngine::LightShape const Pyramid;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10155 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightShape, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LightShape, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightShape, "UnityEngine", "LightShape");
