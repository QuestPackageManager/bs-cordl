#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __CommandLineParser____c;
}
namespace BGLib::DotnetExtension::CommandLine {
class __CommandLineParser____c__DisplayClass7_0;
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
class __CommandLineParser____c;
}
namespace BGLib::DotnetExtension::CommandLine {
class __CommandLineParser____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::CommandLine::CommandLineParser);
MARK_REF_PTR_T(::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c);
MARK_REF_PTR_T(::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: ::CommandLineParser::<>c__DisplayClass7_0*
class CORDL_TYPE __CommandLineParser____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requiredFound, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requiredFound,
                      put = __cordl_internal_set_requiredFound))::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* requiredFound;

  static inline ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0* New_ctor();

  /// @brief Method <ParseArgs>b__0, addr 0xead74c, size 0x84, virtual false, abstract: false, final false
  inline bool _ParseArgs_b__0(::BGLib::DotnetExtension::CommandLine::ArgumentOption option);

  constexpr ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*& __cordl_internal_get_requiredFound();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> const& __cordl_internal_get_requiredFound() const;

  constexpr void __cordl_internal_set_requiredFound(::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* value);

  /// @brief Method .ctor, addr 0xead634, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CommandLineParser____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CommandLineParser____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CommandLineParser____c__DisplayClass7_0(__CommandLineParser____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CommandLineParser____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CommandLineParser____c__DisplayClass7_0(__CommandLineParser____c__DisplayClass7_0 const&) = delete;

  /// @brief Field requiredFound, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* ___requiredFound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0, ___requiredFound) == 0x10, "Offset mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: ::CommandLineParser::<>c*
class CORDL_TYPE __CommandLineParser____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c* __9;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1))::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* __9__7_1;

  static inline ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c* New_ctor();

  /// @brief Method <ParseArgs>b__7_1, addr 0xead83c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _ParseArgs_b__7_1(::BGLib::DotnetExtension::CommandLine::ArgumentOption option);

  /// @brief Method .ctor, addr 0xead834, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c* getStaticF___9();

  static inline ::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* getStaticF___9__7_1();

  static inline void setStaticF___9(::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c* value);

  static inline void setStaticF___9__7_1(::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CommandLineParser____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CommandLineParser____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CommandLineParser____c(__CommandLineParser____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CommandLineParser____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CommandLineParser____c(__CommandLineParser____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c, 0x10>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
// Type: BGLib.DotnetExtension.CommandLine::CommandLineParser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: ::BGLib.DotnetExtension.CommandLine::CommandLineParser*
class CORDL_TYPE CommandLineParser : public ::System::Object {
public:
  // Declarations
  using __c = ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c;

  using __c__DisplayClass7_0 = ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0;

  /// @brief Method AddParsedOption, addr 0xead63c, size 0x110, virtual false, abstract: false, final false
  static inline void AddParsedOption(::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* parsedOption,
                                     ::BGLib::DotnetExtension::CommandLine::ArgumentOption option, ::StringW value);

  /// @brief Method GenerateHint, addr 0xead148, size 0x4ec, virtual false, abstract: false, final false
  static inline ::StringW GenerateHint(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options);

  /// @brief Method GenerateOptionsMap, addr 0xeabbf8, size 0xa38, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*
  GenerateOptionsMap(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options, ::System::Text::RegularExpressions::Regex* argumentIdentifierRegex);

  /// @brief Method GetCommandLineArgs, addr 0xeab81c, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCommandLineArgs();

  /// @brief Method ParseArgs, addr 0xeac9b0, size 0x78c, virtual false, abstract: false, final false
  static inline void ParseArgs(::System::Collections::Generic::IReadOnlyList_1<::StringW>* args, int32_t startIndex,
                               ::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* requiredOptions,
                               ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>* optionsMap,
                               ByRef<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*> parsedOption,
                               ByRef<::System::Collections::Generic::List_1<::StringW>*> ignored);

  /// @brief Method ParseCommandLine, addr 0xeab8d0, size 0x328, virtual false, abstract: false, final false
  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult
  ParseCommandLine(::System::Collections::Generic::IReadOnlyList_1<::StringW>* args,
                   ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> options);

  /// @brief Method ParseEnvironmentCommandLine, addr 0xeab88c, size 0x44, virtual false, abstract: false, final false
  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult
  ParseEnvironmentCommandLine(::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> options);

  /// @brief Method SelectRequiredOptions, addr 0xeac630, size 0x380, virtual false, abstract: false, final false
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

  /// @brief Field kArgumentIdentifierPattern offset 0xffffffff size 0x8
  static constexpr ::ConstString kArgumentIdentifierPattern{ u"^(?>\\w|-|_)+$" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::CommandLineParser, 0x10>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
NEED_NO_BOX(::BGLib::DotnetExtension::CommandLine::CommandLineParser);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::CommandLineParser*, "BGLib.DotnetExtension.CommandLine", "CommandLineParser");
NEED_NO_BOX(::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*, "BGLib.DotnetExtension.CommandLine", "CommandLineParser/<>c");
NEED_NO_BOX(::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0*, "BGLib.DotnetExtension.CommandLine", "CommandLineParser/<>c__DisplayClass7_0");
