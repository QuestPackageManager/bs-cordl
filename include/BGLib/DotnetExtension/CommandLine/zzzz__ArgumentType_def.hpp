#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/CommandLine/ArgumentType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArgumentType)
// Forward declare root types
namespace BGLib::DotnetExtension::CommandLine {
struct ArgumentType;
}
// Write type traits
MARK_VAL_T(::BGLib::DotnetExtension::CommandLine::ArgumentType);
// Type: BGLib.DotnetExtension.CommandLine::ArgumentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: true
// CS Name: ::BGLib.DotnetExtension.CommandLine::ArgumentType
struct CORDL_TYPE ArgumentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ArgumentType_Unwrapped
  enum struct __ArgumentType_Unwrapped : int32_t {
    __E_Boolean = static_cast<int32_t>(0x0),
    __E_String = static_cast<int32_t>(0x1),
    __E_StringOptional = static_cast<int32_t>(0x2),
    __E_Integer = static_cast<int32_t>(0x3),
    __E_IntegerOptional = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ArgumentType_Unwrapped() const noexcept {
    return static_cast<__ArgumentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgumentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ArgumentType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Boolean value: static_cast<int32_t>(0x0)
  static ::BGLib::DotnetExtension::CommandLine::ArgumentType const Boolean;

  /// @brief Field Integer value: static_cast<int32_t>(0x3)
  static ::BGLib::DotnetExtension::CommandLine::ArgumentType const Integer;

  /// @brief Field IntegerOptional value: static_cast<int32_t>(0x4)
  static ::BGLib::DotnetExtension::CommandLine::ArgumentType const IntegerOptional;

  /// @brief Field String value: static_cast<int32_t>(0x1)
  static ::BGLib::DotnetExtension::CommandLine::ArgumentType const String;

  /// @brief Field StringOptional value: static_cast<int32_t>(0x2)
  static ::BGLib::DotnetExtension::CommandLine::ArgumentType const StringOptional;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::ArgumentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::ArgumentType, value__) == 0x0, "Offset mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::ArgumentType, "BGLib.DotnetExtension.CommandLine", "ArgumentType");
