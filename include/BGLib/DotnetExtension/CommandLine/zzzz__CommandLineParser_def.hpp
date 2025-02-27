#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/CommandLine/CommandLineParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommandLineParser)
namespace BGLib::DotnetExtension::CommandLine {
struct ArgumentOption;
}
namespace BGLib::DotnetExtension::CommandLine {
struct CommandLineParserResult;
}
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParser___c;
}
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParser___c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParser;
}
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParser___c;
}
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParser___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::CommandLine::CommandLineParser);
MARK_REF_PTR_T(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c);
MARK_REF_PTR_T(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass7_0);
// Dependencies System.Object
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: BGLib.DotnetExtension.CommandLine.CommandLineParser/<>c
class CORDL_TYPE CommandLineParser___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* __9;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1)) ::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* __9__7_1;

  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* New_ctor();

  /// @brief Method <ParseArgs>b__7_1, addr 0x22a7ba8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _ParseArgs_b__7_1(::BGLib::DotnetExtension::CommandLine::ArgumentOption option);

  /// @brief Method .ctor, addr 0x22a7ba0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* getStaticF___9();

  static inline ::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* getStaticF___9__7_1();

  static inline void setStaticF___9(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* value);

  static inline void setStaticF___9__7_1(::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandLineParser___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParser___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandLineParser___c(CommandLineParser___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParser___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandLineParser___c(CommandLineParser___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16958 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c, 0x10>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
// Dependencies System.Object
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: BGLib.DotnetExtension.CommandLine.CommandLineParser/<>c__DisplayClass7_0
class CORDL_TYPE CommandLineParser___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requiredFound, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requiredFound,
                      put = __cordl_internal_set_requiredFound)) ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* requiredFound;

  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass7_0* New_ctor();

  /// @brief Method <ParseArgs>b__0, addr 0x22a7bb0, size 0x84, virtual false, abstract: false, final false
  inline bool _ParseArgs_b__0(::BGLib::DotnetExtension::CommandLine::ArgumentOption option);

  constexpr ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* const& __cordl_internal_get_requiredFound() const;

  constexpr ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*& __cordl_internal_get_requiredFound();

  constexpr void __cordl_internal_set_requiredFound(::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* value);

  /// @brief Method .ctor, addr 0x22a7a30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandLineParser___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParser___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandLineParser___c__DisplayClass7_0(CommandLineParser___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParser___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandLineParser___c__DisplayClass7_0(CommandLineParser___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16959 };

  /// @brief Field requiredFound, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* ___requiredFound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass7_0, ___requiredFound) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
// Dependencies System.Object
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: BGLib.DotnetExtension.CommandLine.CommandLineParser
class CORDL_TYPE CommandLineParser : public ::System::Object {
public:
  // Declarations
  using __c = ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c;

  using __c__DisplayClass7_0 = ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass7_0;

  /// @brief Method AddParsedOption, addr 0x22a7a38, size 0x10c, virtual false, abstract: false, final false
  static inline void AddParsedOption(::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* parsedOption,
                                     ::BGLib::DotnetExtension::CommandLine::ArgumentOption option, ::StringW value);

  /// @brief Method GenerateHint, addr 0x22a7544, size 0x4ec, virtual false, abstract: false, final false
  static inline ::StringW GenerateHint(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options);

  /// @brief Method GenerateOptionsMap, addr 0x22a6168, size 0x798, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*
  GenerateOptionsMap(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options, ::System::Text::RegularExpressions::Regex* argumentIdentifierRegex);

  /// @brief Method GetCommandLineArgs, addr 0x22a5da4, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCommandLineArgs();

  /// @brief Method ParseArgs, addr 0x22a6c90, size 0x8a8, virtual false, abstract: false, final false
  static inline void ParseArgs(::System::Collections::Generic::IReadOnlyList_1<::StringW>* args, int32_t startIndex,
                               ::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* requiredOptions,
                               ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>* optionsMap,
                               ::ByRef<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*> parsedOption,
                               ::ByRef<::System::Collections::Generic::List_1<::StringW>*> ignored);

  /// @brief Method ParseCommandLine, addr 0x22a5e54, size 0x314, virtual false, abstract: false, final false
  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult
  ParseCommandLine(::System::Collections::Generic::IReadOnlyList_1<::StringW>* args,
                   ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> options);

  /// @brief Method ParseEnvironmentCommandLine, addr 0x22a5e14, size 0x40, virtual false, abstract: false, final false
  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult
  ParseEnvironmentCommandLine(::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> options);

  /// @brief Method SelectRequiredOptions, addr 0x22a6900, size 0x390, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*
  SelectRequiredOptions(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandLineParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandLineParser(CommandLineParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandLineParser(CommandLineParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16960 };

  /// @brief Field kArgumentIdentifierPattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kArgumentIdentifierPattern{ u"^(?>\\w|-|_)+$" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::CommandLineParser, 0x10>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
NEED_NO_BOX(::BGLib::DotnetExtension::CommandLine::CommandLineParser);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::CommandLineParser*, "BGLib.DotnetExtension.CommandLine", "CommandLineParser");
NEED_NO_BOX(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*, "BGLib.DotnetExtension.CommandLine", "CommandLineParser/<>c");
NEED_NO_BOX(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass7_0*, "BGLib.DotnetExtension.CommandLine", "CommandLineParser/<>c__DisplayClass7_0");
