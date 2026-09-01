#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\CommandLine\CommandLineParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParser_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentOption_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParser_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::CommandLine::CommandLineParser___c::*)()>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33138d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c._NormalizeCommandLineArgs_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::DotnetExtension::CommandLine::CommandLineParser___c::*)(char16_t)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser___c::_NormalizeCommandLineArgs_b__2_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33138d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>(),
                                                                                           { "<NormalizeCommandLineArgs>b__2_0", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c._ParseArgs_b__9_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::DotnetExtension::CommandLine::CommandLineParser___c::*)(::BGLib::DotnetExtension::CommandLine::ArgumentOption)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser___c::_ParseArgs_b__9_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331391c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>(),
                                                                                           { "<ParseArgs>b__9_1", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>() } })));
    return ___internal_method;
  }
};
inline void BGLib::DotnetExtension::CommandLine::CommandLineParser___c::setStaticF___9(::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* value) {
  ::cordl_internals::setStaticField<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*, "<>9", ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>(
      std::forward<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>(value));
}
inline ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* BGLib::DotnetExtension::CommandLine::CommandLineParser___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*, "<>9", ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>();
}
inline void BGLib::DotnetExtension::CommandLine::CommandLineParser___c::setStaticF___9__2_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__2_0", ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>(
      std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* BGLib::DotnetExtension::CommandLine::CommandLineParser___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__2_0", ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>();
}
inline void BGLib::DotnetExtension::CommandLine::CommandLineParser___c::setStaticF___9__9_1(::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*, "<>9__9_1", ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>(
      std::forward<::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>(value));
}
inline ::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* BGLib::DotnetExtension::CommandLine::CommandLineParser___c::getStaticF___9__9_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*, "<>9__9_1",
                                           ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>();
}
inline void BGLib::DotnetExtension::CommandLine::CommandLineParser___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BGLib::DotnetExtension::CommandLine::CommandLineParser___c::_NormalizeCommandLineArgs_b__2_0(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>(), { "<NormalizeCommandLineArgs>b__2_0", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::StringW BGLib::DotnetExtension::CommandLine::CommandLineParser___c::_ParseArgs_b__9_1(::BGLib::DotnetExtension::CommandLine::ArgumentOption option) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>(),
                                                                                         { "<ParseArgs>b__9_1", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, option);
}
inline ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c* BGLib::DotnetExtension::CommandLine::CommandLineParser___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c::CommandLineParser___c() {}
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::*)()>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3313764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0._ParseArgs_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::*)(::BGLib::DotnetExtension::CommandLine::ArgumentOption)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::_ParseArgs_b__0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3313924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0*>(),
                                                                                           { "<ParseArgs>b__0", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*&
BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::__cordl_internal_get_requiredFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiredFound;
}
constexpr ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* const&
BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::__cordl_internal_get_requiredFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiredFound;
}
constexpr void BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::__cordl_internal_set_requiredFound(
    ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requiredFound = value;
}
inline void BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::_ParseArgs_b__0(::BGLib::DotnetExtension::CommandLine::ArgumentOption option) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0*>(),
                                                                                         { "<ParseArgs>b__0", {}, { ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, option);
}
inline ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0* BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParser___c__DisplayClass9_0::CommandLineParser___c__DisplayClass9_0() {}
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.GetCommandLineArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::BGLib::DotnetExtension::CommandLine::CommandLineParser::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3311590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(), { "GetCommandLineArgs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.NormalizeCommandLineArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>)>(&::BGLib::DotnetExtension::CommandLine::CommandLineParser::NormalizeCommandLineArgs)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x33115a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(), { "NormalizeCommandLineArgs", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.TokenizeCommandLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::StringW, ::System::Func_2<char16_t, bool>*)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::TokenizeCommandLine)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3311704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                                             { "TokenizeCommandLine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_2<char16_t, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.ParseEnvironmentCommandLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult (*)(::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption>)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseEnvironmentCommandLine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33119dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                                             { "ParseEnvironmentCommandLine", {}, { ::i2c::type_of<::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.ParseCommandLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult (*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*,
                                                                                                                          ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption>)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseCommandLine)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x3311a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                            { "ParseCommandLine",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.GenerateHint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::GenerateHint)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x331321c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                                { "GenerateHint", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.SelectRequiredOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<
    ::BGLib::DotnetExtension::CommandLine::ArgumentOption>* (*)(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::SelectRequiredOptions)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x3312570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                            { "SelectRequiredOptions", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.GenerateOptionsMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>* (*)(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*,
                                                                           ::System::Text::RegularExpressions::Regex*)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::GenerateOptionsMap)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x3311d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                                             { "GenerateOptionsMap",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>(),
                                                                 ::i2c::type_of<::System::Text::RegularExpressions::Regex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.ParseArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::Collections::Generic::IReadOnlyList_1<::StringW>*, int32_t, ::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*,
    ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*,
    ::by_ref<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>, ::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseArgs)> {
  constexpr static std::size_t size = 0x934;
  constexpr static std::size_t addrs = 0x33128dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                                { "ParseArgs",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.AddParsedOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*,
                                                                ::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::AddParsedOption)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3313768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                                             { "AddParsedOption",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>(),
                                                                 ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser._TokenizeCommandLine_g__Flush_3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::System::Collections::Generic::List_1<::StringW>*, bool)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::_TokenizeCommandLine_g__Flush_3_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x33118ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                         { "<TokenizeCommandLine>g__Flush|3_0",
                                           {},
                                           { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW> BGLib::DotnetExtension::CommandLine::CommandLineParser::GetCommandLineArgs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(), { "GetCommandLineArgs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> BGLib::DotnetExtension::CommandLine::CommandLineParser::NormalizeCommandLineArgs(::ArrayW<::StringW> environmentCommandLines) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(), { "NormalizeCommandLineArgs", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, environmentCommandLines);
}
inline ::System::Collections::Generic::List_1<::StringW>* BGLib::DotnetExtension::CommandLine::CommandLineParser::TokenizeCommandLine(::StringW commandLine,
                                                                                                                                      ::System::Func_2<char16_t, bool>* isSeparator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                                           { "TokenizeCommandLine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_2<char16_t, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method, commandLine, isSeparator);
}
inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult
BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseEnvironmentCommandLine(::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption> options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                                           { "ParseEnvironmentCommandLine", {}, { ::i2c::type_of<::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption>>() } })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>(nullptr, ___internal_method, options);
}
inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult
BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseCommandLine(::System::Collections::Generic::IReadOnlyList_1<::StringW>* args,
                                                                         ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption> options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                          { "ParseCommandLine",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption>>() } })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>(nullptr, ___internal_method, args, options);
}
inline ::StringW BGLib::DotnetExtension::CommandLine::CommandLineParser::GenerateHint(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                              { "GenerateHint", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, options);
}
inline ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*
BGLib::DotnetExtension::CommandLine::CommandLineParser::SelectRequiredOptions(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                       { "SelectRequiredOptions", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>(nullptr, ___internal_method, options);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*
BGLib::DotnetExtension::CommandLine::CommandLineParser::GenerateOptionsMap(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options,
                                                                           ::System::Text::RegularExpressions::Regex* argumentIdentifierRegex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                                           { "GenerateOptionsMap",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>(),
                                                               ::i2c::type_of<::System::Text::RegularExpressions::Regex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>(nullptr, ___internal_method, options,
                                                                                                                                                              argumentIdentifierRegex);
}
inline void BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseArgs(
    ::System::Collections::Generic::IReadOnlyList_1<::StringW>* args, int32_t startIndex,
    ::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* requiredOptions,
    ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>* optionsMap,
    ::by_ref<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*> parsedOption,
    ::by_ref<::System::Collections::Generic::List_1<::StringW>*> ignored) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                              { "ParseArgs",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, requiredOptions, optionsMap, parsedOption, ignored);
}
inline void
BGLib::DotnetExtension::CommandLine::CommandLineParser::AddParsedOption(::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* parsedOption,
                                                                        ::BGLib::DotnetExtension::CommandLine::ArgumentOption option, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                                           { "AddParsedOption",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>(),
                                                               ::i2c::type_of<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parsedOption, option, value);
}
inline void BGLib::DotnetExtension::CommandLine::CommandLineParser::_TokenizeCommandLine_g__Flush_3_0(::System::Text::StringBuilder* currentString,
                                                                                                      ::System::Collections::Generic::List_1<::StringW>* output, bool shouldFlushEmptyString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>(),
                                              { "<TokenizeCommandLine>g__Flush|3_0",
                                                {},
                                                { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentString, output, shouldFlushEmptyString);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParser::CommandLineParser() {}
