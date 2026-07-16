#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexParser.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexParser_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCharClass_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexNode_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexReplacement_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexTree_def.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexTree* (*)(::StringW, ::System::Text::RegularExpressions::RegexOptions)>(
    &::System::Text::RegularExpressions::RegexParser::Parse)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6389178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                             { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ParseReplacement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexReplacement* (*)(::StringW, ::System::Collections::Hashtable*, int32_t,
                                                                                                                 ::System::Collections::Hashtable*, ::System::Text::RegularExpressions::RegexOptions)>(
    &::System::Text::RegularExpressions::RegexParser::ParseReplacement)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6389f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                             { "ParseReplacement",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::System::Globalization::CultureInfo*)>(
    &::System::Text::RegularExpressions::RegexParser::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x63892f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.SetPattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::StringW)>(&::System::Text::RegularExpressions::RegexParser::SetPattern)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63893a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "SetPattern", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::System::Text::RegularExpressions::RegexOptions)>(
    &::System::Text::RegularExpressions::RegexParser::Reset)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6389714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                                                           { "Reset", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanRegex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanRegex)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x63897b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanRegex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanReplacement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanReplacement)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x638a0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanReplacement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanCharClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexCharClass* (::System::Text::RegularExpressions::RegexParser::*)(bool, bool)>(
    &::System::Text::RegularExpressions::RegexParser::ScanCharClass)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x638b0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanCharClass", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanGroupOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanGroupOpen)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x638b800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanGroupOpen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanBlank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::ScanBlank)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x638a748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanBlank", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanBackslash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)(bool)>(
    &::System::Text::RegularExpressions::RegexParser::ScanBackslash)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x638c5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanBackslash", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanBasicBackslash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)(bool)>(
    &::System::Text::RegularExpressions::RegexParser::ScanBasicBackslash)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x638d970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanBasicBackslash", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanDollar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::ScanDollar)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x638cdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanDollar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanCapname
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::ScanCapname)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x638d55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanCapname", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanOctal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::ScanOctal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x638dec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanOctal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::ScanDecimal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x638cc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(&::System::Text::RegularExpressions::RegexParser::ScanHex)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x638df60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanHex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.HexDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::HexDigit)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x638e098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "HexDigit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::ScanControl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x638e0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsOnlyTopOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)(::System::Text::RegularExpressions::RegexOptions)>(
    &::System::Text::RegularExpressions::RegexParser::IsOnlyTopOption)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x638e168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                                                           { "IsOnlyTopOption", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::ScanOptions)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x638d748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ScanCharEscape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::ScanCharEscape)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x638d35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanCharEscape", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.ParseProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::ParseProperty)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x638d1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ParseProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.TypeFromCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexParser::*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::TypeFromCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x638d8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "TypeFromCode", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.OptionFromCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexOptions (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::OptionFromCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x638e18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "OptionFromCode", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.CountCaptures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::CountCaptures)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x63893c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "CountCaptures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.NoteCaptureSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::NoteCaptureSlot)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x638e1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "NoteCaptureSlot", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.NoteCaptureName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::StringW, int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::NoteCaptureName)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x638e324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "NoteCaptureName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.NoteCaptures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::System::Collections::Hashtable*, int32_t, ::System::Collections::Hashtable*)>(
    &::System::Text::RegularExpressions::RegexParser::NoteCaptures)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x638a0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                            { "NoteCaptures", {}, { ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AssignNameSlots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::AssignNameSlots)> {
  constexpr static std::size_t size = 0x684;
  constexpr static std::size_t addrs = 0x638e4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AssignNameSlots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.CaptureSlotFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexParser::*)(::StringW)>(
    &::System::Text::RegularExpressions::RegexParser::CaptureSlotFromName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x638d6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "CaptureSlotFromName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsCaptureSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(&::System::Text::RegularExpressions::RegexParser::IsCaptureSlot)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x638d674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsCaptureSlot", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsCaptureName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)(::StringW)>(&::System::Text::RegularExpressions::RegexParser::IsCaptureName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x638d6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsCaptureName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::UseOptionN)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x638d668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionN", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::UseOptionI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x638b0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::UseOptionM)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x638cafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionM", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::UseOptionS)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x638cb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::UseOptionX)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x638aa28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.UseOptionE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::UseOptionE)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x638d1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionE", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsSpecial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::IsSpecial)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x638acc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsSpecial", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsStopperX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::IsStopperX)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x638aaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsStopperX", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsQuantifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::IsQuantifier)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x638ad60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsQuantifier", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsTrueQuantifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::IsTrueQuantifier)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x638ab3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsTrueQuantifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.IsSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::IsSpace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x638d844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsSpace", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddConcatenate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(int32_t, int32_t, bool)>(
    &::System::Text::RegularExpressions::RegexParser::AddConcatenate)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x638adfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                             { "AddConcatenate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.PushGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::PushGroup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x638c14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "PushGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.PopGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::PopGroup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x638c458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "PopGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.EmptyStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::EmptyStack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x638c244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "EmptyStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.StartGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::System::Text::RegularExpressions::RegexNode*)>(
    &::System::Text::RegularExpressions::RegexParser::StartGroup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x638a6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                                                           { "StartGroup", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddAlternate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::AddAlternate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x638c188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddAlternate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddConcatenate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::AddConcatenate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x638cc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddConcatenate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddConcatenate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(bool, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexParser::AddConcatenate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x638cd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                             { "AddConcatenate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.Unit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexNode* (::System::Text::RegularExpressions::RegexParser::*)()>(
    &::System::Text::RegularExpressions::RegexParser::Unit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x638eb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "Unit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddUnitOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::AddUnitOne)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x638b01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddUnitOne", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddUnitNotone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(char16_t)>(&::System::Text::RegularExpressions::RegexParser::AddUnitNotone)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x638cb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddUnitNotone", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddUnitSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::StringW)>(&::System::Text::RegularExpressions::RegexParser::AddUnitSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x638b6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddUnitSet", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddUnitNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(::System::Text::RegularExpressions::RegexNode*)>(
    &::System::Text::RegularExpressions::RegexParser::AddUnitNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x638eb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                                                           { "AddUnitNode", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddUnitType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(&::System::Text::RegularExpressions::RegexParser::AddUnitType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x638cb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddUnitType", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.AddGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::AddGroup)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x638c300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.PushOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::PushOptions)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x638b75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "PushOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.PopOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::PopOptions)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x638c538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "PopOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.EmptyOptionsStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::EmptyOptionsStack)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x638e2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "EmptyOptionsStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.PopKeepOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::PopKeepOptions)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x638c0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "PopKeepOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.MakeException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentException* (::System::Text::RegularExpressions::RegexParser::*)(::StringW)>(
    &::System::Text::RegularExpressions::RegexParser::MakeException)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x638c254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "MakeException", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.Textpos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::Textpos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x638eb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "Textpos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.Textto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(&::System::Text::RegularExpressions::RegexParser::Textto)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x638eb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "Textto", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.RightCharMoveRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::RightCharMoveRight)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x638cc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "RightCharMoveRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.MoveRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::MoveRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x638aa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "MoveRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.MoveRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(&::System::Text::RegularExpressions::RegexParser::MoveRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x638d658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "MoveRight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.MoveLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::MoveLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x638cc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "MoveLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.CharAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(&::System::Text::RegularExpressions::RegexParser::CharAt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x638afe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "CharAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.RightChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::RightChar)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x638aa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "RightChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.RightChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::RegularExpressions::RegexParser::*)(int32_t)>(&::System::Text::RegularExpressions::RegexParser::RightChar)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x638d61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "RightChar", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexParser.CharsRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexParser::*)()>(&::System::Text::RegularExpressions::RegexParser::CharsRight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x638aa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "CharsRight", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::System::Text::RegularExpressions::RegexNode* const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__stack(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stack = value;
}
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group;
}
constexpr ::System::Text::RegularExpressions::RegexNode* const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__group(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____group = value;
}
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__alternation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternation;
}
constexpr ::System::Text::RegularExpressions::RegexNode* const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__alternation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternation;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__alternation(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alternation = value;
}
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__concatenation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concatenation;
}
constexpr ::System::Text::RegularExpressions::RegexNode* const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__concatenation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concatenation;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__concatenation(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____concatenation = value;
}
constexpr ::System::Text::RegularExpressions::RegexNode*& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__unit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unit;
}
constexpr ::System::Text::RegularExpressions::RegexNode* const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__unit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unit;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__unit(::System::Text::RegularExpressions::RegexNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unit = value;
}
constexpr ::StringW& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__pattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pattern;
}
constexpr ::StringW const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__pattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pattern;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__pattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pattern = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__currentPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPos;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__currentPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPos;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__currentPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPos = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____culture = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__autocap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocap;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__autocap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocap;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__autocap(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autocap = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__capcount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcount;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__capcount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capcount;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__capcount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capcount = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__captop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captop;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__captop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captop;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__captop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____captop = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__capsize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsize;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__capsize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsize;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__capsize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capsize = value;
}
constexpr ::System::Collections::Hashtable*& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__caps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr ::System::Collections::Hashtable* const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__caps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__caps(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caps = value;
}
constexpr ::System::Collections::Hashtable*& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__capnames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnames;
}
constexpr ::System::Collections::Hashtable* const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__capnames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnames;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__capnames(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capnames = value;
}
constexpr ::ArrayW<int32_t>& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__capnumlist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnumlist;
}
constexpr ::ArrayW<int32_t> const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__capnumlist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnumlist;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__capnumlist(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capnumlist = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__capnamelist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnamelist;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__capnamelist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capnamelist;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__capnamelist(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capnamelist = value;
}
constexpr ::System::Text::RegularExpressions::RegexOptions& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
constexpr ::System::Text::RegularExpressions::RegexOptions const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__options(::System::Text::RegularExpressions::RegexOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____options = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>*& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__optionsStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsStack;
}
constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__optionsStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsStack;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__optionsStack(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optionsStack = value;
}
constexpr bool& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__ignoreNextParen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreNextParen;
}
constexpr bool const& System::Text::RegularExpressions::RegexParser::__cordl_internal_get__ignoreNextParen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreNextParen;
}
constexpr void System::Text::RegularExpressions::RegexParser::__cordl_internal_set__ignoreNextParen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreNextParen = value;
}
inline void System::Text::RegularExpressions::RegexParser::setStaticF_s_category(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_category", ::System::Text::RegularExpressions::RegexParser*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Text::RegularExpressions::RegexParser::getStaticF_s_category() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_category", ::System::Text::RegularExpressions::RegexParser*>();
}
inline ::System::Text::RegularExpressions::RegexTree* System::Text::RegularExpressions::RegexParser::Parse(::StringW re, ::System::Text::RegularExpressions::RegexOptions op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                           { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexTree*>(nullptr, ___internal_method, re, op);
}
inline ::System::Text::RegularExpressions::RegexReplacement* System::Text::RegularExpressions::RegexParser::ParseReplacement(::StringW rep, ::System::Collections::Hashtable* caps, int32_t capsize,
                                                                                                                             ::System::Collections::Hashtable* capnames,
                                                                                                                             ::System::Text::RegularExpressions::RegexOptions op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                           { "ParseReplacement",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexReplacement*>(nullptr, ___internal_method, rep, caps, capsize, capnames, op);
}
inline void System::Text::RegularExpressions::RegexParser::_ctor(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline void System::Text::RegularExpressions::RegexParser::SetPattern(::StringW Re) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "SetPattern", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Re);
}
inline void System::Text::RegularExpressions::RegexParser::Reset(::System::Text::RegularExpressions::RegexOptions topopts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "Reset", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topopts);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanRegex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanRegex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanReplacement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanReplacement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexCharClass* System::Text::RegularExpressions::RegexParser::ScanCharClass(bool caseInsensitive, bool scanOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanCharClass", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexCharClass*>(this, ___internal_method, caseInsensitive, scanOnly);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanGroupOpen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanGroupOpen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::ScanBlank() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanBlank", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanBackslash(bool scanOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanBackslash", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*>(this, ___internal_method, scanOnly);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanBasicBackslash(bool scanOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanBasicBackslash", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*>(this, ___internal_method, scanOnly);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::ScanDollar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanDollar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*>(this, ___internal_method);
}
inline ::StringW System::Text::RegularExpressions::RegexParser::ScanCapname() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanCapname", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexParser::ScanOctal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanOctal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexParser::ScanDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexParser::ScanHex(int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanHex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, c);
}
inline int32_t System::Text::RegularExpressions::RegexParser::HexDigit(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "HexDigit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ch);
}
inline char16_t System::Text::RegularExpressions::RegexParser::ScanControl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::IsOnlyTopOption(::System::Text::RegularExpressions::RegexOptions option) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                                                         { "IsOnlyTopOption", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, option);
}
inline void System::Text::RegularExpressions::RegexParser::ScanOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexParser::ScanCharEscape() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ScanCharEscape", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline ::StringW System::Text::RegularExpressions::RegexParser::ParseProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "ParseProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexParser::TypeFromCode(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "TypeFromCode", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ch);
}
inline ::System::Text::RegularExpressions::RegexOptions System::Text::RegularExpressions::RegexParser::OptionFromCode(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "OptionFromCode", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexOptions>(nullptr, ___internal_method, ch);
}
inline void System::Text::RegularExpressions::RegexParser::CountCaptures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "CountCaptures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::NoteCaptureSlot(int32_t i, int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "NoteCaptureSlot", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, pos);
}
inline void System::Text::RegularExpressions::RegexParser::NoteCaptureName(::StringW name, int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "NoteCaptureName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, pos);
}
inline void System::Text::RegularExpressions::RegexParser::NoteCaptures(::System::Collections::Hashtable* caps, int32_t capsize, ::System::Collections::Hashtable* capnames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                          { "NoteCaptures", {}, { ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, caps, capsize, capnames);
}
inline void System::Text::RegularExpressions::RegexParser::AssignNameSlots() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AssignNameSlots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexParser::CaptureSlotFromName(::StringW capname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "CaptureSlotFromName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, capname);
}
inline bool System::Text::RegularExpressions::RegexParser::IsCaptureSlot(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsCaptureSlot", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline bool System::Text::RegularExpressions::RegexParser::IsCaptureName(::StringW capname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsCaptureName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, capname);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionN() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionN", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionM() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionM", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionX() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::UseOptionE() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "UseOptionE", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::IsSpecial(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsSpecial", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Text::RegularExpressions::RegexParser::IsStopperX(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsStopperX", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Text::RegularExpressions::RegexParser::IsQuantifier(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsQuantifier", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Text::RegularExpressions::RegexParser::IsTrueQuantifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsTrueQuantifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::IsSpace(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "IsSpace", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline void System::Text::RegularExpressions::RegexParser::AddConcatenate(int32_t pos, int32_t cch, bool isReplacement) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                                                         { "AddConcatenate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, cch, isReplacement);
}
inline void System::Text::RegularExpressions::RegexParser::PushGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "PushGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::PopGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "PopGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::EmptyStack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "EmptyStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::StartGroup(::System::Text::RegularExpressions::RegexNode* openGroup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                                                         { "StartGroup", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, openGroup);
}
inline void System::Text::RegularExpressions::RegexParser::AddAlternate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddAlternate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::AddConcatenate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddConcatenate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::AddConcatenate(bool lazy, int32_t min, int32_t max) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                                                         { "AddConcatenate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lazy, min, max);
}
inline ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexParser::Unit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "Unit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexNode*>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::AddUnitOne(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddUnitOne", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Text::RegularExpressions::RegexParser::AddUnitNotone(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddUnitNotone", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Text::RegularExpressions::RegexParser::AddUnitSet(::StringW cc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddUnitSet", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cc);
}
inline void System::Text::RegularExpressions::RegexParser::AddUnitNode(::System::Text::RegularExpressions::RegexNode* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(),
                                                                                         { "AddUnitNode", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Text::RegularExpressions::RegexParser::AddUnitType(int32_t type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddUnitType", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Text::RegularExpressions::RegexParser::AddGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "AddGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::PushOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "PushOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::PopOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "PopOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexParser::EmptyOptionsStack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "EmptyOptionsStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::PopKeepOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "PopKeepOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ArgumentException* System::Text::RegularExpressions::RegexParser::MakeException(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "MakeException", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentException*>(this, ___internal_method, message);
}
inline int32_t System::Text::RegularExpressions::RegexParser::Textpos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "Textpos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::Textto(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "Textto", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline char16_t System::Text::RegularExpressions::RegexParser::RightCharMoveRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "RightCharMoveRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::MoveRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "MoveRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexParser::MoveRight(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "MoveRight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void System::Text::RegularExpressions::RegexParser::MoveLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "MoveLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexParser::CharAt(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "CharAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, i);
}
inline char16_t System::Text::RegularExpressions::RegexParser::RightChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "RightChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexParser::RightChar(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "RightChar", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, i);
}
inline int32_t System::Text::RegularExpressions::RegexParser::CharsRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexParser*>(), { "CharsRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexParser* System::Text::RegularExpressions::RegexParser::New_ctor(::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::RegexParser*>(culture));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexParser::RegexParser() {}
