#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderPropertyType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderPropertyType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderPropertyType);
// Type: UnityEngine.Rendering::ShaderPropertyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10371))
// CS Name: ::UnityEngine.Rendering::ShaderPropertyType
struct CORDL_TYPE ShaderPropertyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShaderPropertyType_Unwrapped
  enum struct __ShaderPropertyType_Unwrapped : int32_t {
    __E_Color = static_cast<int32_t>(0x0),
    __E_Vector = static_cast<int32_t>(0x1),
    __E_Float = static_cast<int32_t>(0x2),
    __E_Range = static_cast<int32_t>(0x3),
    __E_Texture = static_cast<int32_t>(0x4),
    __E_Int = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShaderPropertyType_Unwrapped() const noexcept {
    return static_cast<__ShaderPropertyType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShaderPropertyType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderPropertyType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Color value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::ShaderPropertyType const Color;

  /// @brief Field Vector value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::ShaderPropertyType const Vector;

  /// @brief Field Float value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::ShaderPropertyType const Float;

  /// @brief Field Range value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::ShaderPropertyType const Range;

  /// @brief Field Texture value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::ShaderPropertyType const Texture;

  /// @brief Field Int value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::ShaderPropertyType const Int;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderPropertyType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderPropertyType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderPropertyType, "UnityEngine.Rendering", "ShaderPropertyType");
