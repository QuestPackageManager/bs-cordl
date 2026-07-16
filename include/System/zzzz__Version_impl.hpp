#pragma once
// IWYU pragma private; include "System/Version.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Version._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Version::*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Version::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c65020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Version::*)(int32_t, int32_t, int32_t)>(&::System::Version::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5c65110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Version::*)(int32_t, int32_t)>(&::System::Version::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c651dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Version::*)(::StringW)>(&::System::Version::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c65280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Version::*)()>(&::System::Version::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c65348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Version::*)(::System::Version*)>(&::System::Version::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c65358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, { ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Version::*)()>(&::System::Version::Clone)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c65378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.get_Major
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Version::*)()>(&::System::Version::get_Major)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c653dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "get_Major", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.get_Minor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Version::*)()>(&::System::Version::get_Minor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c653e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "get_Minor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.get_Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Version::*)()>(&::System::Version::get_Build)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c653ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "get_Build", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.get_Revision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Version::*)()>(&::System::Version::get_Revision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c653f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "get_Revision", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Version::*)(::System::Object*)>(&::System::Version::CompareTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c653fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Version::*)(::System::Version*)>(&::System::Version::CompareTo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c654d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Version::*)(::System::Object*)>(&::System::Version::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c65540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Version*>(), { ::i2c::class_of<::System::Version*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Version::*)(::System::Version*)>(&::System::Version::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c655b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "Equals", {}, { ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Version::*)()>(&::System::Version::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c65610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Version*>(), { ::i2c::class_of<::System::Version*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Version::*)()>(&::System::Version::ToString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c65650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Version*>(), { ::i2c::class_of<::System::Version*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Version::*)(int32_t)>(&::System::Version::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c656a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Version::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Version::TryFormat)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c65918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "TryFormat", {}, { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Version::*)(::System::Span_1<char16_t>, int32_t, ::by_ref<int32_t>)>(&::System::Version::TryFormat)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c65944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(),
                                                             { "TryFormat", {}, { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.System_ISpanFormattable_TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Version::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(
    &::System::Version::System_ISpanFormattable_TryFormat)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c65a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "System.ISpanFormattable.TryFormat",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                           ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.get_DefaultFormatFieldCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Version::*)()>(&::System::Version::get_DefaultFormatFieldCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c65678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "get_DefaultFormatFieldCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.ToCachedStringBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::Version::*)(int32_t)>(&::System::Version::ToCachedStringBuilder)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5c656e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "ToCachedStringBuilder", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)(::StringW)>(&::System::Version::Parse)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c652b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Version*>)>(&::System::Version::TryParse)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c65f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Version*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.ParseVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::Version::ParseVersion)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x5c65a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "ParseVersion", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.TryParseComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::StringW, bool, ::by_ref<int32_t>)>(&::System::Version::TryParseComponent)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c65fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Version*>(),
            { "TryParseComponent", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Version*, ::System::Version*)>(&::System::Version::op_Equality)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c654c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Version*, ::System::Version*)>(&::System::Version::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c65f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Version*, ::System::Version*)>(&::System::Version::op_LessThan)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c660e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_LessThan", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Version*, ::System::Version*)>(&::System::Version::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c66140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Version*, ::System::Version*)>(&::System::Version::op_GreaterThan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c661a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_GreaterThan", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Version.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Version*, ::System::Version*)>(&::System::Version::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c661b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Version::__cordl_internal_get__Major() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Major;
}
constexpr int32_t const& System::Version::__cordl_internal_get__Major() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Major;
}
constexpr void System::Version::__cordl_internal_set__Major(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Major = value;
}
constexpr int32_t& System::Version::__cordl_internal_get__Minor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Minor;
}
constexpr int32_t const& System::Version::__cordl_internal_get__Minor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Minor;
}
constexpr void System::Version::__cordl_internal_set__Minor(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Minor = value;
}
constexpr int32_t& System::Version::__cordl_internal_get__Build() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Build;
}
constexpr int32_t const& System::Version::__cordl_internal_get__Build() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Build;
}
constexpr void System::Version::__cordl_internal_set__Build(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Build = value;
}
constexpr int32_t& System::Version::__cordl_internal_get__Revision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Revision;
}
constexpr int32_t const& System::Version::__cordl_internal_get__Revision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Revision;
}
constexpr void System::Version::__cordl_internal_set__Revision(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Revision = value;
}
inline void System::Version::_ctor(int32_t major, int32_t minor, int32_t build, int32_t revision) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, major, minor, build, revision);
}
inline void System::Version::_ctor(int32_t major, int32_t minor, int32_t build) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, major, minor, build);
}
inline void System::Version::_ctor(int32_t major, int32_t minor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, major, minor);
}
inline void System::Version::_ctor(::StringW version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline void System::Version::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Version::_ctor(::System::Version* version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { ".ctor", {}, { ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline ::System::Object* System::Version::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Version::get_Major() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "get_Major", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Version::get_Minor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "get_Minor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Version::get_Build() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "get_Build", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Version::get_Revision() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "get_Revision", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Version::CompareTo(::System::Object* version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, version);
}
inline int32_t System::Version::CompareTo(::System::Version* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline bool System::Version::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Version*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::Version::Equals(::System::Version* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "Equals", {}, { ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Version::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Version*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Version::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Version*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Version::ToString(int32_t fieldCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, fieldCount);
}
inline bool System::Version::TryFormat(::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "TryFormat", {}, { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, charsWritten);
}
inline bool System::Version::TryFormat(::System::Span_1<char16_t> destination, int32_t fieldCount, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(),
                                                           { "TryFormat", {}, { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, fieldCount, charsWritten);
}
inline bool System::Version::System_ISpanFormattable_TryFormat(::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                                                               ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "System.ISpanFormattable.TryFormat",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                         ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, charsWritten, format, provider);
}
inline int32_t System::Version::get_DefaultFormatFieldCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "get_DefaultFormatFieldCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* System::Version::ToCachedStringBuilder(int32_t fieldCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "ToCachedStringBuilder", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, fieldCount);
}
inline ::System::Version* System::Version::Parse(::StringW input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method, input);
}
inline bool System::Version::TryParse(::StringW input, ::by_ref<::System::Version*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Version*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
inline ::System::Version* System::Version::ParseVersion(::System::ReadOnlySpan_1<char16_t> input, bool throwOnFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "ParseVersion", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method, input, throwOnFailure);
}
inline bool System::Version::TryParseComponent(::System::ReadOnlySpan_1<char16_t> component, ::StringW componentName, bool throwOnFailure, ::by_ref<int32_t> parsedComponent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Version*>(),
          { "TryParseComponent", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, component, componentName, throwOnFailure, parsedComponent);
}
inline bool System::Version::op_Equality(::System::Version* v1, ::System::Version* v2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v1, v2);
}
inline bool System::Version::op_Inequality(::System::Version* v1, ::System::Version* v2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v1, v2);
}
inline bool System::Version::op_LessThan(::System::Version* v1, ::System::Version* v2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_LessThan", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v1, v2);
}
inline bool System::Version::op_LessThanOrEqual(::System::Version* v1, ::System::Version* v2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v1, v2);
}
inline bool System::Version::op_GreaterThan(::System::Version* v1, ::System::Version* v2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_GreaterThan", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v1, v2);
}
inline bool System::Version::op_GreaterThanOrEqual(::System::Version* v1, ::System::Version* v2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Version*>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v1, v2);
}
inline ::System::Version* System::Version::New_ctor(int32_t major, int32_t minor, int32_t build, int32_t revision) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Version*>(major, minor, build, revision));
}
inline ::System::Version* System::Version::New_ctor(int32_t major, int32_t minor, int32_t build) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Version*>(major, minor, build));
}
inline ::System::Version* System::Version::New_ctor(int32_t major, int32_t minor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Version*>(major, minor));
}
inline ::System::Version* System::Version::New_ctor(::StringW version) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Version*>(version));
}
inline ::System::Version* System::Version::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Version*>());
}
inline ::System::Version* System::Version::New_ctor(::System::Version* version) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Version*>(version));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Version::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Version::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Version::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Version::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::System::Version*>"
constexpr System::Version::operator ::System::IComparable_1<::System::Version*>*() noexcept {
  return static_cast<::System::IComparable_1<::System::Version*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::System::Version*>"
constexpr ::System::IComparable_1<::System::Version*>* System::Version::i___System__IComparable_1___System__Version__() noexcept {
  return static_cast<::System::IComparable_1<::System::Version*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Version*>"
constexpr System::Version::operator ::System::IEquatable_1<::System::Version*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::Version*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::Version*>"
constexpr ::System::IEquatable_1<::System::Version*>* System::Version::i___System__IEquatable_1___System__Version__() noexcept {
  return static_cast<::System::IEquatable_1<::System::Version*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ISpanFormattable"
constexpr System::Version::operator ::System::ISpanFormattable*() noexcept {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* System::Version::i___System__ISpanFormattable() noexcept {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Version::Version() {}
