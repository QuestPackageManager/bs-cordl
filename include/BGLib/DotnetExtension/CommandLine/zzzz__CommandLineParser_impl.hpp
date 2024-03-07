#pragma once
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
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::*)()>(
    &::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xead634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0._ParseArgs_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::*)(
    ::BGLib::DotnetExtension::CommandLine::ArgumentOption)>(&::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::_ParseArgs_b__0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xead74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0*>::get(), "<ParseArgs>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*&
BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::__cordl_internal_get_requiredFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiredFound;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> const&
BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::__cordl_internal_get_requiredFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiredFound;
}
constexpr void BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::__cordl_internal_set_requiredFound(
    ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requiredFound)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0* BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0*>());
}
inline void BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::_ParseArgs_b__0(::BGLib::DotnetExtension::CommandLine::ArgumentOption option) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0*>::get(), "<ParseArgs>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, option);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c__DisplayClass7_0::__CommandLineParser____c__DisplayClass7_0() {}
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::*)()>(
    &::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xead834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c._ParseArgs_b__7_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::*)(
    ::BGLib::DotnetExtension::CommandLine::ArgumentOption)>(&::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::_ParseArgs_b__7_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xead83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*>::get(), "<ParseArgs>b__7_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::setStaticF___9(::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c* value) {
  ::cordl_internals::setStaticField<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*>::get>(
      std::forward<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*>(value));
}
inline ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c* BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*>::get>();
}
inline void BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::setStaticF___9__7_1(::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*, "<>9__7_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*>::get>(
      std::forward<::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>(value));
}
inline ::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*, "<>9__7_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*>::get>();
}
inline ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c* BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*>());
}
inline void BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::_ParseArgs_b__7_1(::BGLib::DotnetExtension::CommandLine::ArgumentOption option) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c*>::get(), "<ParseArgs>b__7_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, option);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::__CommandLineParser____c::__CommandLineParser____c() {}
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.GetCommandLineArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)()>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xeab81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(),
                                                                               "GetCommandLineArgs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.ParseEnvironmentCommandLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult (*)(
    ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseEnvironmentCommandLine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xeab88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(),
                                                 "ParseEnvironmentCommandLine", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.ParseCommandLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult (*)(
    ::System::Collections::Generic::IReadOnlyList_1<::StringW>*, ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseCommandLine)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xeab8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "ParseCommandLine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.GenerateHint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::GenerateHint)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0xead148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "GenerateHint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.SelectRequiredOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<
    ::BGLib::DotnetExtension::CommandLine::ArgumentOption>* (*)(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::SelectRequiredOptions)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xeac630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "SelectRequiredOptions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.GenerateOptionsMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>* (*)(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*,
                                                                           ::System::Text::RegularExpressions::Regex*)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::GenerateOptionsMap)> {
  constexpr static std::size_t size = 0xa38;
  constexpr static std::size_t addrs = 0xeabbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "GenerateOptionsMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.ParseArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::IReadOnlyList_1<::StringW>*, int32_t, ::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*,
    ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*,
    ByRef<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>, ByRef<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseArgs)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0xeac9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "ParseArgs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::CommandLine::CommandLineParser.AddParsedOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*, ::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW)>(
    &::BGLib::DotnetExtension::CommandLine::CommandLineParser::AddParsedOption)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xead63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "AddParsedOption", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW, ::Array<::StringW>*> BGLib::DotnetExtension::CommandLine::CommandLineParser::GetCommandLineArgs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(),
                                                                             "GetCommandLineArgs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseEnvironmentCommandLine(
    ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "ParseEnvironmentCommandLine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult, false>(nullptr, ___internal_method, options);
}
inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseCommandLine(
    ::System::Collections::Generic::IReadOnlyList_1<::StringW>* args,
    ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "ParseCommandLine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult, false>(nullptr, ___internal_method, args, options);
}
inline ::StringW BGLib::DotnetExtension::CommandLine::CommandLineParser::GenerateHint(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "GenerateHint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, options);
}
inline ::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*
BGLib::DotnetExtension::CommandLine::CommandLineParser::SelectRequiredOptions(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "SelectRequiredOptions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*, false>(nullptr, ___internal_method, options);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*
BGLib::DotnetExtension::CommandLine::CommandLineParser::GenerateOptionsMap(::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* options,
                                                                           ::System::Text::RegularExpressions::Regex* argumentIdentifierRegex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "GenerateOptionsMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*, false>(nullptr, ___internal_method,
                                                                                                                                                                     options, argumentIdentifierRegex);
}
inline void
BGLib::DotnetExtension::CommandLine::CommandLineParser::ParseArgs(::System::Collections::Generic::IReadOnlyList_1<::StringW>* args, int32_t startIndex,
                                                                  ::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>* requiredOptions,
                                                                  ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>* optionsMap,
                                                                  ByRef<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*> parsedOption,
                                                                  ByRef<::System::Collections::Generic::List_1<::StringW>*> ignored) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "ParseArgs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, args, startIndex, requiredOptions, optionsMap, parsedOption, ignored);
}
inline void
BGLib::DotnetExtension::CommandLine::CommandLineParser::AddParsedOption(::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* parsedOption,
                                                                        ::BGLib::DotnetExtension::CommandLine::ArgumentOption option, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::CommandLine::CommandLineParser*>::get(), "AddParsedOption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::ArgumentOption>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parsedOption, option, value);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParser::CommandLineParser() {}
