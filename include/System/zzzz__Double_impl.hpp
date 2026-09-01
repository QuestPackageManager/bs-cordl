#pragma once
// IWYU pragma private; include "System\Double.hpp"
#include "System/zzzz__Double_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Double.IsFinite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Double::IsFinite)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c2f140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsFinite", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.IsInfinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Double::IsInfinity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c2f154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsInfinity", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.IsNaN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Double::IsNaN)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c2f16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsNaN", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.IsNegative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Double::IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c2f184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsNegative", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.IsNegativeInfinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Double::IsNegativeInfinity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c2f190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsNegativeInfinity", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.IsPositiveInfinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Double::IsPositiveInfinity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c2f1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsPositiveInfinity", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Double::*)(::System::Object*)>(&::System::Double::CompareTo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c2f1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Double::*)(double_t)>(&::System::Double::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c2f27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "CompareTo", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Double::*)(::System::Object*)>(&::System::Double::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c2f2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Double>(), { ::i2c::class_of<::System::Double>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Double::*)(double_t)>(&::System::Double::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c2f340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "Equals", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Double::*)()>(&::System::Double::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c2f384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Double>(), { ::i2c::class_of<::System::Double>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Double::*)()>(&::System::Double::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c2f3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Double>(), { ::i2c::class_of<::System::Double>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Double::*)(::StringW)>(&::System::Double::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c2f424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "ToString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c2f4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Double::*)(::StringW, ::System::IFormatProvider*)>(&::System::Double::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c2f540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Double::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(
    &::System::Double::TryFormat)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c2f5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "TryFormat",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                         ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::StringW)>(&::System::Double::Parse)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c2f698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Double::Parse)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c2f74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*)>(&::System::Double::Parse)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c2f810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Double>(),
                                         { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<double_t>)>(&::System::Double::TryParse)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c2f8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*, ::by_ref<double_t>)>(&::System::Double::TryParse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c2fd2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "TryParse",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                                      ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<double_t>)>(&::System::Double::TryParse)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5c2f968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "TryParse",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                         ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.GetTypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (::System::Double::*)()>(&::System::Double::GetTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c2fdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "GetTypeCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c2fde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToBoolean", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c2fe48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToChar", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c2fecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToSByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c2ff34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c2ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c30004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToUInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c3006c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c300d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToUInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c3013c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c301a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToUInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c3020c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToSingle", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c30270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToDouble", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c30278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToDecimal", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Double::*)(::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c302e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToDateTime", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Double.System_IConvertible_ToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Double::*)(::System::Type*, ::System::IFormatProvider*)>(&::System::Double::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c30364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline bool System::Double::IsFinite(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsFinite", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline bool System::Double::IsInfinity(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsInfinity", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline bool System::Double::IsNaN(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsNaN", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline bool System::Double::IsNegative(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsNegative", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline bool System::Double::IsNegativeInfinity(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsNegativeInfinity", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline bool System::Double::IsPositiveInfinity(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "IsPositiveInfinity", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline int32_t System::Double::CompareTo(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Double::CompareTo(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "CompareTo", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Double::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Double>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Double::Equals(double_t obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "Equals", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::Double::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Double>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Double::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Double>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Double::ToString(::StringW format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "ToString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format);
}
inline ::StringW System::Double::ToString(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, provider);
}
inline ::StringW System::Double::ToString(::StringW format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, provider);
}
inline bool System::Double::TryFormat(::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "TryFormat",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                       ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, charsWritten, format, provider);
}
inline double_t System::Double::Parse(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, s);
}
inline double_t System::Double::Parse(::StringW s, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, s, provider);
}
inline double_t System::Double::Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Double>(),
                                       { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, s, style, provider);
}
inline bool System::Double::TryParse(::StringW s, ::by_ref<double_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, result);
}
inline bool System::Double::TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ::by_ref<double_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "TryParse",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                                    ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, style, provider, result);
}
inline bool System::Double::TryParse(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ::by_ref<double_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "TryParse",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                       ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, style, info, result);
}
inline ::System::TypeCode System::Double::GetTypeCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "GetTypeCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(*this, ___internal_method);
}
inline bool System::Double::System_IConvertible_ToBoolean(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToBoolean", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, provider);
}
inline char16_t System::Double::System_IConvertible_ToChar(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToChar", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method, provider);
}
inline int8_t System::Double::System_IConvertible_ToSByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToSByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(*this, ___internal_method, provider);
}
inline uint8_t System::Double::System_IConvertible_ToByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, provider);
}
inline int16_t System::Double::System_IConvertible_ToInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method, provider);
}
inline uint16_t System::Double::System_IConvertible_ToUInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToUInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, provider);
}
inline int32_t System::Double::System_IConvertible_ToInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, provider);
}
inline uint32_t System::Double::System_IConvertible_ToUInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToUInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, provider);
}
inline int64_t System::Double::System_IConvertible_ToInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, provider);
}
inline uint64_t System::Double::System_IConvertible_ToUInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToUInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, provider);
}
inline float_t System::Double::System_IConvertible_ToSingle(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToSingle", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, provider);
}
inline double_t System::Double::System_IConvertible_ToDouble(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToDouble", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, provider);
}
inline ::System::Decimal System::Double::System_IConvertible_ToDecimal(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToDecimal", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(*this, ___internal_method, provider);
}
inline ::System::DateTime System::Double::System_IConvertible_ToDateTime(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToDateTime", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, provider);
}
inline ::System::Object* System::Double::System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Double>(), { "System.IConvertible.ToType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, type, provider);
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Double::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Double::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IConvertible"
constexpr System::Double::operator ::System::IConvertible*() {
  return static_cast<::System::IConvertible*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* System::Double::i___System__IConvertible() {
  return static_cast<::System::IConvertible*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr System::Double::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::Double::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<double_t>"
constexpr System::Double::operator ::System::IComparable_1<double_t>*() {
  return static_cast<::System::IComparable_1<double_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<double_t>"
constexpr ::System::IComparable_1<double_t>* System::Double::i___System__IComparable_1_double_t_() {
  return static_cast<::System::IComparable_1<double_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<double_t>"
constexpr System::Double::operator ::System::IEquatable_1<double_t>*() {
  return static_cast<::System::IEquatable_1<double_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<double_t>"
constexpr ::System::IEquatable_1<double_t>* System::Double::i___System__IEquatable_1_double_t_() {
  return static_cast<::System::IEquatable_1<double_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::ISpanFormattable"
constexpr System::Double::operator ::System::ISpanFormattable*() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* System::Double::i___System__ISpanFormattable() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_value", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Double::Double(double_t m_value) noexcept {
  this->m_value = m_value;
}
// Ctor Parameters []
constexpr ::System::Double::Double() {}
