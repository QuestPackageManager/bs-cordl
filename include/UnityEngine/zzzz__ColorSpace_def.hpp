#pragma once
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
// Type: UnityEngine::ColorSpace
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8847))
// CS Name: ::UnityEngine::ColorSpace
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorSpace(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSpace();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Uninitialized value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::ColorSpace const Uninitialized;

  /// @brief Field Gamma value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ColorSpace const Gamma;

  /// @brief Field Linear value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ColorSpace const Linear;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ColorSpace, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ColorSpace, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorSpace, "UnityEngine", "ColorSpace");
