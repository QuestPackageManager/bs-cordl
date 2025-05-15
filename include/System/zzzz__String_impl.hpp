#pragma once
// IWYU pragma private; include "System/String.hpp"
#include "System/Buffers/zzzz__SpanAction_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__ValueListBuilder_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__NormalizationForm_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__ICloneable_impl.hpp"
#include "System/zzzz__IComparable_1_impl.hpp"
#include "System/zzzz__IComparable_impl.hpp"
#include "System/zzzz__IConvertible_impl.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ParamsArray_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
#include "System/zzzz__StringSplitOptions_def.hpp"
#include "System/zzzz__String_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::String_TrimType::String_TrimType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::String_TrimType::String_TrimType() {}
constexpr ::System::String_TrimType System::String_TrimType::Head{
    static_cast<int32_t>(0x0)};
constexpr ::System::String_TrimType System::String_TrimType::Tail{
    static_cast<int32_t>(0x1)};
constexpr ::System::String_TrimType System::String_TrimType::Both{
    static_cast<int32_t>(0x2)};
// Ctor Parameters []
constexpr ::System::String_ProbabilisticMap::String_ProbabilisticMap() {}
//  Writing Method size for method: ::System::String.EqualsHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW, ::StringW)>(
        &::System::String::EqualsHelper)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3c6f878;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "EqualsHelper", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareOrdinalHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, int32_t, int32_t, ::StringW, int32_t,
                            int32_t)>(
        &::System::String::CompareOrdinalHelper)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3c6f8ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CompareOrdinalHelper", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareOrdinalHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, ::StringW)>(
        &::System::String::CompareOrdinalHelper)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3c6f8e4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CompareOrdinalHelper", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, ::StringW)>(
        &::System::String::Compare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6faa0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Compare", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, ::StringW, bool)>(
        &::System::String::Compare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6fd58;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Compare", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, ::StringW, ::System::StringComparison)>(
        &::System::String::Compare)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x3c6faa8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Compare", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(
        ::StringW, ::StringW, ::System::Globalization::CultureInfo *,
        ::System::Globalization::CompareOptions)>(&::System::String::Compare)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3c6fd7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Compare", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Globalization::CultureInfo *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Globalization::CompareOptions>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, ::StringW, bool,
                            ::System::Globalization::CultureInfo *)>(
        &::System::String::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c6fe14;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Compare", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Globalization::CultureInfo *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, int32_t, ::StringW, int32_t, int32_t)>(
        &::System::String::Compare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6fe24;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Compare", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, int32_t, ::StringW, int32_t, int32_t,
                            bool)>(&::System::String::Compare)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3c6fe2c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Compare", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, int32_t, ::StringW, int32_t, int32_t,
                            ::System::StringComparison)>(
        &::System::String::Compare)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x3c6ff6c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Compare", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareOrdinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, ::StringW)>(
        &::System::String::CompareOrdinal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3c7038c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CompareOrdinal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareOrdinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>,
                            ::System::ReadOnlySpan_1<char16_t>)>(
        &::System::String::CompareOrdinal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3c703d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CompareOrdinal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<char16_t>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareOrdinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::StringW, int32_t, ::StringW, int32_t, int32_t)>(
        &::System::String::CompareOrdinal)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x3c70470;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CompareOrdinal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::System::Object *)>(
        &::System::String::CompareTo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3c70668;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CompareTo", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW)>(
        &::System::String::CompareTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c70724;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CompareTo", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.EndsWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(::StringW)>(
        &::System::String::EndsWith)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c7072c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "EndsWith", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.EndsWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(
        ::StringW, ::System::StringComparison)>(&::System::String::EndsWith)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x3c70734;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "EndsWith", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.EndsWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(char16_t)>(
        &::System::String::EndsWith)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3c709ec;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "EndsWith", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(::System::Object *)>(
        &::System::String::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3c70a3c;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::System::String *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::System::String *>::get(),
            0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(::StringW)>(
        &::System::String::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3c70ae0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Equals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(
        ::StringW, ::System::StringComparison)>(&::System::String::Equals)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x3c70b20;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Equals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW, ::StringW)>(&::System::String::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3c70db8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Equals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW, ::StringW, ::System::StringComparison)>(
        &::System::String::Equals)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x3c70e04;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Equals", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW, ::StringW)>(
        &::System::String::op_Equality)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c7109c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "op_Equality", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW, ::StringW)>(
        &::System::String::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3c710a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "op_Inequality", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)()>(
        &::System::String::GetHashCode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c710b8;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::System::String *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::System::String *>::get(),
            2));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.GetLegacyNonRandomizedHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)()>(
        &::System::String::GetLegacyNonRandomizedHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3c710bc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "GetLegacyNonRandomizedHashCode",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.StartsWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(::StringW)>(
        &::System::String::StartsWith)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c7110c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "StartsWith", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.StartsWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(::StringW,
                                           ::System::StringComparison)>(
        &::System::String::StartsWith)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x3c71164;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "StartsWith", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.StartsWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(char16_t)>(
        &::System::String::StartsWith)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c71434;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "StartsWith", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CheckStringComparison
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::StringComparison)>(
        &::System::String::CheckStringComparison)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3c6fd60;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CheckStringComparison", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.FillStringChecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, int32_t, ::StringW)>(
        &::System::String::FillStringChecked)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3c71454;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "FillStringChecked", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::System::Object *, ::System::Object *)>(
        &::System::String::Concat)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3c714d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Concat", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::System::Object *, ::System::Object *,
                              ::System::Object *)>(&::System::String::Concat)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3c71588;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Concat", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(
        ::ArrayW<::System::Object *, ::Array<::System::Object *> *>)>(
        &::System::String::Concat)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3c71740;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Concat", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::System::Object *, ::Array<::System::Object *> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW, ::StringW)>(
        &::System::String::Concat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3c68560;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Concat", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(
        &::System::String::Concat)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3c71680;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Concat", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(
        &::System::String::Concat)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3c7198c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Concat", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Concat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::ArrayW<::StringW, ::Array<::StringW> *>)>(
        &::System::String::Concat)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x3c71a94;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Concat", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::StringW, ::Array<::StringW> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW, ::System::Object *)>(
        &::System::String::Format)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3c6916c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Format", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW, ::System::Object *,
                              ::System::Object *)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3c71d9c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Format", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW, ::System::Object *, ::System::Object *,
                              ::System::Object *)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3c71de0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Format", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(
        ::StringW,
        ::ArrayW<::System::Object *, ::Array<::System::Object *> *>)>(
        &::System::String::Format)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3c71e24;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Format", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::System::Object *, ::Array<::System::Object *> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::System::IFormatProvider *, ::StringW,
                              ::System::Object *)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3c71ecc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Format", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::System::IFormatProvider *, ::StringW,
                              ::System::Object *, ::System::Object *)>(
        &::System::String::Format)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c71f20;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Format", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::System::IFormatProvider *, ::StringW,
                              ::System::Object *, ::System::Object *,
                              ::System::Object *)>(&::System::String::Format)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3c71f78;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Format", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(
        ::System::IFormatProvider *, ::StringW,
        ::ArrayW<::System::Object *, ::Array<::System::Object *> *>)>(
        &::System::String::Format)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c71fd4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Format", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
                ::System::Object *, ::Array<::System::Object *> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.FormatHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::System::IFormatProvider *, ::StringW,
                              ::System::ParamsArray)>(
        &::System::String::FormatHelper)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3c71c98;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "FormatHelper", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ParamsArray>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(int32_t, ::StringW)>(
        &::System::String::Insert)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3c72084;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Insert", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(char16_t,
                              ::ArrayW<::StringW, ::Array<::StringW> *>)>(
        &::System::String::Join)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3c721c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Join", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::StringW, ::Array<::StringW> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(
        char16_t, ::ArrayW<::StringW, ::Array<::StringW> *>, int32_t, int32_t)>(
        &::System::String::Join)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3c7223c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Join", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW,
                              ::ArrayW<::StringW, ::Array<::StringW> *>)>(
        &::System::String::Join)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3c72608;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Join", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::StringW, ::Array<::StringW> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(
        ::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW> *)>(
        &::System::String::Join)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x3c726e8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Join", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::IEnumerable_1<::StringW>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Join
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW,
                              ::ArrayW<::StringW, ::Array<::StringW> *>,
                              int32_t, int32_t)>(&::System::String::Join)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3c72668;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Join", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.JoinCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::cordl_internals::Ptr<char16_t>, int32_t,
                              ::ArrayW<::StringW, ::Array<::StringW> *>,
                              int32_t, int32_t)>(&::System::String::JoinCore)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x3c72264;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "JoinCore", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.PadLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(int32_t)>(
        &::System::String::PadLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c72bb4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "PadLeft", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.PadLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(int32_t, char16_t)>(
        &::System::String::PadLeft)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3c72bbc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "PadLeft", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.PadRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(int32_t, char16_t)>(
        &::System::String::PadRight)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3c72cdc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "PadRight", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(int32_t, int32_t)>(
        &::System::String::Remove)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3c72e04;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Remove", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(int32_t)>(
        &::System::String::Remove)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3c72fa0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Remove", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(char16_t, char16_t)>(
        &::System::String::Replace)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3c731f0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Replace", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(::StringW, ::StringW)>(
        &::System::String::Replace)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x3c732c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Replace", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ReplaceHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        int32_t, ::StringW, ::System::ReadOnlySpan_1<int32_t>)>(
        &::System::String::ReplaceHelper)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x3c735dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "ReplaceHelper", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<int32_t>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        char16_t, ::System::StringSplitOptions)>(&::System::String::Split)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3c7391c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Split", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringSplitOptions>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>)>(&::System::String::Split)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3c73c9c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Split", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t)>(
        &::System::String::Split)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3c73d10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Split", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, ::System::StringSplitOptions)>(
        &::System::String::Split)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3c73d88;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Split", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringSplitOptions>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t,
        ::System::StringSplitOptions)>(&::System::String::Split)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3c73e00;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Split", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringSplitOptions>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SplitInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        ::System::ReadOnlySpan_1<char16_t>, int32_t,
        ::System::StringSplitOptions)>(&::System::String::SplitInternal)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x3c7397c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "SplitInternal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringSplitOptions>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Split
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        ::ArrayW<::StringW, ::Array<::StringW> *>,
        ::System::StringSplitOptions)>(&::System::String::Split)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3c747bc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Split", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringSplitOptions>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SplitInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        ::StringW, ::ArrayW<::StringW, ::Array<::StringW> *>, int32_t,
        ::System::StringSplitOptions)>(&::System::String::SplitInternal)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x3c747d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "SplitInternal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringSplitOptions>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SplitInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        ::StringW, int32_t, ::System::StringSplitOptions)>(
        &::System::String::SplitInternal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3c74bb4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "SplitInternal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringSplitOptions>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SplitKeepEmptyEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        ::System::ReadOnlySpan_1<int32_t>, ::System::ReadOnlySpan_1<int32_t>,
        int32_t, int32_t)>(&::System::String::SplitKeepEmptyEntries)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3c74358;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "SplitKeepEmptyEntries", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SplitOmitEmptyEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW> *> (::System::String::*)(
        ::System::ReadOnlySpan_1<int32_t>, ::System::ReadOnlySpan_1<int32_t>,
        int32_t, int32_t)>(&::System::String::SplitOmitEmptyEntries)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x3c74530;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "SplitOmitEmptyEntries", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.MakeSeparatorList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(
        ::System::ReadOnlySpan_1<char16_t>,
        ::ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>>)>(
        &::System::String::MakeSeparatorList)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x3c73e84;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "MakeSeparatorList", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
                ::System::Collections::Generic::ValueListBuilder_1<int32_t>>>::
                get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.MakeSeparatorList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(
        ::StringW,
        ::ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>>)>(
        &::System::String::MakeSeparatorList)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x3c7503c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "MakeSeparatorList", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
                ::System::Collections::Generic::ValueListBuilder_1<int32_t>>>::
                get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.MakeSeparatorList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(
        ::ArrayW<::StringW, ::Array<::StringW> *>,
        ::ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>>,
        ::ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>>)>(
        &::System::String::MakeSeparatorList)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x3c74d64;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "MakeSeparatorList", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
                ::System::Collections::Generic::ValueListBuilder_1<int32_t>>>::
                get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
                ::System::Collections::Generic::ValueListBuilder_1<int32_t>>>::
                get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Substring
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(int32_t)>(
        &::System::String::Substring)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c75234;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Substring", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Substring
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(int32_t, int32_t)>(
        &::System::String::Substring)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3c73058;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Substring", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.InternalSubString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(int32_t, int32_t)>(
        &::System::String::InternalSubString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c7533c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "InternalSubString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToLower
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)()>(
        &::System::String::ToLower)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3c75394;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "ToLower", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToLower
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::System::Globalization::CultureInfo *)>(&::System::String::ToLower)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3c75410;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "ToLower", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Globalization::CultureInfo *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToLowerInvariant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)()>(
        &::System::String::ToLowerInvariant)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3c75494;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "ToLowerInvariant", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToUpper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)()>(
        &::System::String::ToUpper)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3c75510;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "ToUpper", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToUpper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::System::Globalization::CultureInfo *)>(&::System::String::ToUpper)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3c7558c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "ToUpper", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Globalization::CultureInfo *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToUpperInvariant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)()>(
        &::System::String::ToUpperInvariant)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3c75610;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "ToUpperInvariant", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Trim
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)()>(&::System::String::Trim)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c7568c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Trim", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Trim
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(char16_t)>(
        &::System::String::Trim)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c757cc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Trim", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Trim
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>)>(&::System::String::Trim)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3c75950;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Trim", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)()>(
        &::System::String::TrimStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c75984;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "TrimStart", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(char16_t)>(
        &::System::String::TrimStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c7598c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "TrimStart", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>)>(
        &::System::String::TrimStart)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3c759ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "TrimStart", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)()>(
        &::System::String::TrimEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c759e0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "TrimEnd", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(char16_t)>(
        &::System::String::TrimEnd)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c759e8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "TrimEnd", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>)>(&::System::String::TrimEnd)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3c75a08;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "TrimEnd", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimWhiteSpaceHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(::System::String_TrimType)>(
        &::System::String::TrimWhiteSpaceHelper)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3c75694;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "TrimWhiteSpaceHelper", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::String_TrimType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.TrimHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::cordl_internals::Ptr<char16_t>, int32_t, ::System::String_TrimType)>(
        &::System::String::TrimHelper)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3c757ec;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "TrimHelper", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::String_TrimType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateTrimmedString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(int32_t, int32_t)>(
        &::System::String::CreateTrimmedString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3c75a3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateTrimmedString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(::StringW)>(
        &::System::String::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c75acc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Contains", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(
        ::StringW, ::System::StringComparison)>(&::System::String::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c75b00;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Contains", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(char16_t)>(
        &::System::String::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c75b24;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Contains", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(char16_t)>(
        &::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c75b48;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(char16_t, int32_t)>(
        &::System::String::IndexOf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c75b58;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(char16_t, int32_t, int32_t)>(
        &::System::String::IndexOf)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3c75b64;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>)>(
        &::System::String::IndexOfAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c75c3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOfAny", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t)>(
        &::System::String::IndexOfAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c75e04;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOfAny", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t, int32_t)>(
        &::System::String::IndexOfAny)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3c75c48;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOfAny", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(
        char16_t, char16_t, int32_t, int32_t)>(&::System::String::IndexOfAny)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3c75e10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOfAny", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(char16_t, char16_t, char16_t,
                                              int32_t, int32_t)>(
        &::System::String::IndexOfAny)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c75e98;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOfAny", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfCharArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t, int32_t)>(
        &::System::String::IndexOfCharArray)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3c75ef0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOfCharArray", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.InitializeProbabilisticMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint32_t>,
                         ::System::ReadOnlySpan_1<char16_t>)>(
        &::System::String::InitializeProbabilisticMap)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3c75240;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "InitializeProbabilisticMap", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<char16_t>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ArrayContains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(char16_t, ::ArrayW<char16_t, ::Array<char16_t> *>)>(
        &::System::String::ArrayContains)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3c76020;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "ArrayContains", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IsCharBitSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::cordl_internals::Ptr<uint32_t>, uint8_t)>(
        &::System::String::IsCharBitSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3c75320;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IsCharBitSet", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                uint8_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.SetCharBit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint32_t>, uint8_t)>(
        &::System::String::SetCharBit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c7607c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "SetCharBit", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                uint8_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW)>(
        &::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c760a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW, int32_t)>(
        &::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c760b0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(
        ::StringW, ::System::StringComparison)>(&::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c75af0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW, int32_t,
                                              ::System::StringComparison)>(
        &::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c760c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t,
                                              ::System::StringComparison)>(
        &::System::String::IndexOf)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x3c760d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(char16_t)>(
        &::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c76418;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(char16_t, int32_t)>(
        &::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c76428;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(char16_t, int32_t, int32_t)>(
        &::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3c76430;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>)>(
        &::System::String::LastIndexOfAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c76514;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOfAny", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t)>(
        &::System::String::LastIndexOfAny)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c7664c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOfAny", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t, int32_t)>(
        &::System::String::LastIndexOfAny)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3c76520;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOfAny", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfCharArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t, int32_t)>(
        &::System::String::LastIndexOfCharArray)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3c76654;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOfCharArray", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW)>(
        &::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c76784;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW,
                                              ::System::StringComparison)>(
        &::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c76b3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t,
                                              ::System::StringComparison)>(
        &::System::String::LastIndexOf)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x3c76794;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::StringComparison>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>)>(&::System::String::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c76b4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::ArrayW<char16_t, ::Array<char16_t> *>)>(
        &::System::String::Ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3c76b50;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t, int32_t)>(
        &::System::String::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c76be0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::ArrayW<char16_t, ::Array<char16_t> *>, int32_t,
                              int32_t)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x3c76be4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(::cordl_internals::Ptr<char16_t>,
                                           int32_t, int32_t)>(
        &::System::String::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c76d90;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::cordl_internals::Ptr<char16_t>, int32_t,
                              int32_t)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3c76d94;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(::cordl_internals::Ptr<int8_t>,
                                           int32_t, int32_t)>(
        &::System::String::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c76f14;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<int8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::cordl_internals::Ptr<int8_t>, int32_t,
                              int32_t)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3c76f18;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<int8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.CreateStringForSByteConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::CreateStringForSByteConstructor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3c77090;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateStringForSByteConstructor",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(
        ::cordl_internals::Ptr<int8_t>, int32_t, int32_t,
        ::System::Text::Encoding *)>(&::System::String::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c7710c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<int8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Text::Encoding *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::cordl_internals::Ptr<int8_t>, int32_t, int32_t,
                              ::System::Text::Encoding *)>(
        &::System::String::Ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3c77110;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<int8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Text::Encoding *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(char16_t, int32_t)>(
        &::System::String::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c772d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(char16_t, int32_t)>(&::System::String::Ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3c772d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(::System::ReadOnlySpan_1<char16_t>)>(
        &::System::String::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c773f0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<char16_t>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>)>(
        &::System::String::Ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3c773f4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<char16_t>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.op_Implicit___System__ReadOnlySpan_1_char16_t_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::StringW)>(
        &::System::String::op_Implicit___System__ReadOnlySpan_1_char16_t_)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3c774b4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "op_Implicit", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(::System::String::*)()>(
        &::System::String::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c77504;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Clone", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW)>(&::System::String::Copy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3c77508;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Copy", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::String::*)(
        int32_t, ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t, int32_t)>(
        &::System::String::CopyTo)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3c7759c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CopyTo", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToCharArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<char16_t, ::Array<char16_t> *> (
        ::System::String::*)()>(&::System::String::ToCharArray)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3c77710;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "ToCharArray", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IsNullOrEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW)>(&::System::String::IsNullOrEmpty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3c71970;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IsNullOrEmpty", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IsNullOrWhiteSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW)>(&::System::String::IsNullOrWhiteSpace)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c777fc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IsNullOrWhiteSpace", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.GetRawStringData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ByRef<char16_t> (::System::String::*)()>(
        &::System::String::GetRawStringData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6f8a4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "GetRawStringData", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateStringFromEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::cordl_internals::Ptr<uint8_t>, int32_t,
                              ::System::Text::Encoding *)>(
        &::System::String::CreateStringFromEncoding)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3c778ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateStringFromEncoding", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Text::Encoding *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateFromChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(char16_t)>(&::System::String::CreateFromChar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c77974;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateFromChar", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.wstrcpy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<char16_t>,
                         ::cordl_internals::Ptr<char16_t>, int32_t)>(
        &::System::String::wstrcpy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c714c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "wstrcpy", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)()>(
        &::System::String::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c77998;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::System::String *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::System::String *>::get(),
            3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c7799c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "ToString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.System_Collections_Generic_IEnumerable_System_Char__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<char16_t> *(
        ::System::String::*)()>(
        &::System::String::
            System_Collections_Generic_IEnumerable_System_Char__GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3c779a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator *(::System::String::*)()>(
        &::System::String::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3c779fc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.Collections.IEnumerable.GetEnumerator",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.wcslen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::cordl_internals::Ptr<char16_t>)>(
        &::System::String::wcslen)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3c77a58;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "wcslen", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<char16_t>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.GetTypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::TypeCode (::System::String::*)()>(
        &::System::String::GetTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c77b60;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "GetTypeCode", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.System_IConvertible_ToBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77b68;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToBoolean",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<char16_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77bd0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToChar", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToSByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int8_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77c38;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToSByte", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint8_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77ca0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToByte", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int16_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77d08;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToInt16", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.System_IConvertible_ToUInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint16_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77d70;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToUInt16",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77dd8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToInt32", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.System_IConvertible_ToUInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77e40;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToUInt32",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int64_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77ea8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToInt64", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.System_IConvertible_ToUInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint64_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77f10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToUInt64",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.System_IConvertible_ToSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77f78;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToSingle",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.System_IConvertible_ToDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<double_t (::System::String::*)(::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c77fe0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToDouble",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.System_IConvertible_ToDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Decimal (::System::String::*)(
        ::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c78048;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToDecimal",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.System_IConvertible_ToDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::DateTime (::System::String::*)(
        ::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c780b0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToDateTime",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.System_IConvertible_ToType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(
        ::System::String::*)(::System::Type *, ::System::IFormatProvider *)>(
        &::System::String::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3c78118;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "System.IConvertible.ToType", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Type *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IFormatProvider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Normalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::System::Text::NormalizationForm)>(&::System::String::Normalize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c78188;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Normalize", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Text::NormalizationForm>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)()>(
        &::System::String::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c781f0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "get_Length", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfUnchecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t)>(
        &::System::String::IndexOfUnchecked)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3c781f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOfUnchecked", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IndexOfUncheckedIgnoreCase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t)>(
        &::System::String::IndexOfUncheckedIgnoreCase)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3c782f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IndexOfUncheckedIgnoreCase", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.LastIndexOfUnchecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t)>(
        &::System::String::LastIndexOfUnchecked)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3c784c4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOfUnchecked", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::System::String.LastIndexOfUncheckedIgnoreCase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::String::*)(::StringW, int32_t, int32_t)>(
        &::System::String::LastIndexOfUncheckedIgnoreCase)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3c78594;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "LastIndexOfUncheckedIgnoreCase",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.StartsWithOrdinalUnchecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::String::*)(::StringW)>(
        &::System::String::StartsWithOrdinalUnchecked)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c78724;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "StartsWithOrdinalUnchecked", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.FastAllocateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(int32_t)>(
        &::System::String::FastAllocateString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c7196c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "FastAllocateString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.InternalIsInterned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW)>(
        &::System::String::InternalIsInterned)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c7877c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "InternalIsInterned", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.InternalIntern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW)>(&::System::String::InternalIntern)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c78780;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "InternalIntern", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, int32_t, int32_t)>(
        &::System::String::memset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3c78784;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "memset", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memcpy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>,
                         ::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::memcpy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c7882c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "memcpy", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String._cordl_bzero
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::_cordl_bzero)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c78834;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "bzero", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.bzero_aligned_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::bzero_aligned_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c78840;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "bzero_aligned_1", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.bzero_aligned_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::bzero_aligned_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c78848;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "bzero_aligned_2", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.bzero_aligned_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::bzero_aligned_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c78850;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "bzero_aligned_4", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.bzero_aligned_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::bzero_aligned_8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c78858;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "bzero_aligned_8", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memcpy_aligned_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>,
                         ::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::memcpy_aligned_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c78860;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "memcpy_aligned_1", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memcpy_aligned_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>,
                         ::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::memcpy_aligned_2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c7886c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "memcpy_aligned_2", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memcpy_aligned_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>,
                         ::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::memcpy_aligned_4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c78878;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "memcpy_aligned_4", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.memcpy_aligned_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>,
                         ::cordl_internals::Ptr<uint8_t>, int32_t)>(
        &::System::String::memcpy_aligned_8)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c78884;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "memcpy_aligned_8", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<uint8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(::cordl_internals::Ptr<int8_t>,
                                                int32_t, int32_t)>(
        &::System::String::CreateString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c772c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<int8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::cordl_internals::Ptr<char16_t>, int32_t, int32_t)>(
        &::System::String::CreateString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c78890;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t, int32_t)>(
        &::System::String::CreateString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c788a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::ArrayW<char16_t, ::Array<char16_t> *>)>(
        &::System::String::CreateString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6f870;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(char16_t, int32_t)>(
        &::System::String::CreateString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c788b0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::cordl_internals::Ptr<int8_t>, int32_t, int32_t,
        ::System::Text::Encoding *)>(&::System::String::CreateString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3c788bc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::cordl_internals::Ptr<int8_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Text::Encoding *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.CreateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::String::*)(
        ::System::ReadOnlySpan_1<char16_t>)>(&::System::String::CreateString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c788d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "CreateString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::ReadOnlySpan_1<char16_t>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.get_Chars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<char16_t (::System::String::*)(int32_t)>(
        &::System::String::get_Chars)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3c6cbb8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "get_Chars", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.Intern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW)>(&::System::String::Intern)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3c788dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "Intern", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::String.IsInterned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW)>(&::System::String::IsInterned)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3c78930;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::System::String *>::get(),
        "IsInterned", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
constexpr int32_t &System::String::__cordl_internal_get__stringLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____stringLength;
}
constexpr int32_t const &
System::String::__cordl_internal_get__stringLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____stringLength;
}
constexpr void
System::String::__cordl_internal_set__stringLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  this->____stringLength = value;
}
constexpr char16_t &System::String::__cordl_internal_get__firstChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____firstChar;
}
constexpr char16_t const &
System::String::__cordl_internal_get__firstChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____firstChar;
}
constexpr void System::String::__cordl_internal_set__firstChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  this->____firstChar = value;
}
inline void System::String::setStaticF_Empty(::StringW value) {
  ::cordl_internals::setStaticField<
      ::StringW, "Empty",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::String::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<
      ::StringW, "Empty",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get>();
}
inline bool System::String::EqualsHelper(::StringW strA, ::StringW strB) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "EqualsHelper", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, strA, strB);
}
inline int32_t
System::String::CompareOrdinalHelper(::StringW strA, int32_t indexA,
                                     int32_t countA, ::StringW strB,
                                     int32_t indexB, int32_t countB) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CompareOrdinalHelper", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, indexA, countA, strB, indexB, countB);
}
inline int32_t System::String::CompareOrdinalHelper(::StringW strA,
                                                    ::StringW strB) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CompareOrdinalHelper", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, strB);
}
inline int32_t System::String::Compare(::StringW strA, ::StringW strB) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Compare", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, strB);
}
inline int32_t System::String::Compare(::StringW strA, ::StringW strB,
                                       bool ignoreCase) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Compare", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, strB, ignoreCase);
}
inline int32_t
System::String::Compare(::StringW strA, ::StringW strB,
                        ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Compare", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, strB, comparisonType);
}
inline int32_t
System::String::Compare(::StringW strA, ::StringW strB,
                        ::System::Globalization::CultureInfo *culture,
                        ::System::Globalization::CompareOptions options) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Compare", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Globalization::CultureInfo *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Globalization::CompareOptions>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, strB, culture, options);
}
inline int32_t
System::String::Compare(::StringW strA, ::StringW strB, bool ignoreCase,
                        ::System::Globalization::CultureInfo *culture) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Compare", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Globalization::CultureInfo *>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, strB, ignoreCase, culture);
}
inline int32_t System::String::Compare(::StringW strA, int32_t indexA,
                                       ::StringW strB, int32_t indexB,
                                       int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Compare", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, indexA, strB, indexB, length);
}
inline int32_t System::String::Compare(::StringW strA, int32_t indexA,
                                       ::StringW strB, int32_t indexB,
                                       int32_t length, bool ignoreCase) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Compare", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, indexA, strB, indexB, length,
      ignoreCase);
}
inline int32_t
System::String::Compare(::StringW strA, int32_t indexA, ::StringW strB,
                        int32_t indexB, int32_t length,
                        ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Compare", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, indexA, strB, indexB, length,
      comparisonType);
}
inline int32_t System::String::CompareOrdinal(::StringW strA, ::StringW strB) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CompareOrdinal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, strB);
}
inline int32_t
System::String::CompareOrdinal(::System::ReadOnlySpan_1<char16_t> strA,
                               ::System::ReadOnlySpan_1<char16_t> strB) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CompareOrdinal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<char16_t>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, strB);
}
inline int32_t System::String::CompareOrdinal(::StringW strA, int32_t indexA,
                                              ::StringW strB, int32_t indexB,
                                              int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CompareOrdinal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, strA, indexA, strB, indexB, length);
}
inline int32_t System::String::CompareTo(::System::Object *value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CompareTo", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value);
}
inline int32_t System::String::CompareTo(::StringW strB) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CompareTo", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, strB);
}
inline bool System::String::EndsWith(::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "EndsWith", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline bool
System::String::EndsWith(::StringW value,
                         ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "EndsWith", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value, comparisonType);
}
inline bool System::String::EndsWith(char16_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "EndsWith", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline bool System::String::Equals(::System::Object *obj) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, obj);
}
inline bool System::String::Equals(::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Equals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline bool System::String::Equals(::StringW value,
                                   ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Equals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value, comparisonType);
}
inline bool System::String::Equals(::StringW a, ::StringW b) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Equals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, a, b);
}
inline bool System::String::Equals(::StringW a, ::StringW b,
                                   ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Equals", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, a, b, comparisonType);
}
inline bool System::String::op_Equality(::StringW a, ::StringW b) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "op_Equality", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, a, b);
}
inline bool System::String::op_Inequality(::StringW a, ::StringW b) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "op_Inequality", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, a, b);
}
inline int32_t System::String::GetHashCode() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline int32_t System::String::GetLegacyNonRandomizedHashCode() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "GetLegacyNonRandomizedHashCode",
      std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline bool System::String::StartsWith(::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "StartsWith", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline bool
System::String::StartsWith(::StringW value,
                           ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "StartsWith", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value, comparisonType);
}
inline bool System::String::StartsWith(char16_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "StartsWith", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline void System::String::CheckStringComparison(
    ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CheckStringComparison", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, comparisonType);
}
inline void System::String::FillStringChecked(::StringW dest, int32_t destPos,
                                              ::StringW src) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "FillStringChecked", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, destPos, src);
}
inline ::StringW System::String::Concat(::System::Object *arg0,
                                        ::System::Object *arg1) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Concat", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, arg0, arg1);
}
inline ::StringW System::String::Concat(::System::Object *arg0,
                                        ::System::Object *arg1,
                                        ::System::Object *arg2) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Concat", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, arg0, arg1, arg2);
}
inline ::StringW System::String::Concat(
    ::ArrayW<::System::Object *, ::Array<::System::Object *> *> args) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Concat", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::System::Object *, ::Array<::System::Object *> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, args);
}
inline ::StringW System::String::Concat(::StringW str0, ::StringW str1) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Concat", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, str0, str1);
}
inline ::StringW System::String::Concat(::StringW str0, ::StringW str1,
                                        ::StringW str2) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Concat", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, str0, str1, str2);
}
inline ::StringW System::String::Concat(::StringW str0, ::StringW str1,
                                        ::StringW str2, ::StringW str3) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Concat", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, str0, str1, str2, str3);
}
inline ::StringW
System::String::Concat(::ArrayW<::StringW, ::Array<::StringW> *> values) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Concat", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::StringW, ::Array<::StringW> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, values);
}
inline ::StringW System::String::Format(::StringW format,
                                        ::System::Object *arg0) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Format", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, format, arg0);
}
inline ::StringW System::String::Format(::StringW format,
                                        ::System::Object *arg0,
                                        ::System::Object *arg1) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Format", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, format, arg0, arg1);
}
inline ::StringW System::String::Format(::StringW format,
                                        ::System::Object *arg0,
                                        ::System::Object *arg1,
                                        ::System::Object *arg2) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Format", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, format, arg0, arg1, arg2);
}
inline ::StringW System::String::Format(
    ::StringW format,
    ::ArrayW<::System::Object *, ::Array<::System::Object *> *> args) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Format", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::System::Object *, ::Array<::System::Object *> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, format, args);
}
inline ::StringW System::String::Format(::System::IFormatProvider *provider,
                                        ::StringW format,
                                        ::System::Object *arg0) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Format", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, provider, format, arg0);
}
inline ::StringW System::String::Format(::System::IFormatProvider *provider,
                                        ::StringW format,
                                        ::System::Object *arg0,
                                        ::System::Object *arg1) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Format", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, provider, format, arg0, arg1);
}
inline ::StringW System::String::Format(::System::IFormatProvider *provider,
                                        ::StringW format,
                                        ::System::Object *arg0,
                                        ::System::Object *arg1,
                                        ::System::Object *arg2) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Format", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, provider, format, arg0, arg1, arg2);
}
inline ::StringW System::String::Format(
    ::System::IFormatProvider *provider, ::StringW format,
    ::ArrayW<::System::Object *, ::Array<::System::Object *> *> args) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Format", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<
              ::System::Object *, ::Array<::System::Object *> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, provider, format, args);
}
inline ::StringW
System::String::FormatHelper(::System::IFormatProvider *provider,
                             ::StringW format, ::System::ParamsArray args) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "FormatHelper", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ParamsArray>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, provider, format, args);
}
inline ::StringW System::String::Insert(int32_t startIndex, ::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Insert", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, startIndex, value);
}
inline ::StringW
System::String::Join(char16_t separator,
                     ::ArrayW<::StringW, ::Array<::StringW> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Join", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::StringW, ::Array<::StringW> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, separator, value);
}
inline ::StringW
System::String::Join(char16_t separator,
                     ::ArrayW<::StringW, ::Array<::StringW> *> value,
                     int32_t startIndex, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Join", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, separator, value, startIndex, count);
}
inline ::StringW
System::String::Join(::StringW separator,
                     ::ArrayW<::StringW, ::Array<::StringW> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Join", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::StringW, ::Array<::StringW> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, separator, value);
}
template <typename T>
inline ::StringW
System::String::Join(::StringW separator,
                     ::System::Collections::Generic::IEnumerable_1<T> *values) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::System::String *>::get(),
          "Join",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 2>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Collections::Generic::IEnumerable_1<T>
                      *>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, separator, values);
}
inline ::StringW System::String::Join(
    ::StringW separator,
    ::System::Collections::Generic::IEnumerable_1<::StringW> *values) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Join", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::IEnumerable_1<::StringW>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, separator, values);
}
inline ::StringW
System::String::Join(::StringW separator,
                     ::ArrayW<::StringW, ::Array<::StringW> *> value,
                     int32_t startIndex, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Join", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, separator, value, startIndex, count);
}
template <typename T>
inline ::StringW System::String::JoinCore(
    ::cordl_internals::Ptr<char16_t> separator, int32_t separatorLength,
    ::System::Collections::Generic::IEnumerable_1<T> *values) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::System::String *>::get(),
          "JoinCore",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
          ::std::array<const Il2CppType *, 3>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::cordl_internals::Ptr<char16_t>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Collections::Generic::IEnumerable_1<T>
                      *>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  T>::get()}));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, separator, separatorLength, values);
}
inline ::StringW
System::String::JoinCore(::cordl_internals::Ptr<char16_t> separator,
                         int32_t separatorLength,
                         ::ArrayW<::StringW, ::Array<::StringW> *> value,
                         int32_t startIndex, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "JoinCore", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, separator, separatorLength, value,
      startIndex, count);
}
inline ::StringW System::String::PadLeft(int32_t totalWidth) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "PadLeft", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, totalWidth);
}
inline ::StringW System::String::PadLeft(int32_t totalWidth,
                                         char16_t paddingChar) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "PadLeft", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, totalWidth, paddingChar);
}
inline ::StringW System::String::PadRight(int32_t totalWidth,
                                          char16_t paddingChar) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "PadRight", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, totalWidth, paddingChar);
}
inline ::StringW System::String::Remove(int32_t startIndex, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Remove", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, startIndex, count);
}
inline ::StringW System::String::Remove(int32_t startIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Remove", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, startIndex);
}
inline ::StringW System::String::Replace(char16_t oldChar, char16_t newChar) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Replace", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, oldChar, newChar);
}
inline ::StringW System::String::Replace(::StringW oldValue,
                                         ::StringW newValue) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Replace", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, oldValue, newValue);
}
inline ::StringW
System::String::ReplaceHelper(int32_t oldValueLength, ::StringW newValue,
                              ::System::ReadOnlySpan_1<int32_t> indices) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "ReplaceHelper", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<int32_t>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, oldValueLength, newValue, indices);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *>
System::String::Split(char16_t separator,
                      ::System::StringSplitOptions options) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Split", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringSplitOptions>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, separator, options);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *>
System::String::Split(::ArrayW<char16_t, ::Array<char16_t> *> separator) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Split", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, separator);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *>
System::String::Split(::ArrayW<char16_t, ::Array<char16_t> *> separator,
                      int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Split", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, separator, count);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *>
System::String::Split(::ArrayW<char16_t, ::Array<char16_t> *> separator,
                      ::System::StringSplitOptions options) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Split", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringSplitOptions>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, separator, options);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *>
System::String::Split(::ArrayW<char16_t, ::Array<char16_t> *> separator,
                      int32_t count, ::System::StringSplitOptions options) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Split", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringSplitOptions>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, separator, count, options);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *>
System::String::SplitInternal(::System::ReadOnlySpan_1<char16_t> separators,
                              int32_t count,
                              ::System::StringSplitOptions options) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "SplitInternal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringSplitOptions>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, separators, count, options);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *>
System::String::Split(::ArrayW<::StringW, ::Array<::StringW> *> separator,
                      ::System::StringSplitOptions options) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Split", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringSplitOptions>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, separator, options);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *> System::String::SplitInternal(
    ::StringW separator, ::ArrayW<::StringW, ::Array<::StringW> *> separators,
    int32_t count, ::System::StringSplitOptions options) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "SplitInternal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringSplitOptions>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, separator, separators, count, options);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *>
System::String::SplitInternal(::StringW separator, int32_t count,
                              ::System::StringSplitOptions options) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "SplitInternal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringSplitOptions>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, separator, count, options);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *>
System::String::SplitKeepEmptyEntries(
    ::System::ReadOnlySpan_1<int32_t> sepList,
    ::System::ReadOnlySpan_1<int32_t> lengthList, int32_t defaultLength,
    int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "SplitKeepEmptyEntries", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, sepList, lengthList, defaultLength, count);
}
inline ::ArrayW<::StringW, ::Array<::StringW> *>
System::String::SplitOmitEmptyEntries(
    ::System::ReadOnlySpan_1<int32_t> sepList,
    ::System::ReadOnlySpan_1<int32_t> lengthList, int32_t defaultLength,
    int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "SplitOmitEmptyEntries", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::StringW, ::Array<::StringW> *>, false>(
      this, ___internal_method, sepList, lengthList, defaultLength, count);
}
inline void System::String::MakeSeparatorList(
    ::System::ReadOnlySpan_1<char16_t> separators,
    ::ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>>
        sepListBuilder) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "MakeSeparatorList", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
              ::System::Collections::Generic::ValueListBuilder_1<int32_t>>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, separators, sepListBuilder);
}
inline void System::String::MakeSeparatorList(
    ::StringW separator,
    ::ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>>
        sepListBuilder) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "MakeSeparatorList", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
              ::System::Collections::Generic::ValueListBuilder_1<int32_t>>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, separator, sepListBuilder);
}
inline void System::String::MakeSeparatorList(
    ::ArrayW<::StringW, ::Array<::StringW> *> separators,
    ::ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>>
        sepListBuilder,
    ::ByRef<::System::Collections::Generic::ValueListBuilder_1<int32_t>>
        lengthListBuilder) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "MakeSeparatorList", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::StringW, ::Array<::StringW> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
              ::System::Collections::Generic::ValueListBuilder_1<int32_t>>>::
              get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<
              ::System::Collections::Generic::ValueListBuilder_1<int32_t>>>::
              get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, separators, sepListBuilder, lengthListBuilder);
}
inline ::StringW System::String::Substring(int32_t startIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Substring", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, startIndex);
}
inline ::StringW System::String::Substring(int32_t startIndex, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Substring", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, startIndex, length);
}
inline ::StringW System::String::InternalSubString(int32_t startIndex,
                                                   int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "InternalSubString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, startIndex, length);
}
inline ::StringW System::String::ToLower() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "ToLower", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method);
}
inline ::StringW
System::String::ToLower(::System::Globalization::CultureInfo *culture) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "ToLower", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Globalization::CultureInfo *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, culture);
}
inline ::StringW System::String::ToLowerInvariant() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "ToLowerInvariant", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method);
}
inline ::StringW System::String::ToUpper() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "ToUpper", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method);
}
inline ::StringW
System::String::ToUpper(::System::Globalization::CultureInfo *culture) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "ToUpper", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Globalization::CultureInfo *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, culture);
}
inline ::StringW System::String::ToUpperInvariant() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "ToUpperInvariant", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method);
}
inline ::StringW System::String::Trim() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Trim", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method);
}
inline ::StringW System::String::Trim(char16_t trimChar) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Trim", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, trimChar);
}
inline ::StringW
System::String::Trim(::ArrayW<char16_t, ::Array<char16_t> *> trimChars) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Trim", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, trimChars);
}
inline ::StringW System::String::TrimStart() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "TrimStart", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method);
}
inline ::StringW System::String::TrimStart(char16_t trimChar) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "TrimStart", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, trimChar);
}
inline ::StringW
System::String::TrimStart(::ArrayW<char16_t, ::Array<char16_t> *> trimChars) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "TrimStart", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, trimChars);
}
inline ::StringW System::String::TrimEnd() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "TrimEnd", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method);
}
inline ::StringW System::String::TrimEnd(char16_t trimChar) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "TrimEnd", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, trimChar);
}
inline ::StringW
System::String::TrimEnd(::ArrayW<char16_t, ::Array<char16_t> *> trimChars) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "TrimEnd", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, trimChars);
}
inline ::StringW
System::String::TrimWhiteSpaceHelper(::System::String_TrimType trimType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "TrimWhiteSpaceHelper", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::String_TrimType>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, trimType);
}
inline ::StringW
System::String::TrimHelper(::cordl_internals::Ptr<char16_t> trimChars,
                           int32_t trimCharsLength,
                           ::System::String_TrimType trimType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "TrimHelper", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::String_TrimType>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, trimChars, trimCharsLength, trimType);
}
inline ::StringW System::String::CreateTrimmedString(int32_t start,
                                                     int32_t end) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateTrimmedString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, start, end);
}
inline bool System::String::Contains(::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Contains", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline bool
System::String::Contains(::StringW value,
                         ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Contains", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value, comparisonType);
}
inline bool System::String::Contains(char16_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Contains", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline int32_t System::String::IndexOf(char16_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value);
}
inline int32_t System::String::IndexOf(char16_t value, int32_t startIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex);
}
inline int32_t System::String::IndexOf(char16_t value, int32_t startIndex,
                                       int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex, count);
}
inline int32_t
System::String::IndexOfAny(::ArrayW<char16_t, ::Array<char16_t> *> anyOf) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOfAny", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, anyOf);
}
inline int32_t
System::String::IndexOfAny(::ArrayW<char16_t, ::Array<char16_t> *> anyOf,
                           int32_t startIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOfAny", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, anyOf, startIndex);
}
inline int32_t
System::String::IndexOfAny(::ArrayW<char16_t, ::Array<char16_t> *> anyOf,
                           int32_t startIndex, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOfAny", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, anyOf, startIndex, count);
}
inline int32_t System::String::IndexOfAny(char16_t value1, char16_t value2,
                                          int32_t startIndex, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOfAny", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value1, value2, startIndex, count);
}
inline int32_t System::String::IndexOfAny(char16_t value1, char16_t value2,
                                          char16_t value3, int32_t startIndex,
                                          int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOfAny", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value1, value2, value3, startIndex, count);
}
inline int32_t
System::String::IndexOfCharArray(::ArrayW<char16_t, ::Array<char16_t> *> anyOf,
                                 int32_t startIndex, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOfCharArray", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, anyOf, startIndex, count);
}
inline void System::String::InitializeProbabilisticMap(
    ::cordl_internals::Ptr<uint32_t> charMap,
    ::System::ReadOnlySpan_1<char16_t> anyOf) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "InitializeProbabilisticMap", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<char16_t>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, charMap, anyOf);
}
inline bool
System::String::ArrayContains(char16_t searchChar,
                              ::ArrayW<char16_t, ::Array<char16_t> *> anyOf) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "ArrayContains", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, searchChar, anyOf);
}
inline bool
System::String::IsCharBitSet(::cordl_internals::Ptr<uint32_t> charMap,
                             uint8_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IsCharBitSet", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              uint8_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, charMap, value);
}
inline void System::String::SetCharBit(::cordl_internals::Ptr<uint32_t> charMap,
                                       uint8_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "SetCharBit", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              uint8_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, charMap, value);
}
inline int32_t System::String::IndexOf(::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value);
}
inline int32_t System::String::IndexOf(::StringW value, int32_t startIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex);
}
inline int32_t
System::String::IndexOf(::StringW value,
                        ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, comparisonType);
}
inline int32_t
System::String::IndexOf(::StringW value, int32_t startIndex,
                        ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex, comparisonType);
}
inline int32_t
System::String::IndexOf(::StringW value, int32_t startIndex, int32_t count,
                        ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex, count, comparisonType);
}
inline int32_t System::String::LastIndexOf(char16_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value);
}
inline int32_t System::String::LastIndexOf(char16_t value, int32_t startIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex);
}
inline int32_t System::String::LastIndexOf(char16_t value, int32_t startIndex,
                                           int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex, count);
}
inline int32_t
System::String::LastIndexOfAny(::ArrayW<char16_t, ::Array<char16_t> *> anyOf) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOfAny", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, anyOf);
}
inline int32_t
System::String::LastIndexOfAny(::ArrayW<char16_t, ::Array<char16_t> *> anyOf,
                               int32_t startIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOfAny", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, anyOf, startIndex);
}
inline int32_t
System::String::LastIndexOfAny(::ArrayW<char16_t, ::Array<char16_t> *> anyOf,
                               int32_t startIndex, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOfAny", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, anyOf, startIndex, count);
}
inline int32_t System::String::LastIndexOfCharArray(
    ::ArrayW<char16_t, ::Array<char16_t> *> anyOf, int32_t startIndex,
    int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOfCharArray", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, anyOf, startIndex, count);
}
inline int32_t System::String::LastIndexOf(::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value);
}
inline int32_t
System::String::LastIndexOf(::StringW value,
                            ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, comparisonType);
}
inline int32_t
System::String::LastIndexOf(::StringW value, int32_t startIndex, int32_t count,
                            ::System::StringComparison comparisonType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOf", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::StringComparison>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex, count, comparisonType);
}
inline void
System::String::_ctor(::ArrayW<char16_t, ::Array<char16_t> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::StringW
System::String::Ctor(::ArrayW<char16_t, ::Array<char16_t> *> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, value);
}
inline void System::String::_ctor(::ArrayW<char16_t, ::Array<char16_t> *> value,
                                  int32_t startIndex, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value, startIndex, length);
}
inline ::StringW
System::String::Ctor(::ArrayW<char16_t, ::Array<char16_t> *> value,
                     int32_t startIndex, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, value, startIndex, length);
}
inline void System::String::_ctor(::cordl_internals::Ptr<char16_t> value,
                                  int32_t startIndex, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value, startIndex, length);
}
inline ::StringW System::String::Ctor(::cordl_internals::Ptr<char16_t> ptr,
                                      int32_t startIndex, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, ptr, startIndex, length);
}
inline void System::String::_ctor(::cordl_internals::Ptr<int8_t> value,
                                  int32_t startIndex, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<int8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value, startIndex, length);
}
inline ::StringW System::String::Ctor(::cordl_internals::Ptr<int8_t> value,
                                      int32_t startIndex, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<int8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, value, startIndex, length);
}
inline ::StringW System::String::CreateStringForSByteConstructor(
    ::cordl_internals::Ptr<uint8_t> pb, int32_t numBytes) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateStringForSByteConstructor",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, pb, numBytes);
}
inline void System::String::_ctor(::cordl_internals::Ptr<int8_t> value,
                                  int32_t startIndex, int32_t length,
                                  ::System::Text::Encoding *enc) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<int8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Text::Encoding *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value, startIndex, length, enc);
}
inline ::StringW System::String::Ctor(::cordl_internals::Ptr<int8_t> value,
                                      int32_t startIndex, int32_t length,
                                      ::System::Text::Encoding *enc) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<int8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Text::Encoding *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, value, startIndex, length, enc);
}
inline void System::String::_ctor(char16_t c, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, c, count);
}
inline ::StringW System::String::Ctor(char16_t c, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, c, count);
}
inline void System::String::_ctor(::System::ReadOnlySpan_1<char16_t> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<char16_t>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::StringW
System::String::Ctor(::System::ReadOnlySpan_1<char16_t> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<char16_t>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, value);
}
template <typename TState>
inline ::StringW System::String::Create(
    int32_t length, TState state,
    ::System::Buffers::SpanAction_2<char16_t, TState> *action) {
  static auto *___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
              ::System::String *>::get(),
          "Create",
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  TState>::get()},
          ::std::array<const Il2CppType *, 3>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  TState>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::System::Buffers::SpanAction_2<char16_t, TState>
                      *>::get()})));
  static auto *___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
          ___internal_method_base,
          std::array<const Il2CppClass *, 1>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                  TState>::get()}));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, length, state, action);
}
inline ::System::ReadOnlySpan_1<char16_t>
System::String::op_Implicit___System__ReadOnlySpan_1_char16_t_(
    ::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "op_Implicit", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>,
                                             false>(nullptr, ___internal_method,
                                                    value);
}
inline ::System::Object *System::String::Clone() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Clone", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method);
}
inline ::StringW System::String::Copy(::StringW str) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Copy", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, str);
}
inline void
System::String::CopyTo(int32_t sourceIndex,
                       ::ArrayW<char16_t, ::Array<char16_t> *> destination,
                       int32_t destinationIndex, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CopyTo", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, sourceIndex, destination, destinationIndex,
      count);
}
inline ::ArrayW<char16_t, ::Array<char16_t> *> System::String::ToCharArray() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "ToCharArray", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<char16_t, ::Array<char16_t> *>, false>(this, ___internal_method);
}
inline bool System::String::IsNullOrEmpty(::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IsNullOrEmpty", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, value);
}
inline bool System::String::IsNullOrWhiteSpace(::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IsNullOrWhiteSpace", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, value);
}
inline ::ByRef<char16_t> System::String::GetRawStringData() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "GetRawStringData", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<char16_t>, false>(
      this, ___internal_method);
}
inline ::StringW
System::String::CreateStringFromEncoding(::cordl_internals::Ptr<uint8_t> bytes,
                                         int32_t byteLength,
                                         ::System::Text::Encoding *encoding) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateStringFromEncoding", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Text::Encoding *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, bytes, byteLength, encoding);
}
inline ::StringW System::String::CreateFromChar(char16_t c) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateFromChar", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, c);
}
inline void System::String::wstrcpy(::cordl_internals::Ptr<char16_t> dmem,
                                    ::cordl_internals::Ptr<char16_t> smem,
                                    int32_t charCount) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "wstrcpy", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dmem, smem, charCount);
}
inline ::StringW System::String::ToString() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method);
}
inline ::StringW System::String::ToString(::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "ToString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, provider);
}
inline ::System::Collections::Generic::IEnumerator_1<char16_t> *System::String::
    System_Collections_Generic_IEnumerable_System_Char__GetEnumerator() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator",
      std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::IEnumerator_1<char16_t> *, false>(
      this, ___internal_method);
}
inline ::System::Collections::IEnumerator *
System::String::System_Collections_IEnumerable_GetEnumerator() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.Collections.IEnumerable.GetEnumerator",
      std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::IEnumerator *, false>(this, ___internal_method);
}
inline int32_t System::String::wcslen(::cordl_internals::Ptr<char16_t> ptr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "wcslen", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<char16_t>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, ptr);
}
inline ::System::TypeCode System::String::GetTypeCode() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "GetTypeCode", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode, false>(
      this, ___internal_method);
}
inline bool System::String::System_IConvertible_ToBoolean(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToBoolean", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, provider);
}
inline char16_t System::String::System_IConvertible_ToChar(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToChar", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(
      this, ___internal_method, provider);
}
inline int8_t System::String::System_IConvertible_ToSByte(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToSByte", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(
      this, ___internal_method, provider);
}
inline uint8_t System::String::System_IConvertible_ToByte(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToByte", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(
      this, ___internal_method, provider);
}
inline int16_t System::String::System_IConvertible_ToInt16(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToInt16", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(
      this, ___internal_method, provider);
}
inline uint16_t System::String::System_IConvertible_ToUInt16(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToUInt16", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(
      this, ___internal_method, provider);
}
inline int32_t System::String::System_IConvertible_ToInt32(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToInt32", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, provider);
}
inline uint32_t System::String::System_IConvertible_ToUInt32(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToUInt32", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      this, ___internal_method, provider);
}
inline int64_t System::String::System_IConvertible_ToInt64(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToInt64", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(
      this, ___internal_method, provider);
}
inline uint64_t System::String::System_IConvertible_ToUInt64(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToUInt64", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(
      this, ___internal_method, provider);
}
inline float_t System::String::System_IConvertible_ToSingle(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToSingle", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      this, ___internal_method, provider);
}
inline double_t System::String::System_IConvertible_ToDouble(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToDouble", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(
      this, ___internal_method, provider);
}
inline ::System::Decimal System::String::System_IConvertible_ToDecimal(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToDecimal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(
      this, ___internal_method, provider);
}
inline ::System::DateTime System::String::System_IConvertible_ToDateTime(
    ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToDateTime",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(
      this, ___internal_method, provider);
}
inline ::System::Object *System::String::System_IConvertible_ToType(
    ::System::Type *type, ::System::IFormatProvider *provider) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "System.IConvertible.ToType", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Type *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IFormatProvider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, type, provider);
}
inline ::StringW
System::String::Normalize(::System::Text::NormalizationForm normalizationForm) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Normalize", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Text::NormalizationForm>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, normalizationForm);
}
inline int32_t System::String::get_Length() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "get_Length", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline int32_t System::String::IndexOfUnchecked(::StringW value,
                                                int32_t startIndex,
                                                int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOfUnchecked", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex, count);
}
inline int32_t System::String::IndexOfUncheckedIgnoreCase(::StringW value,
                                                          int32_t startIndex,
                                                          int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IndexOfUncheckedIgnoreCase", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex, count);
}
inline int32_t System::String::LastIndexOfUnchecked(::StringW value,
                                                    int32_t startIndex,
                                                    int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOfUnchecked", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex, count);
}
inline int32_t System::String::LastIndexOfUncheckedIgnoreCase(
    ::StringW value, int32_t startIndex, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "LastIndexOfUncheckedIgnoreCase",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, value, startIndex, count);
}
inline bool System::String::StartsWithOrdinalUnchecked(::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "StartsWithOrdinalUnchecked", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline ::StringW System::String::FastAllocateString(int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "FastAllocateString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, length);
}
inline ::StringW System::String::InternalIsInterned(::StringW str) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "InternalIsInterned", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, str);
}
inline ::StringW System::String::InternalIntern(::StringW str) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "InternalIntern", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, str);
}
inline void System::String::memset(::cordl_internals::Ptr<uint8_t> dest,
                                   int32_t val, int32_t len) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "memset", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, val, len);
}
inline void System::String::memcpy(::cordl_internals::Ptr<uint8_t> dest,
                                   ::cordl_internals::Ptr<uint8_t> src,
                                   int32_t size) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "memcpy", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, src, size);
}
inline void System::String::_cordl_bzero(::cordl_internals::Ptr<uint8_t> dest,
                                         int32_t len) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "bzero", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, len);
}
inline void
System::String::bzero_aligned_1(::cordl_internals::Ptr<uint8_t> dest,
                                int32_t len) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "bzero_aligned_1", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, len);
}
inline void
System::String::bzero_aligned_2(::cordl_internals::Ptr<uint8_t> dest,
                                int32_t len) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "bzero_aligned_2", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, len);
}
inline void
System::String::bzero_aligned_4(::cordl_internals::Ptr<uint8_t> dest,
                                int32_t len) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "bzero_aligned_4", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, len);
}
inline void
System::String::bzero_aligned_8(::cordl_internals::Ptr<uint8_t> dest,
                                int32_t len) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "bzero_aligned_8", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, len);
}
inline void
System::String::memcpy_aligned_1(::cordl_internals::Ptr<uint8_t> dest,
                                 ::cordl_internals::Ptr<uint8_t> src,
                                 int32_t size) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "memcpy_aligned_1", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, src, size);
}
inline void
System::String::memcpy_aligned_2(::cordl_internals::Ptr<uint8_t> dest,
                                 ::cordl_internals::Ptr<uint8_t> src,
                                 int32_t size) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "memcpy_aligned_2", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, src, size);
}
inline void
System::String::memcpy_aligned_4(::cordl_internals::Ptr<uint8_t> dest,
                                 ::cordl_internals::Ptr<uint8_t> src,
                                 int32_t size) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "memcpy_aligned_4", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, src, size);
}
inline void
System::String::memcpy_aligned_8(::cordl_internals::Ptr<uint8_t> dest,
                                 ::cordl_internals::Ptr<uint8_t> src,
                                 int32_t size) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "memcpy_aligned_8", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, dest, src, size);
}
inline ::StringW
System::String::CreateString(::cordl_internals::Ptr<int8_t> value,
                             int32_t startIndex, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<int8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, value, startIndex, length);
}
inline ::StringW
System::String::CreateString(::cordl_internals::Ptr<char16_t> value,
                             int32_t startIndex, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, value, startIndex, length);
}
inline ::StringW
System::String::CreateString(::ArrayW<char16_t, ::Array<char16_t> *> val,
                             int32_t startIndex, int32_t length) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, val, startIndex, length);
}
inline ::StringW
System::String::CreateString(::ArrayW<char16_t, ::Array<char16_t> *> val) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, val);
}
inline ::StringW System::String::CreateString(char16_t c, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, c, count);
}
inline ::StringW
System::String::CreateString(::cordl_internals::Ptr<int8_t> value,
                             int32_t startIndex, int32_t length,
                             ::System::Text::Encoding *enc) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::cordl_internals::Ptr<int8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Text::Encoding *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, value, startIndex, length, enc);
}
inline ::StringW
System::String::CreateString(::System::ReadOnlySpan_1<char16_t> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "CreateString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::ReadOnlySpan_1<char16_t>>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method, value);
}
inline char16_t System::String::get_Chars(int32_t index) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "get_Chars", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(
      this, ___internal_method, index);
}
inline ::StringW System::String::Intern(::StringW str) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "Intern", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, str);
}
inline ::StringW System::String::IsInterned(::StringW str) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::System::String *>::get(),
      "IsInterned", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      nullptr, ___internal_method, str);
}
inline ::System::String *
System::String::New_ctor(::ArrayW<char16_t, ::Array<char16_t> *> value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::String *>(value));
}
inline ::System::String *
System::String::New_ctor(::ArrayW<char16_t, ::Array<char16_t> *> value,
                         int32_t startIndex, int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::String *>(
      value, startIndex, length));
}
inline ::System::String *
System::String::New_ctor(::cordl_internals::Ptr<char16_t> value,
                         int32_t startIndex, int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::String *>(
      value, startIndex, length));
}
inline ::System::String *
System::String::New_ctor(::cordl_internals::Ptr<int8_t> value,
                         int32_t startIndex, int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::String *>(
      value, startIndex, length));
}
inline ::System::String *
System::String::New_ctor(::cordl_internals::Ptr<int8_t> value,
                         int32_t startIndex, int32_t length,
                         ::System::Text::Encoding *enc) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::String *>(
      value, startIndex, length, enc));
}
inline ::System::String *System::String::New_ctor(char16_t c, int32_t count) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::System::String *>(c, count));
}
inline ::System::String *
System::String::New_ctor(::System::ReadOnlySpan_1<char16_t> value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::String *>(value));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::String::operator ::System::IComparable *() noexcept {
  return static_cast<::System::IComparable *>(static_cast<void *>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable *
System::String::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable *>(static_cast<void *>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::String::operator ::System::Collections::
    IEnumerable *() noexcept {
  return static_cast<::System::Collections::IEnumerable *>(
      static_cast<void *>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable *
System::String::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable *>(
      static_cast<void *>(this));
}
/// @brief Convert operator to
/// "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr System::String::operator ::System::Collections::Generic::
    IEnumerable_1<char16_t> *() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t> *>(
      static_cast<void *>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t> *
System::String::
    i___System__Collections__Generic__IEnumerable_1_char16_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t> *>(
      static_cast<void *>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr System::String::operator ::System::IComparable_1<
    ::StringW> *() noexcept {
  return static_cast<::System::IComparable_1<::StringW> *>(
      static_cast<void *>(this));
}
/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW> *
System::String::i___System__IComparable_1___StringW_() noexcept {
  return static_cast<::System::IComparable_1<::StringW> *>(
      static_cast<void *>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr System::String::operator ::System::IEquatable_1<
    ::StringW> *() noexcept {
  return static_cast<::System::IEquatable_1<::StringW> *>(
      static_cast<void *>(this));
}
/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW> *
System::String::i___System__IEquatable_1___StringW_() noexcept {
  return static_cast<::System::IEquatable_1<::StringW> *>(
      static_cast<void *>(this));
}
/// @brief Convert operator to "::System::IConvertible"
constexpr System::String::operator ::System::IConvertible *() noexcept {
  return static_cast<::System::IConvertible *>(static_cast<void *>(this));
}
/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible *
System::String::i___System__IConvertible() noexcept {
  return static_cast<::System::IConvertible *>(static_cast<void *>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::String::operator ::System::ICloneable *() noexcept {
  return static_cast<::System::ICloneable *>(static_cast<void *>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable *
System::String::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable *>(static_cast<void *>(this));
}
// Ctor Parameters []
constexpr ::System::String::String() {}
