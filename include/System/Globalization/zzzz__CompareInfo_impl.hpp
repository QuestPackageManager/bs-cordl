#pragma once
// IWYU pragma private; include "System\Globalization\CompareInfo.hpp"
#include "System/Globalization/zzzz__CompareOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__ISimpleCollator_def.hpp"
#include "System/Globalization/zzzz__SortKey_def.hpp"
#include "System/Globalization/zzzz__SortVersion_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t, int32_t, bool)>(&::System::Globalization::CompareInfo::InvariantIndexOf)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b945a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                            { "InvariantIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantLastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t, int32_t, bool)>(&::System::Globalization::CompareInfo::InvariantLastIndexOf)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b94a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                         { "InvariantLastIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantFindString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, char16_t*, int32_t, bool, bool)>(&::System::Globalization::CompareInfo::InvariantFindString)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5b9465c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "InvariantFindString",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(),
                                                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantToUpper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::System::Globalization::CompareInfo::InvariantToUpper)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b94b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "InvariantToUpper", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InvariantCreateSortKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::InvariantCreateSortKey)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5b94b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "InvariantCreateSortKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Globalization::CultureInfo*)>(&::System::Globalization::CompareInfo::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b94dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetCompareInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CompareInfo* (*)(::StringW)>(&::System::Globalization::CompareInfo::GetCompareInfo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b94ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "GetCompareInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.OnDeserializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Globalization::CompareInfo::OnDeserializing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b94e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                                                           { "OnDeserializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Object*)>(
    &::System::Globalization::CompareInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b94ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Globalization::CompareInfo::OnDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b94f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                                                           { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::OnDeserialized)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b94ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "OnDeserialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.OnSerializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Globalization::CompareInfo::OnSerializing)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b94f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "OnSerializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::get_Name)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b94fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW)>(&::System::Globalization::CompareInfo::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b95070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::Compare)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5b95080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::Compare)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5b9561c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                            { "Compare", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareOptionIgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(
    &::System::Globalization::CompareInfo::CompareOptionIgnoreCase)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5b95a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                { "CompareOptionIgnoreCase", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t,
                                                                                                         ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::Compare)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x5b95c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareOrdinalIgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t)>(&::System::Globalization::CompareInfo::CompareOrdinalIgnoreCase)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b9613c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "CompareOrdinalIgnoreCase",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                              ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareOrdinalIgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(
    &::System::Globalization::CompareInfo::CompareOrdinalIgnoreCase)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5b95338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                { "CompareOrdinalIgnoreCase", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IsPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::IsPrefix)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5b963f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IsSuffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::IsSuffix)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5b967a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IsSuffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>,
                                                                                                      ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::IsSuffix)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b96b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "IsSuffix",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                          ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, char16_t, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::IndexOf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b96ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::IndexOf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b96c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, char16_t, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::IndexOf)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5b96c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::IndexOf)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5b97104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOfOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, bool)>(
    &::System::Globalization::CompareInfo::IndexOfOrdinal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b96f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                            { "IndexOfOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::LastIndexOf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b973fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::LastIndexOf)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5b97468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.LastIndexOfOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, bool)>(
    &::System::Globalization::CompareInfo::LastIndexOfOrdinal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b977bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                            { "LastIndexOfOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetSortKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::GetSortKey)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b97934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::System::Object*)>(&::System::Globalization::CompareInfo::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b97abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b97b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetIgnoreCaseHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Globalization::CompareInfo::GetIgnoreCaseHash)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x5b97ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "GetIgnoreCaseHash", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetHashCodeOfString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::GetHashCodeOfString)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5b9806c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "GetHashCodeOfString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b98258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b9835c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.get_UseManagedCollation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Globalization::CompareInfo::get_UseManagedCollation)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5b983c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "get_UseManagedCollation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetCollator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::ISimpleCollator* (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::GetCollator)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5b98528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "GetCollator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CreateSortKeyCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::CreateSortKeyCore)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b988ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "CreateSortKeyCore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_index_switch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, int32_t, int32_t, ::StringW, ::System::Globalization::CompareOptions, bool)>(
    &::System::Globalization::CompareInfo::internal_index_switch)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5b989f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "internal_index_switch",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_compare_switch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(
    ::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::internal_compare_switch)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b9551c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "internal_compare_switch",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_compare_managed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(
    ::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::internal_compare_managed)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b98de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "internal_compare_managed",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_index_managed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, int32_t, int32_t, ::StringW, ::System::Globalization::CompareOptions, bool)>(
    &::System::Globalization::CompareInfo::internal_index_managed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b98bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "internal_index_managed",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_compare_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, char16_t*, int32_t, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::internal_compare_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b98ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "internal_compare_icall",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(),
                                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::internal_compare)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b98d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "internal_compare",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_index_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, int32_t, char16_t*, int32_t, bool)>(&::System::Globalization::CompareInfo::internal_index_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b98ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "internal_index_icall",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                              ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.internal_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int32_t, ::StringW, bool)>(&::System::Globalization::CompareInfo::internal_index)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b98b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                            { "internal_index", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.InitSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)(::System::Globalization::CultureInfo*)>(&::System::Globalization::CompareInfo::InitSort)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b94dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "InitSort", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareStringOrdinalIgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, char16_t*, int32_t)>(&::System::Globalization::CompareInfo::CompareStringOrdinalIgnoreCase)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b96274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                            { "CompareStringOrdinalIgnoreCase", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOfOrdinalCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t, int32_t, bool)>(&::System::Globalization::CompareInfo::IndexOfOrdinalCore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b973d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                            { "IndexOfOrdinalCore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.LastIndexOfOrdinalCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t, int32_t, bool)>(&::System::Globalization::CompareInfo::LastIndexOfOrdinalCore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b97908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Globalization::CompareInfo*>(),
            { "LastIndexOfOrdinalCore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.LastIndexOfCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::LastIndexOfCore)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b978f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "LastIndexOfCore",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.IndexOfCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions, int32_t*)>(
    &::System::Globalization::CompareInfo::IndexOfCore)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b970b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "IndexOfCore",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::CompareString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b959b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                         { "CompareString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CompareString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(
    ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::CompareString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b95b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "CompareString",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                          ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.CreateSortKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::CreateSortKey)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b97a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "CreateSortKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.StartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::StartsWith)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5b96628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.EndsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::EndsWith)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b969d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                { "EndsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.EndsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CompareInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>,
                                                                                                      ::System::Globalization::CompareOptions)>(&::System::Globalization::CompareInfo::EndsWith)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b96b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "EndsWith",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                          ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo.GetHashCodeOfStringCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CompareInfo::*)(::StringW, ::System::Globalization::CompareOptions)>(
    &::System::Globalization::CompareInfo::GetHashCodeOfStringCore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b9822c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                             { "GetHashCodeOfStringCore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CompareInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CompareInfo::*)()>(&::System::Globalization::CompareInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b98f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Globalization::CompareInfo::__cordl_internal_get_m_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_name;
}
constexpr ::StringW const& System::Globalization::CompareInfo::__cordl_internal_get_m_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_name;
}
constexpr void System::Globalization::CompareInfo::__cordl_internal_set_m_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_name = value;
}
constexpr ::StringW& System::Globalization::CompareInfo::__cordl_internal_get__sortName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortName;
}
constexpr ::StringW const& System::Globalization::CompareInfo::__cordl_internal_get__sortName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortName;
}
constexpr void System::Globalization::CompareInfo::__cordl_internal_set__sortName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortName = value;
}
constexpr ::System::Globalization::SortVersion*& System::Globalization::CompareInfo::__cordl_internal_get_m_SortVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortVersion;
}
constexpr ::System::Globalization::SortVersion* const& System::Globalization::CompareInfo::__cordl_internal_get_m_SortVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortVersion;
}
constexpr void System::Globalization::CompareInfo::__cordl_internal_set_m_SortVersion(::System::Globalization::SortVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortVersion = value;
}
constexpr int32_t& System::Globalization::CompareInfo::__cordl_internal_get_culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___culture;
}
constexpr int32_t const& System::Globalization::CompareInfo::__cordl_internal_get_culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___culture;
}
constexpr void System::Globalization::CompareInfo::__cordl_internal_set_culture(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___culture = value;
}
constexpr ::System::Globalization::ISimpleCollator*& System::Globalization::CompareInfo::__cordl_internal_get_collator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collator;
}
constexpr ::System::Globalization::ISimpleCollator* const& System::Globalization::CompareInfo::__cordl_internal_get_collator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collator;
}
constexpr void System::Globalization::CompareInfo::__cordl_internal_set_collator(::System::Globalization::ISimpleCollator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collator = value;
}
inline void System::Globalization::CompareInfo::setStaticF_Invariant(::System::Globalization::CompareInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CompareInfo*, "Invariant", ::System::Globalization::CompareInfo*>(std::forward<::System::Globalization::CompareInfo*>(value));
}
inline ::System::Globalization::CompareInfo* System::Globalization::CompareInfo::getStaticF_Invariant() {
  return ::cordl_internals::getStaticField<::System::Globalization::CompareInfo*, "Invariant", ::System::Globalization::CompareInfo*>();
}
inline void System::Globalization::CompareInfo::setStaticF_collators(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::ISimpleCollator*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::ISimpleCollator*>*, "collators", ::System::Globalization::CompareInfo*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::ISimpleCollator*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::ISimpleCollator*>* System::Globalization::CompareInfo::getStaticF_collators() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::ISimpleCollator*>*, "collators", ::System::Globalization::CompareInfo*>();
}
inline void System::Globalization::CompareInfo::setStaticF_managedCollation(bool value) {
  ::cordl_internals::setStaticField<bool, "managedCollation", ::System::Globalization::CompareInfo*>(std::forward<bool>(value));
}
inline bool System::Globalization::CompareInfo::getStaticF_managedCollation() {
  return ::cordl_internals::getStaticField<bool, "managedCollation", ::System::Globalization::CompareInfo*>();
}
inline void System::Globalization::CompareInfo::setStaticF_managedCollationChecked(bool value) {
  ::cordl_internals::setStaticField<bool, "managedCollationChecked", ::System::Globalization::CompareInfo*>(std::forward<bool>(value));
}
inline bool System::Globalization::CompareInfo::getStaticF_managedCollationChecked() {
  return ::cordl_internals::getStaticField<bool, "managedCollationChecked", ::System::Globalization::CompareInfo*>();
}
inline int32_t System::Globalization::CompareInfo::InvariantIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                          { "InvariantIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::InvariantLastIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                          { "InvariantLastIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::InvariantFindString(char16_t* source, int32_t sourceCount, char16_t* value, int32_t valueCount, bool ignoreCase, bool start) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "InvariantFindString",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(),
                                                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, sourceCount, value, valueCount, ignoreCase, start);
}
inline char16_t System::Globalization::CompareInfo::InvariantToUpper(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "InvariantToUpper", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline ::System::Globalization::SortKey* System::Globalization::CompareInfo::InvariantCreateSortKey(::StringW source, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                           { "InvariantCreateSortKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, source, options);
}
inline void System::Globalization::CompareInfo::_ctor(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline ::System::Globalization::CompareInfo* System::Globalization::CompareInfo::GetCompareInfo(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "GetCompareInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CompareInfo*>(nullptr, ___internal_method, name);
}
inline void System::Globalization::CompareInfo::OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "OnDeserializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void System::Globalization::CompareInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                           { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void System::Globalization::CompareInfo::OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void System::Globalization::CompareInfo::OnDeserialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "OnDeserialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Globalization::CompareInfo::OnSerializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "OnSerializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::StringW System::Globalization::CompareInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Globalization::CompareInfo::Compare(::StringW string1, ::StringW string2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2);
}
inline int32_t System::Globalization::CompareInfo::Compare(::StringW string1, ::StringW string2, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2, options);
}
inline int32_t System::Globalization::CompareInfo::Compare(::System::ReadOnlySpan_1<char16_t> string1, ::StringW string2, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                          { "Compare", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2, options);
}
inline int32_t System::Globalization::CompareInfo::CompareOptionIgnoreCase(::System::ReadOnlySpan_1<char16_t> string1, ::System::ReadOnlySpan_1<char16_t> string2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                              { "CompareOptionIgnoreCase", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2);
}
inline int32_t System::Globalization::CompareInfo::Compare(::StringW string1, int32_t offset1, int32_t length1, ::StringW string2, int32_t offset2, int32_t length2,
                                                           ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, offset1, length1, string2, offset2, length2, options);
}
inline int32_t System::Globalization::CompareInfo::CompareOrdinalIgnoreCase(::StringW strA, int32_t indexA, int32_t lengthA, ::StringW strB, int32_t indexB, int32_t lengthB) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "CompareOrdinalIgnoreCase",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, indexA, lengthA, strB, indexB, lengthB);
}
inline int32_t System::Globalization::CompareInfo::CompareOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t> strA, ::System::ReadOnlySpan_1<char16_t> strB) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                              { "CompareOrdinalIgnoreCase", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, strB);
}
inline bool System::Globalization::CompareInfo::IsPrefix(::StringW source, ::StringW prefix, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, prefix, options);
}
inline bool System::Globalization::CompareInfo::IsSuffix(::StringW source, ::StringW suffix, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, suffix, options);
}
inline bool System::Globalization::CompareInfo::IsSuffix(::System::ReadOnlySpan_1<char16_t> source, ::System::ReadOnlySpan_1<char16_t> suffix, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                                                         { "IsSuffix",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                             ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, suffix, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOf(::StringW source, char16_t value, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOf(::StringW source, ::StringW value, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOf(::StringW source, char16_t value, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOfOrdinal(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                          { "IndexOfOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::LastIndexOf(::StringW source, ::StringW value, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, options);
}
inline int32_t System::Globalization::CompareInfo::LastIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, options);
}
inline int32_t System::Globalization::CompareInfo::LastIndexOfOrdinal(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                          { "LastIndexOfOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline ::System::Globalization::SortKey* System::Globalization::CompareInfo::GetSortKey(::StringW source, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, source, options);
}
inline bool System::Globalization::CompareInfo::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Globalization::CompareInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Globalization::CompareInfo::GetIgnoreCaseHash(::StringW source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "GetIgnoreCaseHash", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source);
}
inline int32_t System::Globalization::CompareInfo::GetHashCodeOfString(::StringW source, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                           { "GetHashCodeOfString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, options);
}
inline int32_t System::Globalization::CompareInfo::GetHashCode(::StringW source, ::System::Globalization::CompareOptions options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, options);
}
inline ::StringW System::Globalization::CompareInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CompareInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Globalization::CompareInfo::get_UseManagedCollation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "get_UseManagedCollation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Globalization::ISimpleCollator* System::Globalization::CompareInfo::GetCollator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "GetCollator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::ISimpleCollator*>(this, ___internal_method);
}
inline ::System::Globalization::SortKey* System::Globalization::CompareInfo::CreateSortKeyCore(::StringW source, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                           { "CreateSortKeyCore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, source, options);
}
inline int32_t System::Globalization::CompareInfo::internal_index_switch(::StringW s1, int32_t sindex, int32_t count, ::StringW s2, ::System::Globalization::CompareOptions opt, bool first) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "internal_index_switch",
                                                                                      {},
                                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                        ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, sindex, count, s2, opt, first);
}
inline int32_t System::Globalization::CompareInfo::internal_compare_switch(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2,
                                                                           ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                           { "internal_compare_switch",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, str1, offset1, length1, str2, offset2, length2, options);
}
inline int32_t System::Globalization::CompareInfo::internal_compare_managed(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2,
                                                                            ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                           { "internal_compare_managed",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, str1, offset1, length1, str2, offset2, length2, options);
}
inline int32_t System::Globalization::CompareInfo::internal_index_managed(::StringW s1, int32_t sindex, int32_t count, ::StringW s2, ::System::Globalization::CompareOptions opt, bool first) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "internal_index_managed",
                                                                                      {},
                                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                        ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, sindex, count, s2, opt, first);
}
inline int32_t System::Globalization::CompareInfo::internal_compare_icall(char16_t* str1, int32_t length1, char16_t* str2, int32_t length2, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "internal_compare_icall",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(),
                                                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str1, length1, str2, length2, options);
}
inline int32_t System::Globalization::CompareInfo::internal_compare(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2,
                                                                    ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                           { "internal_compare",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str1, offset1, length1, str2, offset2, length2, options);
}
inline int32_t System::Globalization::CompareInfo::internal_index_icall(char16_t* source, int32_t sindex, int32_t count, char16_t* value, int32_t value_length, bool first) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "internal_index_icall",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, sindex, count, value, value_length, first);
}
inline int32_t System::Globalization::CompareInfo::internal_index(::StringW source, int32_t sindex, int32_t count, ::StringW value, bool first) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                          { "internal_index", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, sindex, count, value, first);
}
inline void System::Globalization::CompareInfo::InitSort(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "InitSort", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline int32_t System::Globalization::CompareInfo::CompareStringOrdinalIgnoreCase(char16_t* pString1, int32_t length1, char16_t* pString2, int32_t length2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                       { "CompareStringOrdinalIgnoreCase", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pString1, length1, pString2, length2);
}
inline int32_t System::Globalization::CompareInfo::IndexOfOrdinalCore(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                          { "IndexOfOrdinalCore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::LastIndexOfOrdinalCore(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Globalization::CompareInfo*>(),
                       { "LastIndexOfOrdinalCore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value, startIndex, count, ignoreCase);
}
inline int32_t System::Globalization::CompareInfo::LastIndexOfCore(::StringW source, ::StringW target, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "LastIndexOfCore",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, target, startIndex, count, options);
}
inline int32_t System::Globalization::CompareInfo::IndexOfCore(::StringW source, ::StringW target, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options,
                                                               int32_t* matchLengthPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { "IndexOfCore",
                                                                                      {},
                                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                        ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, target, startIndex, count, options, matchLengthPtr);
}
inline int32_t System::Globalization::CompareInfo::CompareString(::System::ReadOnlySpan_1<char16_t> string1, ::StringW string2, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                          { "CompareString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2, options);
}
inline int32_t System::Globalization::CompareInfo::CompareString(::System::ReadOnlySpan_1<char16_t> string1, ::System::ReadOnlySpan_1<char16_t> string2,
                                                                 ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                                                         { "CompareString",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                             ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, string1, string2, options);
}
inline ::System::Globalization::SortKey* System::Globalization::CompareInfo::CreateSortKey(::StringW source, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                           { "CreateSortKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, source, options);
}
inline bool System::Globalization::CompareInfo::StartsWith(::StringW source, ::StringW prefix, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                              { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, prefix, options);
}
inline bool System::Globalization::CompareInfo::EndsWith(::StringW source, ::StringW suffix, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                              { "EndsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, suffix, options);
}
inline bool System::Globalization::CompareInfo::EndsWith(::System::ReadOnlySpan_1<char16_t> source, ::System::ReadOnlySpan_1<char16_t> suffix, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                                                         { "EndsWith",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                             ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, suffix, options);
}
inline int32_t System::Globalization::CompareInfo::GetHashCodeOfStringCore(::StringW source, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(),
                                                           { "GetHashCodeOfStringCore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, source, options);
}
inline void System::Globalization::CompareInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CompareInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Globalization::CompareInfo* System::Globalization::CompareInfo::New_ctor(::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CompareInfo*>(culture));
}
inline ::System::Globalization::CompareInfo* System::Globalization::CompareInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CompareInfo*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Globalization::CompareInfo::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Globalization::CompareInfo::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Globalization::CompareInfo::CompareInfo() {}
constexpr ::System::Globalization::CompareOptions System::Globalization::CompareInfo::ValidIndexMaskOffFlags{ static_cast<int32_t>(0xffffffe0) };
constexpr ::System::Globalization::CompareOptions System::Globalization::CompareInfo::ValidCompareMaskOffFlags{ static_cast<int32_t>(0xdfffffe0) };
constexpr ::System::Globalization::CompareOptions System::Globalization::CompareInfo::ValidHashCodeOfStringMaskOffFlags{ static_cast<int32_t>(0xffffffe0) };
constexpr ::System::Globalization::CompareOptions System::Globalization::CompareInfo::ValidSortkeyCtorMaskOffFlags{ static_cast<int32_t>(0xdfffffe0) };
