#pragma once
// IWYU pragma private; include "System/Globalization/FormatProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__FormatProvider_def.hpp"
#include "System/Globalization/zzzz__FormatProvider_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Text/zzzz__ValueStringBuilder_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Globalization::Number_FormatProvider_NumberBuffer.get_digits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<char16_t> (::System::Globalization::Number_FormatProvider_NumberBuffer::*)()>(
    &::System::Globalization::Number_FormatProvider_NumberBuffer::get_digits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4234fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::Number_FormatProvider_NumberBuffer>::get(), "get_digits",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::cordl_internals::Ptr<char16_t> System::Globalization::Number_FormatProvider_NumberBuffer::get_digits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::Number_FormatProvider_NumberBuffer>::get(),
                                                                             "get_digits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<char16_t>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sign", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "overrideDigits", ty: "::cordl_internals::Ptr<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::Number_FormatProvider_NumberBuffer::Number_FormatProvider_NumberBuffer(int32_t precision, int32_t scale, bool sign,
                                                                                                          ::cordl_internals::Ptr<char16_t> overrideDigits) noexcept {
  this->precision = precision;
  this->scale = scale;
  this->sign = sign;
  this->overrideDigits = overrideDigits;
}
// Ctor Parameters []
constexpr ::System::Globalization::Number_FormatProvider_NumberBuffer::Number_FormatProvider_NumberBuffer() {}
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.IsWhite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Globalization::FormatProvider_Number::IsWhite)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x42326d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "IsWhite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.MatchChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<char16_t> (*)(::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<char16_t>, ::StringW)>(
    &::System::Globalization::FormatProvider_Number::MatchChars)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4232700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "MatchChars", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.MatchChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<char16_t> (*)(
    ::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<char16_t>)>(&::System::Globalization::FormatProvider_Number::MatchChars)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x42327c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "MatchChars", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.ParseNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ByRef<::cordl_internals::Ptr<char16_t>>, ::cordl_internals::Ptr<char16_t>, ::System::Globalization::NumberStyles, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>,
    ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, bool)>(&::System::Globalization::FormatProvider_Number::ParseNumber)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x4232820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "ParseNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<char16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.TrailingZeros
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(
    &::System::Globalization::FormatProvider_Number::TrailingZeros)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4232f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "TrailingZeros", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.TryStringToNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>,
                         ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, bool)>(&::System::Globalization::FormatProvider_Number::TryStringToNumber)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x42325a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "TryStringToNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.Int32ToDecChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<char16_t>, ::ByRef<int32_t>, uint32_t, int32_t)>(
    &::System::Globalization::FormatProvider_Number::Int32ToDecChars)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4232fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "Int32ToDecChars", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.ParseFormatSpecifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<int32_t>)>(
    &::System::Globalization::FormatProvider_Number::ParseFormatSpecifier)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4230e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "ParseFormatSpecifier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.NumberToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::System::Text::ValueStringBuilder>, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>, char16_t, int32_t, ::System::Globalization::NumberFormatInfo*, bool)>(
    &::System::Globalization::FormatProvider_Number::NumberToString)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x4230fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "NumberToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatCurrency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::System::Text::ValueStringBuilder>, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Globalization::FormatProvider_Number::FormatCurrency)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x42330e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatCurrency", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.wcslen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::Ptr<char16_t>)>(&::System::Globalization::FormatProvider_Number::wcslen)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x42342b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "wcslen", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatFixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::System::Text::ValueStringBuilder>, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t,
                         ::System::Globalization::NumberFormatInfo*, ::ArrayW<int32_t, ::Array<int32_t>*>, ::StringW, ::StringW)>(&::System::Globalization::FormatProvider_Number::FormatFixed)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x4233340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatFixed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::System::Text::ValueStringBuilder>, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Globalization::FormatProvider_Number::FormatNumber)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x423384c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatScientific
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::System::Text::ValueStringBuilder>, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t, ::System::Globalization::NumberFormatInfo*, char16_t)>(
    &::System::Globalization::FormatProvider_Number::FormatScientific)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x4233a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatScientific", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatExponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::Text::ValueStringBuilder>, ::System::Globalization::NumberFormatInfo*, int32_t, char16_t,
                                                                                           int32_t, bool)>(&::System::Globalization::FormatProvider_Number::FormatExponent)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x42344e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatExponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatGeneral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::System::Text::ValueStringBuilder>, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t, ::System::Globalization::NumberFormatInfo*, char16_t, bool)>(
    &::System::Globalization::FormatProvider_Number::FormatGeneral)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x4233cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatGeneral", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FormatPercent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::System::Text::ValueStringBuilder>, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t, int32_t, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Globalization::FormatProvider_Number::FormatPercent)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x4234058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatPercent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.RoundNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>, int32_t)>(
    &::System::Globalization::FormatProvider_Number::RoundNumber)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4233010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "RoundNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.FindSection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(
    &::System::Globalization::FormatProvider_Number::FindSection)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x42347d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FindSection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider_Number.NumberToStringFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::System::Text::ValueStringBuilder>, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Globalization::FormatProvider_Number::NumberToStringFormat)> {
  constexpr static std::size_t size = 0x1098;
  constexpr static std::size_t addrs = 0x4231508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "NumberToStringFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
    return ___internal_method;
  }
};
inline void System::Globalization::FormatProvider_Number::setStaticF_s_posCurrencyFormats(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_posCurrencyFormats",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::FormatProvider_Number::getStaticF_s_posCurrencyFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_posCurrencyFormats",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>();
}
inline void System::Globalization::FormatProvider_Number::setStaticF_s_negCurrencyFormats(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_negCurrencyFormats",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::FormatProvider_Number::getStaticF_s_negCurrencyFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_negCurrencyFormats",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>();
}
inline void System::Globalization::FormatProvider_Number::setStaticF_s_posPercentFormats(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_posPercentFormats",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::FormatProvider_Number::getStaticF_s_posPercentFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_posPercentFormats",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>();
}
inline void System::Globalization::FormatProvider_Number::setStaticF_s_negPercentFormats(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_negPercentFormats",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::FormatProvider_Number::getStaticF_s_negPercentFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_negPercentFormats",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>();
}
inline void System::Globalization::FormatProvider_Number::setStaticF_s_negNumberFormats(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_negNumberFormats",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::FormatProvider_Number::getStaticF_s_negNumberFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_negNumberFormats",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>();
}
inline void System::Globalization::FormatProvider_Number::setStaticF_s_posNumberFormat(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_posNumberFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Globalization::FormatProvider_Number::getStaticF_s_posNumberFormat() {
  return ::cordl_internals::getStaticField<::StringW, "s_posNumberFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get>();
}
inline bool System::Globalization::FormatProvider_Number::IsWhite(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "IsWhite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline ::cordl_internals::Ptr<char16_t> System::Globalization::FormatProvider_Number::MatchChars(::cordl_internals::Ptr<char16_t> p, ::cordl_internals::Ptr<char16_t> pEnd, ::StringW str) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "MatchChars", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<char16_t>, false>(nullptr, ___internal_method, p, pEnd, str);
}
inline ::cordl_internals::Ptr<char16_t> System::Globalization::FormatProvider_Number::MatchChars(::cordl_internals::Ptr<char16_t> p, ::cordl_internals::Ptr<char16_t> pEnd,
                                                                                                 ::cordl_internals::Ptr<char16_t> str) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "MatchChars", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<char16_t>, false>(nullptr, ___internal_method, p, pEnd, str);
}
inline bool System::Globalization::FormatProvider_Number::ParseNumber(::ByRef<::cordl_internals::Ptr<char16_t>> str, ::cordl_internals::Ptr<char16_t> strEnd,
                                                                      ::System::Globalization::NumberStyles options, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                      ::System::Text::StringBuilder* sb, ::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "ParseNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<char16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, strEnd, options, number, sb, numfmt, parseDecimal);
}
inline bool System::Globalization::FormatProvider_Number::TrailingZeros(::System::ReadOnlySpan_1<char16_t> s, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "TrailingZeros", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, index);
}
inline bool System::Globalization::FormatProvider_Number::TryStringToNumber(::System::ReadOnlySpan_1<char16_t> str, ::System::Globalization::NumberStyles options,
                                                                            ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, ::System::Text::StringBuilder* sb,
                                                                            ::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "TryStringToNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, options, number, sb, numfmt, parseDecimal);
}
inline void System::Globalization::FormatProvider_Number::Int32ToDecChars(::cordl_internals::Ptr<char16_t> buffer, ::ByRef<int32_t> index, uint32_t value, int32_t digits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "Int32ToDecChars", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, index, value, digits);
}
inline char16_t System::Globalization::FormatProvider_Number::ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ::ByRef<int32_t> digits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "ParseFormatSpecifier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, format, digits);
}
inline void System::Globalization::FormatProvider_Number::NumberToString(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                         char16_t format, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info, bool isDecimal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "NumberToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, format, nMaxDigits, info, isDecimal);
}
inline void System::Globalization::FormatProvider_Number::FormatCurrency(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                         int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatCurrency", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
inline int32_t System::Globalization::FormatProvider_Number::wcslen(::cordl_internals::Ptr<char16_t> s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "wcslen", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
inline void System::Globalization::FormatProvider_Number::FormatFixed(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                      int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info,
                                                                      ::ArrayW<int32_t, ::Array<int32_t>*> groupDigits, ::StringW sDecimal, ::StringW sGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatFixed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, groupDigits, sDecimal, sGroup);
}
inline void System::Globalization::FormatProvider_Number::FormatNumber(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                       int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
inline void System::Globalization::FormatProvider_Number::FormatScientific(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                           int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info, char16_t expChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatScientific", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, expChar);
}
inline void System::Globalization::FormatProvider_Number::FormatExponent(::ByRef<::System::Text::ValueStringBuilder> sb, ::System::Globalization::NumberFormatInfo* info, int32_t value,
                                                                         char16_t expChar, int32_t minDigits, bool positiveSign) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatExponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, info, value, expChar, minDigits, positiveSign);
}
inline void System::Globalization::FormatProvider_Number::FormatGeneral(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                        int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info, char16_t expChar,
                                                                        bool bSuppressScientific) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatGeneral", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, expChar, bSuppressScientific);
}
inline void System::Globalization::FormatProvider_Number::FormatPercent(::ByRef<::System::Text::ValueStringBuilder> sb, ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number,
                                                                        int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FormatPercent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
inline void System::Globalization::FormatProvider_Number::RoundNumber(::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "RoundNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, number, pos);
}
inline int32_t System::Globalization::FormatProvider_Number::FindSection(::System::ReadOnlySpan_1<char16_t> format, int32_t section) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "FindSection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, format, section);
}
inline void System::Globalization::FormatProvider_Number::NumberToStringFormat(::ByRef<::System::Text::ValueStringBuilder> sb,
                                                                               ::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer> number, ::System::ReadOnlySpan_1<char16_t> format,
                                                                               ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider_Number*>::get(), "NumberToStringFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Globalization::Number_FormatProvider_NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, format, info);
}
// Ctor Parameters []
constexpr ::System::Globalization::FormatProvider_Number::FormatProvider_Number() {}
//  Writing Method size for method: ::System::Globalization::FormatProvider.FormatBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::Text::ValueStringBuilder>, int32_t, int32_t, bool, ::System::ReadOnlySpan_1<char16_t>,
                                                                                           ::System::Globalization::NumberFormatInfo*, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t)>(
    &::System::Globalization::FormatProvider::FormatBigInteger)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x4230d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider*>::get(), "FormatBigInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::FormatProvider.TryStringToBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Text::StringBuilder*, ::ByRef<int32_t>,
                         ::ByRef<int32_t>, ::ByRef<bool>)>(&::System::Globalization::FormatProvider::TryStringToBigInteger)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x422f368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider*>::get(), "TryStringToBigInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
inline void System::Globalization::FormatProvider::FormatBigInteger(::ByRef<::System::Text::ValueStringBuilder> sb, int32_t precision, int32_t scale, bool sign,
                                                                    ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* numberFormatInfo,
                                                                    ::ArrayW<char16_t, ::Array<char16_t>*> digits, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider*>::get(), "FormatBigInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, precision, scale, sign, format, numberFormatInfo, digits, startIndex);
}
inline bool System::Globalization::FormatProvider::TryStringToBigInteger(::System::ReadOnlySpan_1<char16_t> s, ::System::Globalization::NumberStyles styles,
                                                                         ::System::Globalization::NumberFormatInfo* numberFormatInfo, ::System::Text::StringBuilder* receiver,
                                                                         ::ByRef<int32_t> precision, ::ByRef<int32_t> scale, ::ByRef<bool> sign) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::FormatProvider*>::get(), "TryStringToBigInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, styles, numberFormatInfo, receiver, precision, scale, sign);
}
// Ctor Parameters []
constexpr ::System::Globalization::FormatProvider::FormatProvider() {}
