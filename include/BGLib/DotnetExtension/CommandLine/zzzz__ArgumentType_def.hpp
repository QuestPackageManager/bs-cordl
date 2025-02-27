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
// Dependencies
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: true
// CS Name: BGLib.DotnetExtension.CommandLine.ArgumentType
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

  /// @brief Field Boolean value: I32(0)
  static ::BGLib::DotnetExtension::CommandLine::ArgumentType const Boolean;

  /// @brief Field Integer value: I32(3)
  static ::BGLib::DotnetExtension::CommandLine::ArgumentType const Integer;

  /// @brief Field IntegerOptional value: I32(4)
  static ::BGLib::DotnetExtension::CommandLine::ArgumentType const IntegerOptional;

  /// @brief Field String value: I32(1)
  static ::BGLib::DotnetExtension::CommandLine::ArgumentType const String;

  /// @brief Field StringOptional value: I32(2)
  static ::BGLib::DotnetExtension::CommandLine::ArgumentType const StringOptional;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16955 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::ArgumentType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::ArgumentType, 0x4>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::ArgumentType, "BGLib.DotnetExtension.CommandLine", "ArgumentType");
