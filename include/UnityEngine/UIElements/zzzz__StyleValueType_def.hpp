#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleValueType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleValueType);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleValueType
struct CORDL_TYPE StyleValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleValueType_Unwrapped
  enum struct __StyleValueType_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_Keyword = static_cast<int32_t>(0x1),
    __E_Float = static_cast<int32_t>(0x2),
    __E_Dimension = static_cast<int32_t>(0x3),
    __E_Color = static_cast<int32_t>(0x4),
    __E_ResourcePath = static_cast<int32_t>(0x5),
    __E_AssetReference = static_cast<int32_t>(0x6),
    __E_Enum = static_cast<int32_t>(0x7),
    __E_Variable = static_cast<int32_t>(0x8),
    __E_String = static_cast<int32_t>(0x9),
    __E_Function = static_cast<int32_t>(0xa),
    __E_CommaSeparator = static_cast<int32_t>(0xb),
    __E_ScalableImage = static_cast<int32_t>(0xc),
    __E_MissingAssetReference = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleValueType_Unwrapped() const noexcept {
    return static_cast<__StyleValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleValueType(int32_t value__) noexcept;

  /// @brief Field AssetReference value: I32(6)
  static ::UnityEngine::UIElements::StyleValueType const AssetReference;

  /// @brief Field Color value: I32(4)
  static ::UnityEngine::UIElements::StyleValueType const Color;

  /// @brief Field CommaSeparator value: I32(11)
  static ::UnityEngine::UIElements::StyleValueType const CommaSeparator;

  /// @brief Field Dimension value: I32(3)
  static ::UnityEngine::UIElements::StyleValueType const Dimension;

  /// @brief Field Enum value: I32(7)
  static ::UnityEngine::UIElements::StyleValueType const Enum;

  /// @brief Field Float value: I32(2)
  static ::UnityEngine::UIElements::StyleValueType const Float;

  /// @brief Field Function value: I32(10)
  static ::UnityEngine::UIElements::StyleValueType const Function;

  /// @brief Field Invalid value: I32(0)
  static ::UnityEngine::UIElements::StyleValueType const Invalid;

  /// @brief Field Keyword value: I32(1)
  static ::UnityEngine::UIElements::StyleValueType const Keyword;

  /// @brief Field MissingAssetReference value: I32(13)
  static ::UnityEngine::UIElements::StyleValueType const MissingAssetReference;

  /// @brief Field ResourcePath value: I32(5)
  static ::UnityEngine::UIElements::StyleValueType const ResourcePath;

  /// @brief Field ScalableImage value: I32(12)
  static ::UnityEngine::UIElements::StyleValueType const ScalableImage;

  /// @brief Field String value: I32(9)
  static ::UnityEngine::UIElements::StyleValueType const String;

  /// @brief Field Variable value: I32(8)
  static ::UnityEngine::UIElements::StyleValueType const Variable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6185 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleValueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueType, "UnityEngine.UIElements", "StyleValueType");
