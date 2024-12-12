#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatterAssemblyStyle)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle);
// Dependencies
namespace System::Runtime::Serialization::Formatters {
// Is value type: true
// CS Name: System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct CORDL_TYPE FormatterAssemblyStyle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FormatterAssemblyStyle_Unwrapped
  enum struct __FormatterAssemblyStyle_Unwrapped : int32_t {
    __E_Simple = static_cast<int32_t>(0x0),
    __E_Full = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FormatterAssemblyStyle_Unwrapped() const noexcept {
    return static_cast<__FormatterAssemblyStyle_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatterAssemblyStyle();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FormatterAssemblyStyle(int32_t value__) noexcept;

  /// @brief Field Full value: I32(1)
  static ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const Full;

  /// @brief Field Simple value: I32(0)
  static ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const Simple;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3241 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle, "System.Runtime.Serialization.Formatters", "FormatterAssemblyStyle");
