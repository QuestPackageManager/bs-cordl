#pragma once
// IWYU pragma private; include "UnityEngine/ColorSpace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSpace)
// Forward declare root types
namespace UnityEngine {
struct ColorSpace;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ColorSpace);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ColorSpace
struct CORDL_TYPE ColorSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColorSpace_Unwrapped
  enum struct __ColorSpace_Unwrapped : int32_t {
    __E_Uninitialized = static_cast<int32_t>(0xffffffff),
    __E_Gamma = static_cast<int32_t>(0x0),
    __E_Linear = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColorSpace_Unwrapped() const noexcept {
    return static_cast<__ColorSpace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSpace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorSpace(int32_t value__) noexcept;

  /// @brief Field Gamma value: I32(0)
  static ::UnityEngine::ColorSpace const Gamma;

  /// @brief Field Linear value: I32(1)
  static ::UnityEngine::ColorSpace const Linear;

  /// @brief Field Uninitialized value: I32(-1)
  static ::UnityEngine::ColorSpace const Uninitialized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10760 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ColorSpace, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ColorSpace, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorSpace, "UnityEngine", "ColorSpace");
