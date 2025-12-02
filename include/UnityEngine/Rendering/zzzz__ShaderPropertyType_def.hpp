#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderPropertyType.hpp"
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
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShaderPropertyType
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderPropertyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShaderPropertyType(int32_t value__) noexcept;

  /// @brief Field Color value: I32(0)
  static ::UnityEngine::Rendering::ShaderPropertyType const Color;

  /// @brief Field Float value: I32(2)
  static ::UnityEngine::Rendering::ShaderPropertyType const Float;

  /// @brief Field Int value: I32(5)
  static ::UnityEngine::Rendering::ShaderPropertyType const Int;

  /// @brief Field Range value: I32(3)
  static ::UnityEngine::Rendering::ShaderPropertyType const Range;

  /// @brief Field Texture value: I32(4)
  static ::UnityEngine::Rendering::ShaderPropertyType const Texture;

  /// @brief Field Vector value: I32(1)
  static ::UnityEngine::Rendering::ShaderPropertyType const Vector;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10868 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderPropertyType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderPropertyType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderPropertyType, "UnityEngine.Rendering", "ShaderPropertyType");
