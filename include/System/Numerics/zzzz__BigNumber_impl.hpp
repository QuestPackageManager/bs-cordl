#pragma once
// IWYU pragma private; include "System/Numerics/BigNumber.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Numerics/zzzz__BigNumber_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/Numerics/zzzz__BigNumber_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Numerics::BigNumber_BigNumberBuffer.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigNumber_BigNumberBuffer (*)()>(&::System::Numerics::BigNumber_BigNumberBuffer::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5edaca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber_BigNumberBuffer>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Numerics::BigNumber_BigNumberBuffer System::Numerics::BigNumber_BigNumberBuffer::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber_BigNumberBuffer>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigNumber_BigNumberBuffer, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "digits", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sign", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Numerics::BigNumber_BigNumberBuffer::BigNumber_BigNumberBuffer(::System::Text::StringBuilder* digits, int32_t precision, int32_t scale, bool sign) noexcept {
  this->digits = digits;
  this->precision = precision;
  this->scale = scale;
  this->sign = sign;
}
// Ctor Parameters []
constexpr ::System::Numerics::BigNumber_BigNumberBuffer::BigNumber_BigNumberBuffer() {}
//  Writing Method size for method: ::System::Numerics::BigNumber.TryValidateParseStyleInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Globalization::NumberStyles, ::ByRef<::System::ArgumentException*>)>(
    &::System::Numerics::BigNumber::TryValidateParseStyleInteger)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5edaa34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "TryValidateParseStyleInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::ArgumentException*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.TryParseBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::ByRef<::System::Numerics::BigInteger>)>(
        &::System::Numerics::BigNumber::TryParseBigInteger)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5edab44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "TryParseBigInteger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Numerics::BigInteger>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.ParseBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Numerics::BigInteger (*)(::StringW, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&::System::Numerics::BigNumber::ParseBigInteger)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ed63cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "ParseBigInteger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.ParseBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(
    ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&::System::Numerics::BigNumber::ParseBigInteger)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5edb164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "ParseBigInteger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.HexNumberToBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::System::Numerics::BigNumber_BigNumberBuffer>, ::ByRef<::System::Numerics::BigInteger>)>(
    &::System::Numerics::BigNumber::HexNumberToBigInteger)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5edadec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "HexNumberToBigInteger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Numerics::BigNumber_BigNumberBuffer>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Numerics::BigInteger>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.NumberToBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::System::Numerics::BigNumber_BigNumberBuffer>, ::ByRef<::System::Numerics::BigInteger>)>(
    &::System::Numerics::BigNumber::NumberToBigInteger)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5edaf90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "NumberToBigInteger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Numerics::BigNumber_BigNumberBuffer>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Numerics::BigInteger>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.ParseFormatSpecifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<int32_t>)>(
    &::System::Numerics::BigNumber::ParseFormatSpecifier)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5edb2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "ParseFormatSpecifier", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.FormatBigIntegerToHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(bool, ::System::Numerics::BigInteger, char16_t, int32_t, ::System::Globalization::NumberFormatInfo*, ::System::Span_1<char16_t>, ::ByRef<int32_t>, ::ByRef<bool>)>(
        &::System::Numerics::BigNumber::FormatBigIntegerToHex)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0x5edb3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "FormatBigIntegerToHex", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 8>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.FormatBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Numerics::BigInteger, ::StringW, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Numerics::BigNumber::FormatBigInteger)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ed7170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "FormatBigInteger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigNumber.FormatBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(
    bool, ::System::Numerics::BigInteger, ::StringW, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*, ::System::Span_1<char16_t>, ::ByRef<int32_t>, ::ByRef<bool>)>(
    &::System::Numerics::BigNumber::FormatBigInteger)> {
  constexpr static std::size_t size = 0xc34;
  constexpr static std::size_t addrs = 0x5edbe04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "FormatBigInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
inline bool System::Numerics::BigNumber::TryValidateParseStyleInteger(::System::Globalization::NumberStyles style, ::ByRef<::System::ArgumentException*> e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "TryValidateParseStyleInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::ArgumentException*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, style, e);
}
inline bool System::Numerics::BigNumber::TryParseBigInteger(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info,
                                                            ::ByRef<::System::Numerics::BigInteger> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "TryParseBigInteger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Numerics::BigInteger>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, style, info, result);
}
inline ::System::Numerics::BigInteger System::Numerics::BigNumber::ParseBigInteger(::StringW value, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "ParseBigInteger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, value, style, info);
}
inline ::System::Numerics::BigInteger System::Numerics::BigNumber::ParseBigInteger(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles style,
                                                                                   ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "ParseBigInteger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, value, style, info);
}
inline bool System::Numerics::BigNumber::HexNumberToBigInteger(::ByRef<::System::Numerics::BigNumber_BigNumberBuffer> number, ::ByRef<::System::Numerics::BigInteger> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "HexNumberToBigInteger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Numerics::BigNumber_BigNumberBuffer>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Numerics::BigInteger>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, number, value);
}
inline bool System::Numerics::BigNumber::NumberToBigInteger(::ByRef<::System::Numerics::BigNumber_BigNumberBuffer> number, ::ByRef<::System::Numerics::BigInteger> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "NumberToBigInteger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Numerics::BigNumber_BigNumberBuffer>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Numerics::BigInteger>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, number, value);
}
inline char16_t System::Numerics::BigNumber::ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ::ByRef<int32_t> digits) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "ParseFormatSpecifier", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, format, digits);
}
inline ::StringW System::Numerics::BigNumber::FormatBigIntegerToHex(bool targetSpan, ::System::Numerics::BigInteger value, char16_t format, int32_t digits,
                                                                    ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten,
                                                                    ::ByRef<bool> spanSuccess) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "FormatBigIntegerToHex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 8>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, targetSpan, value, format, digits, info, destination, charsWritten, spanSuccess);
}
inline ::StringW System::Numerics::BigNumber::FormatBigInteger(::System::Numerics::BigInteger value, ::StringW format, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "FormatBigInteger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, info);
}
inline ::StringW System::Numerics::BigNumber::FormatBigInteger(bool targetSpan, ::System::Numerics::BigInteger value, ::StringW formatString, ::System::ReadOnlySpan_1<char16_t> formatSpan,
                                                               ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten,
                                                               ::ByRef<bool> spanSuccess) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::BigNumber*>::get(), "FormatBigInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, targetSpan, value, formatString, formatSpan, info, destination, charsWritten, spanSuccess);
}
// Ctor Parameters []
constexpr ::System::Numerics::BigNumber::BigNumber() {}
