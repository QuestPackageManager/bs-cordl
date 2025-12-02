#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/CommandLine/ArgumentOption.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ArgumentOption)
namespace BGLib::DotnetExtension::CommandLine {
struct ArgumentType;
}
namespace BGLib::DotnetExtension::CommandLine {
struct CommandLineParserResult;
}
// Forward declare root types
namespace BGLib::DotnetExtension::CommandLine {
struct ArgumentOption;
}
// Write type traits
MARK_VAL_T(::BGLib::DotnetExtension::CommandLine::ArgumentOption);
// Dependencies BGLib.DotnetExtension.CommandLine.ArgumentType
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: true
// CS Name: BGLib.DotnetExtension.CommandLine.ArgumentOption
struct CORDL_TYPE ArgumentOption {
public:
  // Declarations
  __declspec(property(get = get_expectsValue)) bool expectsValue;

  __declspec(property(get = get_required)) bool required;

  /// @brief Method ToDestinationArguments, addr 0x31e9028, size 0x9c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> ToDestinationArguments(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineArguments);

  /// @brief Method ValidateArgumentValue, addr 0x31e8e14, size 0x214, virtual false, abstract: false, final false
  inline void ValidateArgumentValue(::StringW value);

  /// @brief Method .ctor, addr 0x31e8ddc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW hint, ::BGLib::DotnetExtension::CommandLine::ArgumentType type, ::ArrayW<::StringW, ::Array<::StringW>*> identifiers);

  /// @brief Method get_expectsValue, addr 0x31e8e00, size 0x14, virtual false, abstract: false, final false
  inline bool get_expectsValue();

  /// @brief Method get_required, addr 0x31e8dec, size 0x14, virtual false, abstract: false, final false
  inline bool get_required();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgumentOption();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "identifiers", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "",
  // def_value: None }, CppParam { name: "hint", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::BGLib::DotnetExtension::CommandLine::ArgumentType", modifiers: "",
  // def_value: None }]
  constexpr ArgumentOption(::StringW name, ::ArrayW<::StringW, ::Array<::StringW>*> identifiers, ::StringW hint, ::BGLib::DotnetExtension::CommandLine::ArgumentType type) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20521 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field identifiers, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> identifiers;

  /// @brief Field hint, offset: 0x10, size: 0x8, def value: None
  ::StringW hint;

  /// @brief Field type, offset: 0x18, size: 0x4, def value: None
  ::BGLib::DotnetExtension::CommandLine::ArgumentType type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::ArgumentOption, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::ArgumentOption, identifiers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::ArgumentOption, hint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::ArgumentOption, type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::ArgumentOption, 0x20>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::ArgumentOption, "BGLib.DotnetExtension.CommandLine", "ArgumentOption");
