#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ArgumentOption)
namespace BGLib::DotnetExtension::CommandLine {
struct ArgumentType;
}
// Forward declare root types
namespace BGLib::DotnetExtension::CommandLine {
struct ArgumentOption;
}
// Write type traits
MARK_VAL_T(::BGLib::DotnetExtension::CommandLine::ArgumentOption);
// Type: BGLib.DotnetExtension.CommandLine::ArgumentOption
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: true
// CS Name: ::BGLib.DotnetExtension.CommandLine::ArgumentOption
struct CORDL_TYPE ArgumentOption {
public:
  // Declarations
  __declspec(property(get = get_expectsValue)) bool expectsValue;

  __declspec(property(get = get_required)) bool required;

  /// @brief Method ValidateArgumentValue, addr 0xeab4a4, size 0x2ac, virtual false, abstract: false, final false
  inline void ValidateArgumentValue(::StringW value);

  /// @brief Method .ctor, addr 0xeab458, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW hint, ::BGLib::DotnetExtension::CommandLine::ArgumentType type, ::ArrayW<::StringW, ::Array<::StringW>*> identifiers);

  /// @brief Method get_expectsValue, addr 0xeab47c, size 0x28, virtual false, abstract: false, final false
  inline bool get_expectsValue();

  /// @brief Method get_required, addr 0xeab468, size 0x14, virtual false, abstract: false, final false
  inline bool get_required();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgumentOption();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "identifiers", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "",
  // def_value: None }, CppParam { name: "hint", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::BGLib::DotnetExtension::CommandLine::ArgumentType", modifiers: "",
  // def_value: None }]
  constexpr ArgumentOption(::StringW name, ::ArrayW<::StringW, ::Array<::StringW>*> identifiers, ::StringW hint, ::BGLib::DotnetExtension::CommandLine::ArgumentType type) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field identifiers, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> identifiers;

  /// @brief Field hint, offset: 0x10, size: 0x8, def value: None
  ::StringW hint;

  /// @brief Field type, offset: 0x18, size: 0x4, def value: None
  ::BGLib::DotnetExtension::CommandLine::ArgumentType type;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::ArgumentOption, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::ArgumentOption, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::ArgumentOption, identifiers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::ArgumentOption, hint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::ArgumentOption, type) == 0x18, "Offset mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::ArgumentOption, "BGLib.DotnetExtension.CommandLine", "ArgumentOption");
