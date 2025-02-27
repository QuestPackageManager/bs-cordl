#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/DataType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataType)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct DataType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Syntax::DataType);
// Dependencies
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.DataType
struct CORDL_TYPE DataType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DataType_Unwrapped
  enum struct __DataType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Number = static_cast<int32_t>(0x1),
    __E_Integer = static_cast<int32_t>(0x2),
    __E_Length = static_cast<int32_t>(0x3),
    __E_Percentage = static_cast<int32_t>(0x4),
    __E_Color = static_cast<int32_t>(0x5),
    __E_Resource = static_cast<int32_t>(0x6),
    __E_Url = static_cast<int32_t>(0x7),
    __E_Time = static_cast<int32_t>(0x8),
    __E_Angle = static_cast<int32_t>(0x9),
    __E_CustomIdent = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DataType_Unwrapped() const noexcept {
    return static_cast<__DataType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DataType(int32_t value__) noexcept;

  /// @brief Field Angle value: I32(9)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const Angle;

  /// @brief Field Color value: I32(5)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const Color;

  /// @brief Field CustomIdent value: I32(10)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const CustomIdent;

  /// @brief Field Integer value: I32(2)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const Integer;

  /// @brief Field Length value: I32(3)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const Length;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const None;

  /// @brief Field Number value: I32(1)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const Number;

  /// @brief Field Percentage value: I32(4)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const Percentage;

  /// @brief Field Resource value: I32(6)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const Resource;

  /// @brief Field Time value: I32(8)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const Time;

  /// @brief Field Url value: I32(7)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const Url;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6474 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::DataType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::DataType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::DataType, "UnityEngine.UIElements.StyleSheets.Syntax", "DataType");
