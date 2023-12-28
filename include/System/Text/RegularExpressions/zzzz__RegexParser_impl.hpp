#pragma once
#include "System/Text/RegularExpressions/zzzz__RegexOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexParser_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCharClass_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexReplacement_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexNode_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexTree_def.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexTree* (*)(::StringW, ::System::Text::RegularExpressions::RegexOptions)>(
    &::System::Text::RegularExpressions::RegexParser::Parse)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x29637f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ParseReplacement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Text::RegularExpressions::RegexReplacement* (*)(::StringW, ::System::Collections::Hashtable*, int32_t, ::System::Collections::Hashtable*,
                                                                          ::System::Text::RegularExpressions::RegexOptions)>(&::System::Text::RegularExpressions::RegexParser::ParseReplacement)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x296462c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "ParseReplacement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::System::Globalization::CultureInfo*)>(
    &::System::Text::RegularExpressions::RegexParser::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2963994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.SetPattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::StringW)>(
    &::System::Text::RegularExpressions::RegexParser::SetPattern)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2963a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "SetPattern",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::System::Text::RegularExpressions::RegexOptions)>(
    &::System::Text::RegularExpressions::RegexParser::Reset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2963df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanRegex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanRegex)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x2963e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanRegex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanReplacement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanReplacement)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2964788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanReplacement", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanCharClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexCharClass* (::System::Text::RegularExpressions::RegexParser::*)(bool, bool)>(
    &::System::Text::RegularExpressions::RegexParser::ScanCharClass)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x29657b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "ScanCharClass", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanGroupOpen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanGroupOpen)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x2965ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanGroupOpen", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanBlank
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanBlank)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x2964e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanBlank", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanBackslash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)(bool)>(
    &::System::Text::RegularExpressions::RegexParser::ScanBackslash)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x2966c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "ScanBackslash",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanBasicBackslash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)(bool)>(
    &::System::Text::RegularExpressions::RegexParser::ScanBasicBackslash)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x2967f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "ScanBasicBackslash",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanDollar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanDollar)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x2967428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanDollar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanCapname
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanCapname)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2967b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanCapname", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanOctal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanOctal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x296852c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanOctal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanDecimal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2967318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanDecimal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::ScanHex)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x29685c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "ScanHex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.HexDigit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::HexDigit)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29686f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "HexDigit",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanControl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2968730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsOnlyTopOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)(::System::Text::RegularExpressions::RegexOptions)>(
    &::System::Text::RegularExpressions::RegexParser::IsOnlyTopOption)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29687cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsOnlyTopOption", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanOptions)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2967d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanOptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanCharEscape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanCharEscape)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x296799c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ScanCharEscape", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ParseProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ParseProperty)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x296782c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "ParseProperty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.TypeFromCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::RegularExpressions::RegexParser::*)(char16_t)>(
    &::System::Text::RegularExpressions::RegexParser::TypeFromCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2967ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "TypeFromCode",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.OptionFromCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexOptions (*)(char16_t)>(
    &::System::Text::RegularExpressions::RegexParser::OptionFromCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29687f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "OptionFromCode",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.CountCaptures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::CountCaptures)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2963ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "CountCaptures", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.NoteCaptureSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::NoteCaptureSlot)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2968854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "NoteCaptureSlot", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.NoteCaptureName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::StringW, int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::NoteCaptureName)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x29689ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "NoteCaptureName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.NoteCaptures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(
    ::System::Collections::Hashtable*, int32_t, ::System::Collections::Hashtable*)>(&::System::Text::RegularExpressions::RegexParser::NoteCaptures)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296477c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "NoteCaptures", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AssignNameSlots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::AssignNameSlots)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x2968b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "AssignNameSlots", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.CaptureSlotFromName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::RegularExpressions::RegexParser::*)(::StringW)>(
    &::System::Text::RegularExpressions::RegexParser::CaptureSlotFromName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2967cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "CaptureSlotFromName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsCaptureSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::IsCaptureSlot)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2967c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsCaptureSlot",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsCaptureName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)(::StringW)>(
    &::System::Text::RegularExpressions::RegexParser::IsCaptureName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2967cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsCaptureName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::UseOptionN)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2967c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "UseOptionN", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::UseOptionI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29657ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "UseOptionI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::UseOptionM)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2967170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "UseOptionM", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::UseOptionS)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29671f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "UseOptionS", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::UseOptionX)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2965124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "UseOptionX", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::UseOptionE)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2967820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "UseOptionE", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsSpecial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::IsSpecial)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29653c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsSpecial",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsStopperX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::IsStopperX)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2965188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsStopperX",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsQuantifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::IsQuantifier)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2965458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsQuantifier",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsTrueQuantifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::IsTrueQuantifier)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2965220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "IsTrueQuantifier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::IsSpace)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2967e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsSpace",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddConcatenate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(int32_t, int32_t, bool)>(
    &::System::Text::RegularExpressions::RegexParser::AddConcatenate)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x29654f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddConcatenate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.PushGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::PushGroup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2966830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "PushGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.PopGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::PopGroup)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2966b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "PopGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.EmptyStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::EmptyStack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2966934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "EmptyStack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.StartGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::System::Text::RegularExpressions::RegexNode*)>(
    &::System::Text::RegularExpressions::RegexParser::StartGroup)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2964d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "StartGroup", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddAlternate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::AddAlternate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x296686c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "AddAlternate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddConcatenate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::AddConcatenate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29672c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "AddConcatenate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddConcatenate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(bool, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::AddConcatenate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x29673e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddConcatenate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.Unit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::Unit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29691bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "Unit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddUnitOne
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(char16_t)>(
    &::System::Text::RegularExpressions::RegexParser::AddUnitOne)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x29656f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddUnitOne",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddUnitNotone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(char16_t)>(
    &::System::Text::RegularExpressions::RegexParser::AddUnitNotone)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2967200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddUnitNotone",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddUnitSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::StringW)>(
    &::System::Text::RegularExpressions::RegexParser::AddUnitSet)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2965dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddUnitSet",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddUnitNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::System::Text::RegularExpressions::RegexNode*)>(
    &::System::Text::RegularExpressions::RegexParser::AddUnitNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29691c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddUnitNode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddUnitType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::AddUnitType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x296717c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddUnitType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::AddGroup)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x29669e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "AddGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.PushOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::PushOptions)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2965e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "PushOptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.PopOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::PopOptions)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2966bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "PopOptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.EmptyOptionsStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::EmptyOptionsStack)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x296895c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "EmptyOptionsStack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.PopKeepOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::PopKeepOptions)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29667cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "PopKeepOptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.MakeException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ArgumentException* (::System::Text::RegularExpressions::RegexParser::*)(::StringW)>(
    &::System::Text::RegularExpressions::RegexParser::MakeException)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2966944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "MakeException",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.Textpos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::Textpos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29691cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "Textpos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.Textto
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::Textto)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29691d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "Textto", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.RightCharMoveRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::RightCharMoveRight)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29672ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "RightCharMoveRight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.MoveRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::MoveRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2965130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "MoveRight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.MoveRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::MoveRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2967c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "MoveRight",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.MoveLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::MoveLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29672b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "MoveLeft", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.CharAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::CharAt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29656dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "CharAt", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.RightChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::RightChar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2965164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "RightChar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.RightChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::RightChar)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2967bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "RightChar",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.CharsRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::CharsRight)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2965140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                               "CharsRight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexParser::__get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& System::Text::RegularExpressions::RegexParser::__get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__stack(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexParser::__get__group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& System::Text::RegularExpressions::RegexParser::__get__group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__group(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____group)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexParser::__get__alternation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& System::Text::RegularExpressions::RegexParser::__get__alternation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternation;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__alternation(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alternation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexParser::__get__concatenation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concatenation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& System::Text::RegularExpressions::RegexParser::__get__concatenation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concatenation;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__concatenation(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____concatenation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexParser::__get__unit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unit;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& System::Text::RegularExpressions::RegexParser::__get__unit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unit;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__unit(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Text::RegularExpressions::RegexParser::__get__pattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pattern;
}
constexpr ::StringW const& System::Text::RegularExpressions::RegexParser::__get__pattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pattern;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__pattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::RegularExpressions::RegexParser::__get__currentPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPos;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexParser::__get__currentPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPos;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__currentPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPos = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Text::RegularExpressions::RegexParser::__get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& System::Text::RegularExpressions::RegexParser::__get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____culture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::RegularExpressions::RegexParser::__get__autocap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocap;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexParser::__get__autocap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocap;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__autocap(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autocap = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexParser::__get__capcount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcount;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexParser::__get__capcount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcount;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__capcount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capcount = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexParser::__get__captop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captop;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexParser::__get__captop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captop;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__captop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____captop = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexParser::__get__capsize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsize;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexParser::__get__capsize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsize;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__capsize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capsize = value;
}
constexpr ::System::Collections::Hashtable*& System::Text::RegularExpressions::RegexParser::__get__caps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Text::RegularExpressions::RegexParser::__get__caps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__caps(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____caps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Text::RegularExpressions::RegexParser::__get__capnames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Text::RegularExpressions::RegexParser::__get__capnames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnames;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__capnames(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capnames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Text::RegularExpressions::RegexParser::__get__capnumlist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnumlist;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Text::RegularExpressions::RegexParser::__get__capnumlist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnumlist;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__capnumlist(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capnumlist)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Text::RegularExpressions::RegexParser::__get__capnamelist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnamelist;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& System::Text::RegularExpressions::RegexParser::__get__capnamelist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnamelist;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__capnamelist(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capnamelist)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::RegularExpressions::RegexOptions& System::Text::RegularExpressions::RegexParser::__get__options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
constexpr ::System::Text::RegularExpressions::RegexOptions const& System::Text::RegularExpressions::RegexParser::__get__options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__options(::System::Text::RegularExpressions::RegexOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____options = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>*& System::Text::RegularExpressions::RegexParser::__get__optionsStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsStack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>*> const&
System::Text::RegularExpressions::RegexParser::__get__optionsStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsStack;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__optionsStack(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionsStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Text::RegularExpressions::RegexParser::__get__ignoreNextParen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreNextParen;
}
constexpr bool const& System::Text::RegularExpressions::RegexParser::__get__ignoreNextParen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreNextParen;
}
constexpr void System::Text::RegularExpressions::RegexParser::__set__ignoreNextParen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreNextParen = value;
}
inline void System::Text::RegularExpressions::RegexParser::setStaticF_s_category(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_category", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::RegularExpressions::RegexParser::getStaticF_s_category() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_category",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get>();
}
inline ::System::Text::RegularExpressions::RegexTree* System::Text::RegularExpressions::RegexParser::Parse(::StringW re, ::System::Text::RegularExpressions::RegexOptions op) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexTree*, false>(nullptr, ___internal_method, re, op);
}
inline ::System::Text::RegularExpressions::RegexReplacement* System::Text::RegularExpressions::RegexParser::ParseReplacement(::StringW rep, ::System::Collections::Hashtable* caps, int32_t capsize,
                                                                                                                             ::System::Collections::Hashtable* capnames,
                                                                                                                             ::System::Text::RegularExpressions::RegexOptions op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "ParseReplacement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexReplacement*, false>(nullptr, ___internal_method, rep, caps, capsize, capnames, op);
}
inline ::System::Text::RegularExpressions::RegexParser* System::Text::RegularExpressions::RegexParser::New_ctor(::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::RegularExpressions::RegexParser*>(culture));
}
inline void System::Text::RegularExpressions::RegexParser::_ctor(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, culture);
}
inline void System::Text::RegularExpressions::RegexParser::SetPattern(::StringW Re) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "SetPattern",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Re);
}
inline void System::Text::RegularExpressions::RegexParser::Reset(::System::Text::RegularExpressions::RegexOptions topopts) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topopts);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanRegex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanRegex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*, false>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanReplacement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanReplacement", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*, false>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexCharClass* System::Text::RegularExpressions::RegexParser::ScanCharClass(bool caseInsensitive, bool scanOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "ScanCharClass", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexCharClass*, false>(this, ___internal_method, caseInsensitive, scanOnly);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanGroupOpen() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanGroupOpen", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::ScanBlank() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanBlank", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanBackslash(bool scanOnly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "ScanBackslash",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*, false>(this, ___internal_method, scanOnly);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanBasicBackslash(bool scanOnly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "ScanBasicBackslash",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*, false>(this, ___internal_method, scanOnly);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanDollar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanDollar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*, false>(this, ___internal_method);
}
inline ::StringW System::Text::RegularExpressions::RegexParser::ScanCapname() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanCapname", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexParser::ScanOctal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanOctal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexParser::ScanDecimal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanDecimal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexParser::ScanHex(int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "ScanHex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, c);
}
inline int32_t System::Text::RegularExpressions::RegexParser::HexDigit(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "HexDigit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ch);
}
inline char16_t System::Text::RegularExpressions::RegexParser::ScanControl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanControl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::IsOnlyTopOption(::System::Text::RegularExpressions::RegexOptions option) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsOnlyTopOption", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, option);
}
inline void System::Text::RegularExpressions::RegexParser::ScanOptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanOptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexParser::ScanCharEscape() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ScanCharEscape", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::StringW System::Text::RegularExpressions::RegexParser::ParseProperty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "ParseProperty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexParser::TypeFromCode(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "TypeFromCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ch);
}
inline ::System::Text::RegularExpressions::RegexOptions System::Text::RegularExpressions::RegexParser::OptionFromCode(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "OptionFromCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexOptions, false>(nullptr, ___internal_method, ch);
}
inline void System::Text::RegularExpressions::RegexParser::CountCaptures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "CountCaptures", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::NoteCaptureSlot(int32_t i, int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "NoteCaptureSlot", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i, pos);
}
inline void System::Text::RegularExpressions::RegexParser::NoteCaptureName(::StringW name, int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "NoteCaptureName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, pos);
}
inline void System::Text::RegularExpressions::RegexParser::NoteCaptures(::System::Collections::Hashtable* caps, int32_t capsize, ::System::Collections::Hashtable* capnames) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "NoteCaptures", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, caps, capsize, capnames);
}
inline void System::Text::RegularExpressions::RegexParser::AssignNameSlots() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "AssignNameSlots", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexParser::CaptureSlotFromName(::StringW capname) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "CaptureSlotFromName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, capname);
}
inline bool System::Text::RegularExpressions::RegexParser::IsCaptureSlot(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsCaptureSlot",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
inline bool System::Text::RegularExpressions::RegexParser::IsCaptureName(::StringW capname) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsCaptureName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, capname);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionN() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "UseOptionN", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "UseOptionI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionM() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "UseOptionM", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "UseOptionS", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionX() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "UseOptionX", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionE() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "UseOptionE", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::IsSpecial(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsSpecial",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline bool System::Text::RegularExpressions::RegexParser::IsStopperX(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsStopperX",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline bool System::Text::RegularExpressions::RegexParser::IsQuantifier(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsQuantifier",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline bool System::Text::RegularExpressions::RegexParser::IsTrueQuantifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "IsTrueQuantifier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::IsSpace(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "IsSpace", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline void System::Text::RegularExpressions::RegexParser::AddConcatenate(int32_t pos, int32_t cch, bool isReplacement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddConcatenate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, cch, isReplacement);
}
inline void System::Text::RegularExpressions::RegexParser::PushGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "PushGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::PopGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "PopGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::EmptyStack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "EmptyStack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::StartGroup(::System::Text::RegularExpressions::RegexNode* openGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "StartGroup", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, openGroup);
}
inline void System::Text::RegularExpressions::RegexParser::AddAlternate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "AddAlternate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::AddConcatenate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "AddConcatenate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::AddConcatenate(bool lazy, int32_t min, int32_t max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddConcatenate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lazy, min, max);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::Unit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "Unit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::AddUnitOne(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddUnitOne",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Text::RegularExpressions::RegexParser::AddUnitNotone(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddUnitNotone",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Text::RegularExpressions::RegexParser::AddUnitSet(::StringW cc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddUnitSet",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cc);
}
inline void System::Text::RegularExpressions::RegexParser::AddUnitNode(::System::Text::RegularExpressions::RegexNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddUnitNode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Text::RegularExpressions::RegexParser::AddUnitType(int32_t type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "AddUnitType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Text::RegularExpressions::RegexParser::AddGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "AddGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::PushOptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "PushOptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::PopOptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "PopOptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::EmptyOptionsStack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "EmptyOptionsStack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::PopKeepOptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "PopKeepOptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ArgumentException* System::Text::RegularExpressions::RegexParser::MakeException(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "MakeException",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentException*, false>(this, ___internal_method, message);
}
inline int32_t System::Text::RegularExpressions::RegexParser::Textpos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "Textpos",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::Textto(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "Textto", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline char16_t System::Text::RegularExpressions::RegexParser::RightCharMoveRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "RightCharMoveRight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::MoveRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "MoveRight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::MoveRight(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "MoveRight",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void System::Text::RegularExpressions::RegexParser::MoveLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "MoveLeft", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexParser::CharAt(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "CharAt", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, i);
}
inline char16_t System::Text::RegularExpressions::RegexParser::RightChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "RightChar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexParser::RightChar(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(), "RightChar",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, i);
}
inline int32_t System::Text::RegularExpressions::RegexParser::CharsRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexParser*>::get(),
                                                                             "CharsRight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexParser::RegexParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
