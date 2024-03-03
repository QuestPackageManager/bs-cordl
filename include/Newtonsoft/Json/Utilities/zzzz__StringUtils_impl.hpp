#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringUtils_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TSource> constexpr ::System::Func_2<TSource, ::StringW>*& Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::__cordl_internal_get_valueSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueSelector;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, ::StringW>*> const&
Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::__cordl_internal_get_valueSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueSelector;
}
template <typename TSource>
constexpr void Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::__cordl_internal_set_valueSelector(::System::Func_2<TSource, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueSelector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::StringW& Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::__cordl_internal_get_testValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testValue;
}
template <typename TSource> constexpr ::StringW const& Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::__cordl_internal_get_testValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testValue;
}
template <typename TSource> constexpr void Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::__cordl_internal_set_testValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___testValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource>
inline ::Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>* Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>*>());
}
template <typename TSource> inline void Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::_ForgivingCaseSensitiveFind_b__0(TSource s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>*>::get(), "<ForgivingCaseSensitiveFind>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s);
}
template <typename TSource> inline bool Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::_ForgivingCaseSensitiveFind_b__1(TSource s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>*>::get(), "<ForgivingCaseSensitiveFind>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s);
}
// Ctor Parameters []
template <typename TSource> constexpr ::Newtonsoft::Json::Utilities::__StringUtils____c__DisplayClass15_0_1<TSource>::__StringUtils____c__DisplayClass15_0_1() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.FormatWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::IFormatProvider*, ::System::Object*)>(
    &::Newtonsoft::Json::Utilities::StringUtils::FormatWith)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x274b320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "FormatWith", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.FormatWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::IFormatProvider*, ::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Utilities::StringUtils::FormatWith)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2749124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "FormatWith", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.FormatWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Utilities::StringUtils::FormatWith)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x275c3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "FormatWith", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.FormatWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::IFormatProvider*, ::System::Object*, ::System::Object*, ::System::Object*,
                                                                                                ::System::Object*)>(&::Newtonsoft::Json::Utilities::StringUtils::FormatWith)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x275c4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "FormatWith", std::span<Il2CppClass const* const, 0>(),
            ::std::array<Il2CppType const*, 6>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.FormatWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::IFormatProvider*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Newtonsoft::Json::Utilities::StringUtils::FormatWith)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x275c354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "FormatWith", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.IsWhiteSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Newtonsoft::Json::Utilities::StringUtils::IsWhiteSpace)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x274b588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "IsWhiteSpace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.NullEmptyString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::Utilities::StringUtils::NullEmptyString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x275c604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "NullEmptyString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.CreateStringWriter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StringWriter* (*)(int32_t)>(&::Newtonsoft::Json::Utilities::StringUtils::CreateStringWriter)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2756a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "CreateStringWriter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.GetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (*)(::StringW)>(&::Newtonsoft::Json::Utilities::StringUtils::GetLength)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27569ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "GetLength", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.ToCharAsUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(char16_t, ::ArrayW<char16_t, ::Array<char16_t>*>)>(
    &::Newtonsoft::Json::Utilities::StringUtils::ToCharAsUnicode)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27566e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "ToCharAsUnicode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.ToCamelCase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::Utilities::StringUtils::ToCamelCase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2754e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "ToCamelCase", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.IsHighSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::IsHighSurrogate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x275c624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "IsHighSurrogate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.IsLowSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::IsLowSurrogate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x275c67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "IsLowSurrogate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.StartsWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::StartsWith)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x275c6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "StartsWith", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringUtils.EndsWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, char16_t)>(&::Newtonsoft::Json::Utilities::StringUtils::EndsWith)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x275c718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "EndsWith", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "FormatWith", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format, provider, arg0);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "FormatWith", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format, provider, arg0, arg1);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "FormatWith", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format, provider, arg0, arg1, arg2);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::FormatWith(::StringW format, ::System::IFormatProvider* provider, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2,
                                                                      ::System::Object* arg3) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "FormatWith", std::span<Il2CppClass const* const, 0>(),
          ::std::array<Il2CppType const*, 6>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format, provider, arg0, arg1, arg2, arg3);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::FormatWith(::StringW format, ::System::IFormatProvider* provider, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "FormatWith", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format, provider, args);
}
inline bool Newtonsoft::Json::Utilities::StringUtils::IsWhiteSpace(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "IsWhiteSpace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::NullEmptyString(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "NullEmptyString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s);
}
inline ::System::IO::StringWriter* Newtonsoft::Json::Utilities::StringUtils::CreateStringWriter(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "CreateStringWriter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StringWriter*, false>(nullptr, ___internal_method, capacity);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Utilities::StringUtils::GetLength(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "GetLength", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(nullptr, ___internal_method, value);
}
inline void Newtonsoft::Json::Utilities::StringUtils::ToCharAsUnicode(char16_t c, ::ArrayW<char16_t, ::Array<char16_t>*> buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "ToCharAsUnicode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c, buffer);
}
template <typename TSource>
inline TSource Newtonsoft::Json::Utilities::StringUtils::ForgivingCaseSensitiveFind(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, ::StringW>* valueSelector,
                                                                                    ::StringW testValue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "ForgivingCaseSensitiveFind",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, ::StringW>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, valueSelector, testValue);
}
inline ::StringW Newtonsoft::Json::Utilities::StringUtils::ToCamelCase(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "ToCamelCase", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s);
}
inline bool Newtonsoft::Json::Utilities::StringUtils::IsHighSurrogate(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "IsHighSurrogate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool Newtonsoft::Json::Utilities::StringUtils::IsLowSurrogate(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "IsLowSurrogate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool Newtonsoft::Json::Utilities::StringUtils::StartsWith(::StringW source, char16_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "StartsWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, value);
}
inline bool Newtonsoft::Json::Utilities::StringUtils::EndsWith(::StringW source, char16_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::StringUtils*>::get(), "EndsWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, value);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::StringUtils::StringUtils() {}
