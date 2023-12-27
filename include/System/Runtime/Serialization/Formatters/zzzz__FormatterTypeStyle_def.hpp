#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatterTypeStyle)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::FormatterTypeStyle);
// Type: System.Runtime.Serialization.Formatters::FormatterTypeStyle
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3240))
// CS Name: ::System.Runtime.Serialization.Formatters::FormatterTypeStyle
struct CORDL_TYPE FormatterTypeStyle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FormatterTypeStyle_Unwrapped
  enum struct __FormatterTypeStyle_Unwrapped : int32_t {
    __E_TypesWhenNeeded = static_cast<int32_t>(0x0),
    __E_TypesAlways = static_cast<int32_t>(0x1),
    __E_XsdString = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FormatterTypeStyle_Unwrapped() const noexcept {
    return static_cast<__FormatterTypeStyle_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FormatterTypeStyle(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatterTypeStyle();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field TypesWhenNeeded value: static_cast<int32_t>(0x0)
  static ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const TypesWhenNeeded;

  /// @brief Field TypesAlways value: static_cast<int32_t>(0x1)
  static ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const TypesAlways;

  /// @brief Field XsdString value: static_cast<int32_t>(0x2)
  static ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const XsdString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::FormatterTypeStyle, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::FormatterTypeStyle, "System.Runtime.Serialization.Formatters", "FormatterTypeStyle");
