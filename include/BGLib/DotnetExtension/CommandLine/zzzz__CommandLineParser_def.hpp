#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\CommandLine\CommandLineParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
class CommandLineParser___c__DisplayClass9_0;
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
namespace System::Text {
class StringBuilder;
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
class CommandLineParser___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::BGLib::DotnetExtension::CommandLine::CommandLineParser*);
MARK_REF_T(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*);
MARK_REF_T(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::BGLib::DotnetExtension::CommandLine::CommandLineParser*, "BGLib.DotnetExtension.CommandLine", "CommandLineParser");
DEFINE_IL2CPP_CLASS(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*, "BGLib.DotnetExtension.CommandLine", "CommandLineParser/<>c");
DEFINE_IL2CPP_CLASS(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0*, "BGLib.DotnetExtension.CommandLine", "CommandLineParser/<>c__DisplayClass9_0");
// Dependencies System.Object
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: BGLib.DotnetExtension.CommandLine.CommandLineParser/<>c
class CORDL_TYPE CommandLineParser___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<char16_t, bool>* __9__2_0;

  /// @brief Field <>9__9_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_1, put = setStaticF___9__9_1)) ::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* __9__9_1;

  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* New_ctor();

  /// @brief Method <NormalizeCommandLineArgs>b__2_0, addr 0x33138d8, size 0x44, virtual false, abstract: false, final false
  inline bool _NormalizeCommandLineArgs_b__2_0(char16_t c);

  /// @brief Method <ParseArgs>b__9_1, addr 0x331391c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _ParseArgs_b__9_1(::BGLib::DotnetExtension::CommandLine::ArgumentOption option);

  /// @brief Method .ctor, addr 0x33138d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* getStaticF___9();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__2_0();

  static inline ::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* getStaticF___9__9_1();

  static inline void setStaticF___9(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__9_1(::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20521 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c) == 0x10, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
// Dependencies System.Object
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: BGLib.DotnetExtension.CommandLine.CommandLineParser/<>c__DisplayClass9_0
class CORDL_TYPE CommandLineParser___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requiredFound, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requiredFound,
                      put = __cordl_internal_set_requiredFound)) ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* requiredFound;

  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0* New_ctor();

  /// @brief Method <ParseArgs>b__0, addr 0x3313924, size 0x88, virtual false, abstract: false, final false
  inline bool _ParseArgs_b__0(::BGLib::DotnetExtension::CommandLine::ArgumentOption option);

  constexpr ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* const& __cordl_internal_get_requiredFound() const;

  constexpr ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*& __cordl_internal_get_requiredFound();

  constexpr void __cordl_internal_set_requiredFound(::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* value);

  /// @brief Method .ctor, addr 0x3313764, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandLineParser___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParser___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandLineParser___c__DisplayClass9_0(CommandLineParser___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParser___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandLineParser___c__DisplayClass9_0(CommandLineParser___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20522 };

  /// @brief Field requiredFound, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* ___requiredFound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0, ___requiredFound) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0) == 0x18, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
// Dependencies System.Object
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: BGLib.DotnetExtension.CommandLine.CommandLineParser
class CORDL_TYPE CommandLineParser : public ::System::Object {
public:
  // Declarations
  using __c = ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c;

  using __c__DisplayClass9_0 = ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0;

  /// @brief Method AddParsedOption, addr 0x3313768, size 0x118, virtual false, abstract: false, final false
  static inline void AddParsedOption(::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* parsedOption,
                                     ::BGLib::DotnetExtension::CommandLine::ArgumentOption option, ::StringW value);

  /// @brief Method GenerateHint, addr 0x331321c, size 0x548, virtual false, abstract: false, final false
  static inline ::StringW GenerateHint(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options);

  /// @brief Method GenerateOptionsMap, addr 0x3311d48, size 0x828, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*
  GenerateOptionsMap(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options, ::System::Text::RegularExpressions::Regex* argumentIdentifierRegex);

  /// @brief Method GetCommandLineArgs, addr 0x3311590, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetCommandLineArgs();

  /// @brief Method NormalizeCommandLineArgs, addr 0x33115a0, size 0x164, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> NormalizeCommandLineArgs(::ArrayW<::StringW> environmentCommandLines);

  /// @brief Method ParseArgs, addr 0x33128dc, size 0x934, virtual false, abstract: false, final false
  static inline void ParseArgs(::System::Collections::Generic::IReadOnlyList_1<::StringW>* args, int32_t startIndex,
                               ::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* requiredOptions,
                               ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>* optionsMap,
                               ::by_ref<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*> parsedOption,
                               ::by_ref<::System::Collections::Generic::List_1<::StringW>*> ignored);

  /// @brief Method ParseCommandLine, addr 0x3311a20, size 0x328, virtual false, abstract: false, final false
  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult ParseCommandLine(::System::Collections::Generic::IReadOnlyList_1<::StringW>* args,
                                                                                                ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption> options);

  /// @brief Method ParseEnvironmentCommandLine, addr 0x33119dc, size 0x44, virtual false, abstract: false, final false
  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult ParseEnvironmentCommandLine(::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption> options);

  /// @brief Method SelectRequiredOptions, addr 0x3312570, size 0x36c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*
  SelectRequiredOptions(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options);

  /// @brief Method TokenizeCommandLine, addr 0x3311704, size 0x1e8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* TokenizeCommandLine(::StringW commandLine, ::System::Func_2<char16_t, bool>* isSeparator);

  /// @brief Method <TokenizeCommandLine>g__Flush|3_0, addr 0x33118ec, size 0xf0, virtual false, abstract: false, final false
  static inline void _TokenizeCommandLine_g__Flush_3_0(::System::Text::StringBuilder* currentString, ::System::Collections::Generic::List_1<::StringW>* output, bool shouldFlushEmptyString);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20523 };

  /// @brief Field kArgumentIdentifierPattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kArgumentIdentifierPattern{ u"^(?>\\w|-|_)+$" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::DotnetExtension::CommandLine::CommandLineParser) == 0x10, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
