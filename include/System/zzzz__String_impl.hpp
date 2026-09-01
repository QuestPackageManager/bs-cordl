#pragma once
// IWYU pragma private; include "System\String.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__String_def.hpp"
#include "System/Buffers/zzzz__SpanAction_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__ValueListBuilder_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__NormalizationForm_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ParamsArray_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
#include "System/zzzz__StringSplitOptions_def.hpp"
#include "System/zzzz__String_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::String_TrimType::String_TrimType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::String_TrimType::String_TrimType() {}
constexpr ::System::String_TrimType System::String_TrimType::Head{ static_cast<int32_t>(0x0) };
constexpr ::System::String_TrimType System::String_TrimType::Tail{ static_cast<int32_t>(0x1) };
constexpr ::System::String_TrimType System::String_TrimType::Both{ static_cast<int32_t>(0x2) };
// Ctor Parameters []
constexpr ::System::String_ProbabilisticMap::String_ProbabilisticMap() {}
//  Writing Method size for method: ::System::String.EqualsHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::String::EqualsHelper)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ac7c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "EqualsHelper", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareOrdinalHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t)>(&::System::String::CompareOrdinalHelper)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ac7c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CompareOrdinalHelper",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                       ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareOrdinalHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::System::String::CompareOrdinalHelper)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5ac7cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CompareOrdinalHelper", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, bool)>(&::System::String::Compare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac7e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, ::System::StringComparison)>(&::System::String::Compare)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5ac7e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, ::System::Globalization::CultureInfo*, ::System::Globalization::CompareOptions)>(&::System::String::Compare)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ac8120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Compare",
                                                                                 {},
                                                                                 { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                                                                   ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, bool, ::System::Globalization::CultureInfo*)>(&::System::String::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ac81b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(),
                            { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, ::StringW, int32_t, int32_t)>(&::System::String::Compare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac81c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(),
                            { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, ::StringW, int32_t, int32_t, bool)>(&::System::String::Compare)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5ac81d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::String*>(),
            { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, ::StringW, int32_t, int32_t, ::System::StringComparison)>(&::System::String::Compare)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5ac8308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Compare",
                                                                                        {},
                                                                                        { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::System::String::CompareOrdinal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ac8730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CompareOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::String::CompareOrdinal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ac8774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { "CompareOrdinal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, ::StringW, int32_t, int32_t)>(&::System::String::CompareOrdinal)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5ac87f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(),
                            { "CompareOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::System::Object*)>(&::System::String::CompareTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ac89d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW)>(&::System::String::CompareTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac8a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CompareTo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.EndsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::StringW)>(&::System::String::EndsWith)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac8a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "EndsWith", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.EndsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::StringW, ::System::StringComparison)>(&::System::String::EndsWith)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5ac8a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "EndsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.EndsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(char16_t)>(&::System::String::EndsWith)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ac8d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "EndsWith", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::System::Object*)>(&::System::String::Equals)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ac8d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::String*>(), { ::i2c::class_of<::System::String*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::StringW)>(&::System::String::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ac8db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::StringW, ::System::StringComparison)>(&::System::String::Equals)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5ac8df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Equals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::String::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ac9080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Equals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::StringComparison)>(&::System::String::Equals)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5ac90cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Equals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::String::op_Equality)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ac9360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "op_Equality", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::String::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ac9364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "op_Inequality", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)()>(&::System::String::GetHashCode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ac937c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::String*>(), { ::i2c::class_of<::System::String*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.GetLegacyNonRandomizedHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)()>(&::System::String::GetLegacyNonRandomizedHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ac9380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "GetLegacyNonRandomizedHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.StartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::StringW)>(&::System::String::StartsWith)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ac93d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "StartsWith", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.StartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::StringW, ::System::StringComparison)>(&::System::String::StartsWith)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5ac9428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.StartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::StringW, bool, ::System::Globalization::CultureInfo*)>(&::System::String::StartsWith)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ac9704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                             { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.StartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(char16_t)>(&::System::String::StartsWith)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ac9820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "StartsWith", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CheckStringComparison
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::StringComparison)>(&::System::String::CheckStringComparison)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ac8100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CheckStringComparison", {}, { ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(::ArrayW<char16_t>)>(&::System::String::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac9840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<char16_t>)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ac9848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::String::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac98f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5ac98fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(char16_t*, int32_t, int32_t)>(&::System::String::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac9aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t*, int32_t, int32_t)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ac9aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(int8_t*, int32_t, int32_t)>(&::System::String::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac9c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int8_t*, int32_t, int32_t)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ac9c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateStringForSByteConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t*, int32_t)>(&::System::String::CreateStringForSByteConstructor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ac9d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateStringForSByteConstructor", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(int8_t*, int32_t, int32_t, ::System::Text::Encoding*)>(&::System::String::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac9db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { ".ctor", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int8_t*, int32_t, int32_t, ::System::Text::Encoding*)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5ac9dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { "Ctor", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(char16_t, int32_t)>(&::System::String::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac9f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t, int32_t)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ac9f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::String::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aca080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5aca088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.op_Implicit___System__ReadOnlySpan_1_char16_t_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::StringW)>(&::System::String::op_Implicit___System__ReadOnlySpan_1_char16_t_)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5aca14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::String::*)()>(&::System::String::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aca1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::String::Copy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5aca1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Copy", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(int32_t, ::ArrayW<char16_t>, int32_t, int32_t)>(&::System::String::CopyTo)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5aca258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { "CopyTo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToCharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::System::String::*)()>(&::System::String::ToCharArray)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5aca400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToCharArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IsNullOrEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::String::IsNullOrEmpty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5aca518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IsNullOrEmpty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IsNullOrWhiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::String::IsNullOrWhiteSpace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5aca534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IsNullOrWhiteSpace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.GetRawStringData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<char16_t> (::System::String::*)()>(&::System::String::GetRawStringData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac7c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "GetRawStringData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateStringFromEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t*, int32_t, ::System::Text::Encoding*)>(&::System::String::CreateStringFromEncoding)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5aca5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { "CreateStringFromEncoding", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateFromChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t)>(&::System::String::CreateFromChar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5aca65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateFromChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.wstrcpy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(char16_t*, char16_t*, int32_t)>(&::System::String::wstrcpy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ac98d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "wstrcpy", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)()>(&::System::String::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aca680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::String*>(), { ::i2c::class_of<::System::String*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::System::IFormatProvider*)>(&::System::String::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aca684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_Collections_Generic_IEnumerable_System_Char__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>* (::System::String::*)()>(
    &::System::String::System_Collections_Generic_IEnumerable_System_Char__GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5aca688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::String::*)()>(&::System::String::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5aca6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.wcslen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*)>(&::System::String::wcslen)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5aca738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "wcslen", {}, { ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.GetTypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (::System::String::*)()>(&::System::String::GetTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aca834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "GetTypeCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5aca83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToBoolean", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5aca8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToChar", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5aca914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToSByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5aca984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5acaa0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5acaa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToUInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5acab24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5acabb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToUInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5acac3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5acacc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToUInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5acad54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToSingle", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5acade0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToDouble", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5acae6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToDecimal", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::String::*)(::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5acaed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToDateTime", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::String::*)(::System::Type*, ::System::IFormatProvider*)>(&::System::String::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5acaf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Normalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::System::Text::NormalizationForm)>(&::System::String::Normalize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5acafb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Normalize", {}, { ::i2c::type_of<::System::Text::NormalizationForm>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.FillStringChecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, ::StringW)>(&::System::String::FillStringChecked)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5acb024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { "FillStringChecked", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Object*)>(&::System::String::Concat)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5acb0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Object*, ::System::Object*)>(&::System::String::Concat)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5acb134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                             { "Concat", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::System::Object*>)>(&::System::String::Concat)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5acb2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::System::String::Concat)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x5acb4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::String::Concat)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ac0a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::System::String::Concat)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5acb1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::String::Concat)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5acb964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { "Concat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&::System::String::Concat)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5acba6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Object*)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ac15f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Object*, ::System::Object*)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5acbd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5acbda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(),
                            { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5acbde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IFormatProvider*, ::StringW, ::System::Object*)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5acbeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                             { "Format", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IFormatProvider*, ::StringW, ::System::Object*, ::System::Object*)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5acbefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::String*>(),
                         { "Format", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IFormatProvider*, ::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5acbf4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Format",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                   ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IFormatProvider*, ::StringW, ::ArrayW<::System::Object*>)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5acbfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { "Format", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.FormatHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IFormatProvider*, ::StringW, ::System::ParamsArray)>(&::System::String::FormatHelper)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5acbc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { "FormatHelper", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ParamsArray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t, ::StringW)>(&::System::String::Insert)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5acc060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t, ::ArrayW<::StringW>)>(&::System::String::Join)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5acc20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Join", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t, ::ArrayW<::StringW>, int32_t, int32_t)>(&::System::String::Join)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5acc288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { "Join", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::StringW>)>(&::System::String::Join)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5acc674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Join", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::System::String::Join)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5acc708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Join", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::System::String::Join)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x5acc8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Join", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::StringW>, int32_t, int32_t)>(&::System::String::Join)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5acc6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { "Join", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.JoinCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t*, int32_t, ::ArrayW<::System::Object*>)>(&::System::String::JoinCore)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5acc738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "JoinCore", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.JoinCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t*, int32_t, ::ArrayW<::StringW>, int32_t, int32_t)>(&::System::String::JoinCore)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5acc2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::String*>(),
                         { "JoinCore", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.PadLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t)>(&::System::String::PadLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5accd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "PadLeft", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.PadLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t, char16_t)>(&::System::String::PadLeft)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5accda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "PadLeft", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.PadRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t, char16_t)>(&::System::String::PadRight)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5accfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "PadRight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t, int32_t)>(&::System::String::Remove)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5acd1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t)>(&::System::String::Remove)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5acd3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Remove", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Replace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(char16_t, char16_t)>(&::System::String::Replace)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5acd5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Replace", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Replace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::StringW, ::StringW)>(&::System::String::Replace)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5acd6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ReplaceHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t, ::StringW, ::System::ReadOnlySpan_1<int32_t>)>(&::System::String::ReplaceHelper)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5acd9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                { "ReplaceHelper", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(char16_t, ::System::StringSplitOptions)>(&::System::String::Split)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5acdd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(::ArrayW<char16_t>)>(&::System::String::Split)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ace0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(::ArrayW<char16_t>, int32_t)>(&::System::String::Split)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ace158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(::ArrayW<char16_t>, ::System::StringSplitOptions)>(&::System::String::Split)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ace1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SplitInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(::System::ReadOnlySpan_1<char16_t>, int32_t, ::System::StringSplitOptions)>(
    &::System::String::SplitInternal)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5acdd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(),
                            { "SplitInternal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(::StringW, ::System::StringSplitOptions)>(&::System::String::Split)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5aceb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(::ArrayW<::StringW>, ::System::StringSplitOptions)>(&::System::String::Split)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5acefac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SplitInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(::StringW, ::ArrayW<::StringW>, int32_t, ::System::StringSplitOptions)>(
    &::System::String::SplitInternal)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5aceb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::String*>(),
                         { "SplitInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SplitInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(::StringW, int32_t, ::System::StringSplitOptions)>(&::System::String::SplitInternal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5acefc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                             { "SplitInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SplitKeepEmptyEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(::System::ReadOnlySpan_1<int32_t>, ::System::ReadOnlySpan_1<int32_t>, int32_t, int32_t)>(
    &::System::String::SplitKeepEmptyEntries)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5ace6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "SplitKeepEmptyEntries",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(),
                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SplitOmitEmptyEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::String::*)(::System::ReadOnlySpan_1<int32_t>, ::System::ReadOnlySpan_1<int32_t>, int32_t, int32_t)>(
    &::System::String::SplitOmitEmptyEntries)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5ace8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "SplitOmitEmptyEntries",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(),
                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.MakeSeparatorList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>)>(
    &::System::String::MakeSeparatorList)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x5ace250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::String*>(),
            { "MakeSeparatorList", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.MakeSeparatorList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(::StringW, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>)>(
    &::System::String::MakeSeparatorList)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5acf4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                         { "MakeSeparatorList", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.MakeSeparatorList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::String::*)(::ArrayW<::StringW>, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>,
                                                                                  ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>)>(&::System::String::MakeSeparatorList)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5acf1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "MakeSeparatorList",
                                                                    {},
                                                                    { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>>(),
                                                                      ::i2c::type_of<::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Substring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t)>(&::System::String::Substring)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5acf764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Substring", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Substring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t, int32_t)>(&::System::String::Substring)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5acd47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Substring", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.InternalSubString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t, int32_t)>(&::System::String::InternalSubString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5acf868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "InternalSubString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToLower
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)()>(&::System::String::ToLower)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5acf8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToLower", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToLower
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::System::Globalization::CultureInfo*)>(&::System::String::ToLower)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5acf95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToLower", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToLowerInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)()>(&::System::String::ToLowerInvariant)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5acf9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToLowerInvariant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToUpper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)()>(&::System::String::ToUpper)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5acfa60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToUpper", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToUpper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::System::Globalization::CultureInfo*)>(&::System::String::ToUpper)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5acfae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToUpper", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToUpperInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)()>(&::System::String::ToUpperInvariant)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5acfb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToUpperInvariant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)()>(&::System::String::Trim)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5acfbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Trim", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(char16_t)>(&::System::String::Trim)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5acfcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Trim", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::ArrayW<char16_t>)>(&::System::String::Trim)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5acfe2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Trim", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)()>(&::System::String::TrimStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5acfe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(char16_t)>(&::System::String::TrimStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5acfe60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimStart", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::ArrayW<char16_t>)>(&::System::String::TrimStart)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5acfe80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimStart", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)()>(&::System::String::TrimEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5acfeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(char16_t)>(&::System::String::TrimEnd)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5acfeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimEnd", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::ArrayW<char16_t>)>(&::System::String::TrimEnd)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5acfed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimEnd", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimWhiteSpaceHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::System::String_TrimType)>(&::System::String::TrimWhiteSpaceHelper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5acfbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimWhiteSpaceHelper", {}, { ::i2c::type_of<::System::String_TrimType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(char16_t*, int32_t, ::System::String_TrimType)>(&::System::String::TrimHelper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5acfd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimHelper", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::String_TrimType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateTrimmedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int32_t, int32_t)>(&::System::String::CreateTrimmedString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5acff00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateTrimmedString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::StringW)>(&::System::String::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5acff30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::StringW, ::System::StringComparison)>(&::System::String::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5acff64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(char16_t)>(&::System::String::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5acff88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Contains", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(char16_t, ::System::StringComparison)>(&::System::String::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5acffbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Contains", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(char16_t)>(&::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5acffac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(char16_t, int32_t)>(&::System::String::IndexOf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad0214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(char16_t, ::System::StringComparison)>(&::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5acffd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(char16_t, int32_t, int32_t)>(&::System::String::IndexOf)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ad0220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::ArrayW<char16_t>)>(&::System::String::IndexOfAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad02f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::ArrayW<char16_t>, int32_t)>(&::System::String::IndexOfAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad04d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::String::IndexOfAny)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5ad0304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(char16_t, char16_t, int32_t, int32_t)>(&::System::String::IndexOfAny)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ad04dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                             { "IndexOfAny", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(char16_t, char16_t, char16_t, int32_t, int32_t)>(&::System::String::IndexOfAny)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ad0568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(),
                            { "IndexOfAny", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfCharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::String::IndexOfCharArray)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ad05cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfCharArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.InitializeProbabilisticMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, ::System::ReadOnlySpan_1<char16_t>)>(&::System::String::InitializeProbabilisticMap)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5acf770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "InitializeProbabilisticMap", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ArrayContains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, ::ArrayW<char16_t>)>(&::System::String::ArrayContains)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ad06f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ArrayContains", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IsCharBitSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t*, uint8_t)>(&::System::String::IsCharBitSet)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5acf850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IsCharBitSet", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SetCharBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint8_t)>(&::System::String::SetCharBit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ad0764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "SetCharBit", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW)>(&::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad0784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW, int32_t)>(&::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad0794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW, ::System::StringComparison)>(&::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5acff54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW, int32_t, ::System::StringComparison)>(&::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad07a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t, ::System::StringComparison)>(&::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5ad07b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                         { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(char16_t)>(&::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad0b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOf", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(char16_t, int32_t)>(&::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad0b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(char16_t, int32_t, int32_t)>(&::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ad0b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::ArrayW<char16_t>)>(&::System::String::LastIndexOfAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad0c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::ArrayW<char16_t>, int32_t)>(&::System::String::LastIndexOfAny)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad0d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::String::LastIndexOfAny)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5ad0c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfCharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::String::LastIndexOfCharArray)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ad0d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfCharArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW)>(&::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad0e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOf", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW, ::System::StringComparison)>(&::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad122c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t, ::System::StringComparison)>(&::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5ad0e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                         { "LastIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)()>(&::System::String::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad123c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t)>(&::System::String::IndexOfUnchecked)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ad1244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfUnchecked", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfUncheckedIgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t)>(&::System::String::IndexOfUncheckedIgnoreCase)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5ad1320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfUncheckedIgnoreCase", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t)>(&::System::String::LastIndexOfUnchecked)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ad14e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfUnchecked", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfUncheckedIgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t)>(&::System::String::LastIndexOfUncheckedIgnoreCase)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5ad159c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfUncheckedIgnoreCase", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.StartsWithOrdinalUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::String::*)(::StringW)>(&::System::String::StartsWithOrdinalUnchecked)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ad1734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "StartsWithOrdinalUnchecked", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.FastAllocateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::String::FastAllocateString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ac98d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "FastAllocateString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.InternalIsInterned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::String::InternalIsInterned)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ad1784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "InternalIsInterned", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.InternalIntern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::String::InternalIntern)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ad1788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "InternalIntern", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t, int32_t)>(&::System::String::memset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ad178c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memset", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memcpy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::String::memcpy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad184c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memcpy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._cordl_bzero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t)>(&::System::String::_cordl_bzero)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad1854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "bzero", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.bzero_aligned_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t)>(&::System::String::bzero_aligned_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad1860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "bzero_aligned_1", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.bzero_aligned_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t)>(&::System::String::bzero_aligned_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad1868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "bzero_aligned_2", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.bzero_aligned_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t)>(&::System::String::bzero_aligned_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad1870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "bzero_aligned_4", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.bzero_aligned_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t)>(&::System::String::bzero_aligned_8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad1878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "bzero_aligned_8", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memcpy_aligned_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::String::memcpy_aligned_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad1880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memcpy_aligned_1", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memcpy_aligned_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::String::memcpy_aligned_2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad188c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memcpy_aligned_2", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memcpy_aligned_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::String::memcpy_aligned_4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad1898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memcpy_aligned_4", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memcpy_aligned_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::String::memcpy_aligned_8)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad18a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memcpy_aligned_8", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int8_t*, int32_t, int32_t)>(&::System::String::CreateString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ac9f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(char16_t*, int32_t, int32_t)>(&::System::String::CreateString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad18b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::String::CreateString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad18c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::ArrayW<char16_t>)>(&::System::String::CreateString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac7c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(char16_t, int32_t)>(&::System::String::CreateString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad18d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(int8_t*, int32_t, int32_t, ::System::Text::Encoding*)>(&::System::String::CreateString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ad18dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                         { "CreateString", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::String::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::String::CreateString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad18f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.get_Chars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::String::*)(int32_t)>(&::System::String::get_Chars)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ac505c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "get_Chars", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Intern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::String::Intern)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ad18fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Intern", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IsInterned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::String::IsInterned)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5ad1950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IsInterned", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::String::__cordl_internal_get__stringLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringLength;
}
constexpr int32_t const& System::String::__cordl_internal_get__stringLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringLength;
}
constexpr void System::String::__cordl_internal_set__stringLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stringLength = value;
}
constexpr char16_t& System::String::__cordl_internal_get__firstChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstChar;
}
constexpr char16_t const& System::String::__cordl_internal_get__firstChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstChar;
}
constexpr void System::String::__cordl_internal_set__firstChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstChar = value;
}
inline void System::String::setStaticF_Empty(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Empty", ::System::String*>(std::forward<::StringW>(value));
}
inline ::StringW System::String::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::StringW, "Empty", ::System::String*>();
}
inline bool System::String::EqualsHelper(::StringW strA, ::StringW strB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "EqualsHelper", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, strA, strB);
}
inline int32_t System::String::CompareOrdinalHelper(::StringW strA, int32_t indexA, int32_t countA, ::StringW strB, int32_t indexB, int32_t countB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CompareOrdinalHelper",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, indexA, countA, strB, indexB, countB);
}
inline int32_t System::String::CompareOrdinalHelper(::StringW strA, ::StringW strB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CompareOrdinalHelper", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, strB);
}
inline int32_t System::String::Compare(::StringW strA, ::StringW strB, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, strB, ignoreCase);
}
inline int32_t System::String::Compare(::StringW strA, ::StringW strB, ::System::StringComparison comparisonType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, strB, comparisonType);
}
inline int32_t System::String::Compare(::StringW strA, ::StringW strB, ::System::Globalization::CultureInfo* culture, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Compare",
                                                                               {},
                                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                                                                 ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, strB, culture, options);
}
inline int32_t System::String::Compare(::StringW strA, ::StringW strB, bool ignoreCase, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(),
                          { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, strB, ignoreCase, culture);
}
inline int32_t System::String::Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(),
                          { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, indexA, strB, indexB, length);
}
inline int32_t System::String::Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::String*>(),
          { "Compare", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, indexA, strB, indexB, length, ignoreCase);
}
inline int32_t System::String::Compare(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length, ::System::StringComparison comparisonType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Compare",
                                                                                      {},
                                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, indexA, strB, indexB, length, comparisonType);
}
inline int32_t System::String::CompareOrdinal(::StringW strA, ::StringW strB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CompareOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, strB);
}
inline int32_t System::String::CompareOrdinal(::System::ReadOnlySpan_1<char16_t> strA, ::System::ReadOnlySpan_1<char16_t> strB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                           { "CompareOrdinal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, strB);
}
inline int32_t System::String::CompareOrdinal(::StringW strA, int32_t indexA, ::StringW strB, int32_t indexB, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(),
                          { "CompareOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, indexA, strB, indexB, length);
}
inline int32_t System::String::CompareTo(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::String::CompareTo(::StringW strB) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CompareTo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, strB);
}
inline bool System::String::EndsWith(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "EndsWith", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::String::EndsWith(::StringW value, ::System::StringComparison comparisonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "EndsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, comparisonType);
}
inline bool System::String::EndsWith(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "EndsWith", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::String::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::String*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::String::Equals(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::String::Equals(::StringW value, ::System::StringComparison comparisonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Equals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, comparisonType);
}
inline bool System::String::Equals(::StringW a, ::StringW b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Equals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool System::String::Equals(::StringW a, ::StringW b, ::System::StringComparison comparisonType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Equals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, comparisonType);
}
inline bool System::String::op_Equality(::StringW a, ::StringW b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "op_Equality", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool System::String::op_Inequality(::StringW a, ::StringW b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "op_Inequality", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t System::String::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::String*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::String::GetLegacyNonRandomizedHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "GetLegacyNonRandomizedHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::String::StartsWith(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "StartsWith", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::String::StartsWith(::StringW value, ::System::StringComparison comparisonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, comparisonType);
}
inline bool System::String::StartsWith(::StringW value, bool ignoreCase, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                           { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, ignoreCase, culture);
}
inline bool System::String::StartsWith(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "StartsWith", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void System::String::CheckStringComparison(::System::StringComparison comparisonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CheckStringComparison", {}, { ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, comparisonType);
}
inline void System::String::_ctor(::ArrayW<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::String::Ctor(::ArrayW<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline void System::String::_ctor(::ArrayW<char16_t> value, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, startIndex, length);
}
inline ::StringW System::String::Ctor(::ArrayW<char16_t> value, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, startIndex, length);
}
inline void System::String::_ctor(char16_t* value, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, startIndex, length);
}
inline ::StringW System::String::Ctor(char16_t* ptr, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ptr, startIndex, length);
}
inline void System::String::_ctor(int8_t* value, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, startIndex, length);
}
inline ::StringW System::String::Ctor(int8_t* value, int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, startIndex, length);
}
inline ::StringW System::String::CreateStringForSByteConstructor(uint8_t* pb, int32_t numBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateStringForSByteConstructor", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pb, numBytes);
}
inline void System::String::_ctor(int8_t* value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { ".ctor", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, startIndex, length, enc);
}
inline ::StringW System::String::Ctor(int8_t* value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { "Ctor", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, startIndex, length, enc);
}
inline void System::String::_ctor(char16_t c, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, count);
}
inline ::StringW System::String::Ctor(char16_t c, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, c, count);
}
inline void System::String::_ctor(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { ".ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::String::Ctor(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Ctor", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
template <typename TState> inline ::StringW System::String::Create(int32_t length, TState state, ::System::Buffers::SpanAction_2<char16_t, TState>* action) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(),
                          { "Create", { ::i2c::class_of<TState>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TState>(), ::i2c::type_of<::System::Buffers::SpanAction_2<char16_t, TState>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, length, state, action);
}
inline ::System::ReadOnlySpan_1<char16_t> System::String::op_Implicit___System__ReadOnlySpan_1_char16_t_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, value);
}
inline ::System::Object* System::String::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW System::String::Copy(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Copy", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline void System::String::CopyTo(int32_t sourceIndex, ::ArrayW<char16_t> destination, int32_t destinationIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { "CopyTo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceIndex, destination, destinationIndex, count);
}
inline ::ArrayW<char16_t> System::String::ToCharArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToCharArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method);
}
inline bool System::String::IsNullOrEmpty(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IsNullOrEmpty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::String::IsNullOrWhiteSpace(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IsNullOrWhiteSpace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::by_ref<char16_t> System::String::GetRawStringData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "GetRawStringData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<char16_t>>(this, ___internal_method);
}
inline ::StringW System::String::CreateStringFromEncoding(uint8_t* bytes, int32_t byteLength, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { "CreateStringFromEncoding", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes, byteLength, encoding);
}
inline ::StringW System::String::CreateFromChar(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateFromChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, c);
}
inline void System::String::wstrcpy(char16_t* dmem, char16_t* smem, int32_t charCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "wstrcpy", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dmem, smem, charCount);
}
inline ::StringW System::String::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::String*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::String::ToString(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, provider);
}
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* System::String::System_Collections_Generic_IEnumerable_System_Char__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<char16_t>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::String::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t System::String::wcslen(char16_t* ptr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "wcslen", {}, { ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr);
}
inline ::System::TypeCode System::String::GetTypeCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "GetTypeCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(this, ___internal_method);
}
inline bool System::String::System_IConvertible_ToBoolean(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToBoolean", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, provider);
}
inline char16_t System::String::System_IConvertible_ToChar(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToChar", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, provider);
}
inline int8_t System::String::System_IConvertible_ToSByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToSByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method, provider);
}
inline uint8_t System::String::System_IConvertible_ToByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, provider);
}
inline int16_t System::String::System_IConvertible_ToInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, provider);
}
inline uint16_t System::String::System_IConvertible_ToUInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToUInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, provider);
}
inline int32_t System::String::System_IConvertible_ToInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, provider);
}
inline uint32_t System::String::System_IConvertible_ToUInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToUInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, provider);
}
inline int64_t System::String::System_IConvertible_ToInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, provider);
}
inline uint64_t System::String::System_IConvertible_ToUInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToUInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, provider);
}
inline float_t System::String::System_IConvertible_ToSingle(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToSingle", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, provider);
}
inline double_t System::String::System_IConvertible_ToDouble(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToDouble", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, provider);
}
inline ::System::Decimal System::String::System_IConvertible_ToDecimal(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToDecimal", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method, provider);
}
inline ::System::DateTime System::String::System_IConvertible_ToDateTime(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToDateTime", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, provider);
}
inline ::System::Object* System::String::System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "System.IConvertible.ToType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, provider);
}
inline ::StringW System::String::Normalize(::System::Text::NormalizationForm normalizationForm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Normalize", {}, { ::i2c::type_of<::System::Text::NormalizationForm>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, normalizationForm);
}
inline void System::String::FillStringChecked(::StringW dest, int32_t destPos, ::StringW src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(), { "FillStringChecked", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destPos, src);
}
inline ::StringW System::String::Concat(::System::Object* arg0, ::System::Object* arg1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, arg0, arg1);
}
inline ::StringW System::String::Concat(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, arg0, arg1, arg2);
}
inline ::StringW System::String::Concat(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, args);
}
inline ::StringW System::String::Concat(::System::Collections::Generic::IEnumerable_1<::StringW>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, values);
}
inline ::StringW System::String::Concat(::StringW str0, ::StringW str1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str0, str1);
}
inline ::StringW System::String::Concat(::StringW str0, ::StringW str1, ::StringW str2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str0, str1, str2);
}
inline ::StringW System::String::Concat(::StringW str0, ::StringW str1, ::StringW str2, ::StringW str3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                           { "Concat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str0, str1, str2, str3);
}
inline ::StringW System::String::Concat(::ArrayW<::StringW> values) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Concat", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, values);
}
inline ::StringW System::String::Format(::StringW format, ::System::Object* arg0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, arg0);
}
inline ::StringW System::String::Format(::StringW format, ::System::Object* arg0, ::System::Object* arg1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, arg0, arg1);
}
inline ::StringW System::String::Format(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(),
                          { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, arg0, arg1, arg2);
}
inline ::StringW System::String::Format(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, args);
}
inline ::StringW System::String::Format(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Format", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, provider, format, arg0);
}
inline ::StringW System::String::Format(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0, ::System::Object* arg1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(),
                          { "Format", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, provider, format, arg0, arg1);
}
inline ::StringW System::String::Format(::System::IFormatProvider* provider, ::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Format",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(),
                                                                                        ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, provider, format, arg0, arg1, arg2);
}
inline ::StringW System::String::Format(::System::IFormatProvider* provider, ::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { "Format", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, provider, format, args);
}
inline ::StringW System::String::FormatHelper(::System::IFormatProvider* provider, ::StringW format, ::System::ParamsArray args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { "FormatHelper", {}, { ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ParamsArray>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, provider, format, args);
}
inline ::StringW System::String::Insert(int32_t startIndex, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, startIndex, value);
}
inline ::StringW System::String::Join(char16_t separator, ::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Join", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, value);
}
template <typename T> inline ::StringW System::String::Join(char16_t separator, ::System::Collections::Generic::IEnumerable_1<T>* values) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                           { "Join", { ::i2c::class_of<T>() }, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, values);
}
inline ::StringW System::String::Join(char16_t separator, ::ArrayW<::StringW> value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { "Join", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, value, startIndex, count);
}
inline ::StringW System::String::Join(::StringW separator, ::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Join", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, value);
}
inline ::StringW System::String::Join(::StringW separator, ::ArrayW<::System::Object*> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Join", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, values);
}
template <typename T> inline ::StringW System::String::Join(::StringW separator, ::System::Collections::Generic::IEnumerable_1<T>* values) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { "Join", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, values);
}
inline ::StringW System::String::Join(::StringW separator, ::System::Collections::Generic::IEnumerable_1<::StringW>* values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Join", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, values);
}
inline ::StringW System::String::Join(::StringW separator, ::ArrayW<::StringW> value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { "Join", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, value, startIndex, count);
}
inline ::StringW System::String::JoinCore(char16_t* separator, int32_t separatorLength, ::ArrayW<::System::Object*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "JoinCore", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, separatorLength, values);
}
template <typename T> inline ::StringW System::String::JoinCore(char16_t* separator, int32_t separatorLength, ::System::Collections::Generic::IEnumerable_1<T>* values) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(),
                          { "JoinCore", { ::i2c::class_of<T>() }, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, separatorLength, values);
}
inline ::StringW System::String::JoinCore(char16_t* separator, int32_t separatorLength, ::ArrayW<::StringW> value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::String*>(),
                       { "JoinCore", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, separatorLength, value, startIndex, count);
}
inline ::StringW System::String::PadLeft(int32_t totalWidth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "PadLeft", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, totalWidth);
}
inline ::StringW System::String::PadLeft(int32_t totalWidth, char16_t paddingChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "PadLeft", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, totalWidth, paddingChar);
}
inline ::StringW System::String::PadRight(int32_t totalWidth, char16_t paddingChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "PadRight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, totalWidth, paddingChar);
}
inline ::StringW System::String::Remove(int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, startIndex, count);
}
inline ::StringW System::String::Remove(int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Remove", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, startIndex);
}
inline ::StringW System::String::Replace(char16_t oldChar, char16_t newChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Replace", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, oldChar, newChar);
}
inline ::StringW System::String::Replace(::StringW oldValue, ::StringW newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Replace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, oldValue, newValue);
}
inline ::StringW System::String::ReplaceHelper(int32_t oldValueLength, ::StringW newValue, ::System::ReadOnlySpan_1<int32_t> indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                           { "ReplaceHelper", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, oldValueLength, newValue, indices);
}
inline ::ArrayW<::StringW> System::String::Split(char16_t separator, ::System::StringSplitOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, separator, options);
}
inline ::ArrayW<::StringW> System::String::Split(::ArrayW<char16_t> separator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, separator);
}
inline ::ArrayW<::StringW> System::String::Split(::ArrayW<char16_t> separator, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, separator, count);
}
inline ::ArrayW<::StringW> System::String::Split(::ArrayW<char16_t> separator, ::System::StringSplitOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, separator, options);
}
inline ::ArrayW<::StringW> System::String::SplitInternal(::System::ReadOnlySpan_1<char16_t> separators, int32_t count, ::System::StringSplitOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                       { "SplitInternal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, separators, count, options);
}
inline ::ArrayW<::StringW> System::String::Split(::StringW separator, ::System::StringSplitOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, separator, options);
}
inline ::ArrayW<::StringW> System::String::Split(::ArrayW<::StringW> separator, ::System::StringSplitOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Split", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, separator, options);
}
inline ::ArrayW<::StringW> System::String::SplitInternal(::StringW separator, ::ArrayW<::StringW> separators, int32_t count, ::System::StringSplitOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(),
                          { "SplitInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, separator, separators, count, options);
}
inline ::ArrayW<::StringW> System::String::SplitInternal(::StringW separator, int32_t count, ::System::StringSplitOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "SplitInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringSplitOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, separator, count, options);
}
inline ::ArrayW<::StringW> System::String::SplitKeepEmptyEntries(::System::ReadOnlySpan_1<int32_t> sepList, ::System::ReadOnlySpan_1<int32_t> lengthList, int32_t defaultLength, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "SplitKeepEmptyEntries",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(),
                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, sepList, lengthList, defaultLength, count);
}
inline ::ArrayW<::StringW> System::String::SplitOmitEmptyEntries(::System::ReadOnlySpan_1<int32_t> sepList, ::System::ReadOnlySpan_1<int32_t> lengthList, int32_t defaultLength, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "SplitOmitEmptyEntries",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(),
                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, sepList, lengthList, defaultLength, count);
}
inline void System::String::MakeSeparatorList(::System::ReadOnlySpan_1<char16_t> separators, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::String*>(),
          { "MakeSeparatorList", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, separators, sepListBuilder);
}
inline void System::String::MakeSeparatorList(::StringW separator, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { "MakeSeparatorList", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, separator, sepListBuilder);
}
inline void System::String::MakeSeparatorList(::ArrayW<::StringW> separators, ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>> sepListBuilder,
                                              ::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>> lengthListBuilder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "MakeSeparatorList",
                                                                  {},
                                                                  { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>>(),
                                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::ValueListBuilder_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, separators, sepListBuilder, lengthListBuilder);
}
inline ::StringW System::String::Substring(int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Substring", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, startIndex);
}
inline ::StringW System::String::Substring(int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Substring", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, startIndex, length);
}
inline ::StringW System::String::InternalSubString(int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "InternalSubString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, startIndex, length);
}
inline ::StringW System::String::ToLower() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToLower", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::String::ToLower(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToLower", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, culture);
}
inline ::StringW System::String::ToLowerInvariant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToLowerInvariant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::String::ToUpper() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToUpper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::String::ToUpper(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToUpper", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, culture);
}
inline ::StringW System::String::ToUpperInvariant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ToUpperInvariant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::String::Trim() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Trim", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::String::Trim(char16_t trimChar) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Trim", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, trimChar);
}
inline ::StringW System::String::Trim(::ArrayW<char16_t> trimChars) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Trim", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, trimChars);
}
inline ::StringW System::String::TrimStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::String::TrimStart(char16_t trimChar) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimStart", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, trimChar);
}
inline ::StringW System::String::TrimStart(::ArrayW<char16_t> trimChars) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimStart", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, trimChars);
}
inline ::StringW System::String::TrimEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::String::TrimEnd(char16_t trimChar) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimEnd", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, trimChar);
}
inline ::StringW System::String::TrimEnd(::ArrayW<char16_t> trimChars) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimEnd", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, trimChars);
}
inline ::StringW System::String::TrimWhiteSpaceHelper(::System::String_TrimType trimType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimWhiteSpaceHelper", {}, { ::i2c::type_of<::System::String_TrimType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, trimType);
}
inline ::StringW System::String::TrimHelper(char16_t* trimChars, int32_t trimCharsLength, ::System::String_TrimType trimType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "TrimHelper", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::String_TrimType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, trimChars, trimCharsLength, trimType);
}
inline ::StringW System::String::CreateTrimmedString(int32_t start, int32_t end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateTrimmedString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, start, end);
}
inline bool System::String::Contains(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::String::Contains(::StringW value, ::System::StringComparison comparisonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, comparisonType);
}
inline bool System::String::Contains(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Contains", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool System::String::Contains(char16_t value, ::System::StringComparison comparisonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Contains", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, comparisonType);
}
inline int32_t System::String::IndexOf(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::String::IndexOf(char16_t value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex);
}
inline int32_t System::String::IndexOf(char16_t value, ::System::StringComparison comparisonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, comparisonType);
}
inline int32_t System::String::IndexOf(char16_t value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex, count);
}
inline int32_t System::String::IndexOfAny(::ArrayW<char16_t> anyOf) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, anyOf);
}
inline int32_t System::String::IndexOfAny(::ArrayW<char16_t> anyOf, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, anyOf, startIndex);
}
inline int32_t System::String::IndexOfAny(::ArrayW<char16_t> anyOf, int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, anyOf, startIndex, count);
}
inline int32_t System::String::IndexOfAny(char16_t value1, char16_t value2, int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                                           { "IndexOfAny", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value1, value2, startIndex, count);
}
inline int32_t System::String::IndexOfAny(char16_t value1, char16_t value2, char16_t value3, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(),
                          { "IndexOfAny", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value1, value2, value3, startIndex, count);
}
inline int32_t System::String::IndexOfCharArray(::ArrayW<char16_t> anyOf, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfCharArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, anyOf, startIndex, count);
}
inline void System::String::InitializeProbabilisticMap(uint32_t* charMap, ::System::ReadOnlySpan_1<char16_t> anyOf) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "InitializeProbabilisticMap", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, charMap, anyOf);
}
inline bool System::String::ArrayContains(char16_t searchChar, ::ArrayW<char16_t> anyOf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "ArrayContains", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, searchChar, anyOf);
}
inline bool System::String::IsCharBitSet(uint32_t* charMap, uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IsCharBitSet", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, charMap, value);
}
inline void System::String::SetCharBit(uint32_t* charMap, uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "SetCharBit", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, charMap, value);
}
inline int32_t System::String::IndexOf(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::String::IndexOf(::StringW value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex);
}
inline int32_t System::String::IndexOf(::StringW value, ::System::StringComparison comparisonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, comparisonType);
}
inline int32_t System::String::IndexOf(::StringW value, int32_t startIndex, ::System::StringComparison comparisonType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex, comparisonType);
}
inline int32_t System::String::IndexOf(::StringW value, int32_t startIndex, int32_t count, ::System::StringComparison comparisonType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                              { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex, count, comparisonType);
}
inline int32_t System::String::LastIndexOf(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOf", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::String::LastIndexOf(char16_t value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex);
}
inline int32_t System::String::LastIndexOf(char16_t value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex, count);
}
inline int32_t System::String::LastIndexOfAny(::ArrayW<char16_t> anyOf) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, anyOf);
}
inline int32_t System::String::LastIndexOfAny(::ArrayW<char16_t> anyOf, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, anyOf, startIndex);
}
inline int32_t System::String::LastIndexOfAny(::ArrayW<char16_t> anyOf, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfAny", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, anyOf, startIndex, count);
}
inline int32_t System::String::LastIndexOfCharArray(::ArrayW<char16_t> anyOf, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfCharArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, anyOf, startIndex, count);
}
inline int32_t System::String::LastIndexOf(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOf", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::String::LastIndexOf(::StringW value, ::System::StringComparison comparisonType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, comparisonType);
}
inline int32_t System::String::LastIndexOf(::StringW value, int32_t startIndex, int32_t count, ::System::StringComparison comparisonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                       { "LastIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex, count, comparisonType);
}
inline int32_t System::String::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::String::IndexOfUnchecked(::StringW value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfUnchecked", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex, count);
}
inline int32_t System::String::IndexOfUncheckedIgnoreCase(::StringW value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IndexOfUncheckedIgnoreCase", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex, count);
}
inline int32_t System::String::LastIndexOfUnchecked(::StringW value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfUnchecked", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex, count);
}
inline int32_t System::String::LastIndexOfUncheckedIgnoreCase(::StringW value, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::String*>(), { "LastIndexOfUncheckedIgnoreCase", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex, count);
}
inline bool System::String::StartsWithOrdinalUnchecked(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "StartsWithOrdinalUnchecked", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::StringW System::String::FastAllocateString(int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "FastAllocateString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, length);
}
inline ::StringW System::String::InternalIsInterned(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "InternalIsInterned", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline ::StringW System::String::InternalIntern(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "InternalIntern", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline void System::String::memset(uint8_t* dest, int32_t val, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memset", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, val, len);
}
inline void System::String::memcpy(uint8_t* dest, uint8_t* src, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memcpy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, size);
}
inline void System::String::_cordl_bzero(uint8_t* dest, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "bzero", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, len);
}
inline void System::String::bzero_aligned_1(uint8_t* dest, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "bzero_aligned_1", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, len);
}
inline void System::String::bzero_aligned_2(uint8_t* dest, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "bzero_aligned_2", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, len);
}
inline void System::String::bzero_aligned_4(uint8_t* dest, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "bzero_aligned_4", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, len);
}
inline void System::String::bzero_aligned_8(uint8_t* dest, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "bzero_aligned_8", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, len);
}
inline void System::String::memcpy_aligned_1(uint8_t* dest, uint8_t* src, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memcpy_aligned_1", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, size);
}
inline void System::String::memcpy_aligned_2(uint8_t* dest, uint8_t* src, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memcpy_aligned_2", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, size);
}
inline void System::String::memcpy_aligned_4(uint8_t* dest, uint8_t* src, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memcpy_aligned_4", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, size);
}
inline void System::String::memcpy_aligned_8(uint8_t* dest, uint8_t* src, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(), { "memcpy_aligned_8", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, size);
}
inline ::StringW System::String::CreateString(int8_t* value, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, startIndex, length);
}
inline ::StringW System::String::CreateString(char16_t* value, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, startIndex, length);
}
inline ::StringW System::String::CreateString(::ArrayW<char16_t> val, int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, val, startIndex, length);
}
inline ::StringW System::String::CreateString(::ArrayW<char16_t> val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, val);
}
inline ::StringW System::String::CreateString(char16_t c, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, c, count);
}
inline ::StringW System::String::CreateString(int8_t* value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::String*>(),
                                       { "CreateString", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, startIndex, length, enc);
}
inline ::StringW System::String::CreateString(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "CreateString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline char16_t System::String::get_Chars(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "get_Chars", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, index);
}
inline ::StringW System::String::Intern(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "Intern", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline ::StringW System::String::IsInterned(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::String*>(), { "IsInterned", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline ::System::String* System::String::New_ctor(::ArrayW<char16_t> value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::String*>(value));
}
inline ::System::String* System::String::New_ctor(::ArrayW<char16_t> value, int32_t startIndex, int32_t length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::String*>(value, startIndex, length));
}
inline ::System::String* System::String::New_ctor(char16_t* value, int32_t startIndex, int32_t length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::String*>(value, startIndex, length));
}
inline ::System::String* System::String::New_ctor(int8_t* value, int32_t startIndex, int32_t length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::String*>(value, startIndex, length));
}
inline ::System::String* System::String::New_ctor(int8_t* value, int32_t startIndex, int32_t length, ::System::Text::Encoding* enc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::String*>(value, startIndex, length, enc));
}
inline ::System::String* System::String::New_ctor(char16_t c, int32_t count) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::String*>(c, count));
}
inline ::System::String* System::String::New_ctor(::System::ReadOnlySpan_1<char16_t> value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::String*>(value));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::String::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::String::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::String::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::String::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr System::String::operator ::System::Collections::Generic::IEnumerable_1<char16_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* System::String::i___System__Collections__Generic__IEnumerable_1_char16_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr System::String::operator ::System::IComparable_1<::StringW>*() noexcept {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* System::String::i___System__IComparable_1___StringW_() noexcept {
  return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr System::String::operator ::System::IEquatable_1<::StringW>*() noexcept {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* System::String::i___System__IEquatable_1___StringW_() noexcept {
  return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IConvertible"
constexpr System::String::operator ::System::IConvertible*() noexcept {
  return static_cast<::System::IConvertible*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* System::String::i___System__IConvertible() noexcept {
  return static_cast<::System::IConvertible*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::String::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::String::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::String::String() {}
