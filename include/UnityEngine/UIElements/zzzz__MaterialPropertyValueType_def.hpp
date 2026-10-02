#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MaterialPropertyValueType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyValueType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct MaterialPropertyValueType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::MaterialPropertyValueType);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::MaterialPropertyValueType, "UnityEngine.UIElements", "MaterialPropertyValueType");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MaterialPropertyValueType
struct CORDL_TYPE MaterialPropertyValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MaterialPropertyValueType_Unwrapped
  enum struct __MaterialPropertyValueType_Unwrapped : int32_t {
    __E_Float = static_cast<int32_t>(0x0),
    __E_Vector = static_cast<int32_t>(0x1),
    __E_Color = static_cast<int32_t>(0x2),
    __E_Texture = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MaterialPropertyValueType_Unwrapped() const noexcept {
    return static_cast<__MaterialPropertyValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr MaterialPropertyValueType(int32_t value__) noexcept;

  /// @brief Field Color value: I32(2)
  static ::UnityEngine::UIElements::MaterialPropertyValueType const Color;

  /// @brief Field Float value: I32(0)
  static ::UnityEngine::UIElements::MaterialPropertyValueType const Float;

  /// @brief Field Texture value: I32(3)
  static ::UnityEngine::UIElements::MaterialPropertyValueType const Texture;

  /// @brief Field Vector value: I32(1)
  static ::UnityEngine::UIElements::MaterialPropertyValueType const Vector;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5018 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MaterialPropertyValueType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::MaterialPropertyValueType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
