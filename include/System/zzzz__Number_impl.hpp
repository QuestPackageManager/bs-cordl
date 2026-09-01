#pragma once
// IWYU pragma private; include "System\Number.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Number_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/Text/zzzz__ValueStringBuilder_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Number_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters []
constexpr ::System::NumberBuffer_Number_DigitsAndNullTerminator::NumberBuffer_Number_DigitsAndNullTerminator() {}
//  Writing Method size for method: ::System::Number_NumberBuffer.get_sign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Number_NumberBuffer::*)()>(&::System::Number_NumberBuffer::get_sign)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c57684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number_NumberBuffer>(), { "get_sign", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_NumberBuffer.set_sign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Number_NumberBuffer::*)(bool)>(&::System::Number_NumberBuffer::set_sign)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c57694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number_NumberBuffer>(), { "set_sign", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_NumberBuffer.get_digits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (::System::Number_NumberBuffer::*)()>(&::System::Number_NumberBuffer::get_digits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c576a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number_NumberBuffer>(), { "get_digits", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Number_NumberBuffer::get_sign() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number_NumberBuffer>(), { "get_sign", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Number_NumberBuffer::set_sign(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number_NumberBuffer>(), { "set_sign", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline char16_t* System::Number_NumberBuffer::get_digits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number_NumberBuffer>(), { "get_digits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_sign", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_digits", ty: "::System::NumberBuffer_Number_DigitsAndNullTerminator", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_allDigits", ty: "char16_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Number_NumberBuffer::Number_NumberBuffer(int32_t precision, int32_t scale, int32_t _sign, ::System::NumberBuffer_Number_DigitsAndNullTerminator _digits,
                                                             char16_t* _allDigits) noexcept {
  this->precision = precision;
  this->scale = scale;
  this->_sign = _sign;
  this->_digits = _digits;
  this->_allDigits = _allDigits;
}
// Ctor Parameters []
constexpr ::System::Number_NumberBuffer::Number_NumberBuffer() {}
//  Writing Method size for method: ::System::Number.FormatDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Decimal, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Number::FormatDecimal)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c4b500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Number*>(),
            { "FormatDecimal", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*, ::System::Span_1<char16_t>,
                                                                ::by_ref<int32_t>)>(&::System::Number::TryFormatDecimal)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5c4d148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatDecimal",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                                       ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                                                       ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.DecimalToNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Decimal, ::by_ref<::System::Number_NumberBuffer>)>(&::System::Number::DecimalToNumber)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5c4b7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "DecimalToNumber", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t, ::StringW, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatDouble)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c4d354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "FormatDouble", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*, ::System::Span_1<char16_t>,
                                                                ::by_ref<int32_t>)>(&::System::Number::TryFormatDouble)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5c4d78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatDouble",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<double_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                                       ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                                                       ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::System::Text::ValueStringBuilder>, double_t, ::System::ReadOnlySpan_1<char16_t>,
                                                                     ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatDouble)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5c4d498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatDouble",
                                                                    {},
                                                                    { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<double_t>(),
                                                                      ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t, ::StringW, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatSingle)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c4e330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "FormatSingle", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(float_t, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryFormatSingle)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5c4e770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatSingle",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                                       ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                                                       ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::System::Text::ValueStringBuilder>, float_t, ::System::ReadOnlySpan_1<char16_t>,
                                                                     ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatSingle)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5c4e474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatSingle",
                                                                    {},
                                                                    { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<float_t>(),
                                                                      ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryCopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryCopyTo)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c4d8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                             { "TryCopyTo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Number::FormatInt32)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x5c441a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                         { "FormatInt32", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(
    &::System::Number::TryFormatInt32)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x5c44fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatInt32",
                                                                    {},
                                                                    { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                      ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Number::FormatUInt32)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5c4479c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                         { "FormatUInt32", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(
    &::System::Number::TryFormatUInt32)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5c44c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatUInt32",
                                                                    {},
                                                                    { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                      ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Number::FormatInt64)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5c47404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                         { "FormatInt64", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(
    &::System::Number::TryFormatInt64)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5c479cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatInt64",
                                                                    {},
                                                                    { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                      ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Number::FormatUInt64)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5c5042c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                         { "FormatUInt64", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(
    &::System::Number::TryFormatUInt64)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5c50870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatUInt64",
                                                                    {},
                                                                    { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                      ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int32ToNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::System::Number_NumberBuffer>)>(&::System::Number::Int32ToNumber)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c50b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Int32ToNumber", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NegativeInt32ToDecStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, ::StringW)>(&::System::Number::NegativeInt32ToDecStr)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c4ea68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NegativeInt32ToDecStr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryNegativeInt32ToDecStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, ::StringW, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryNegativeInt32ToDecStr)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5c4ef30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryNegativeInt32ToDecStr",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                                       ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int32ToHexStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, char16_t, int32_t)>(&::System::Number::Int32ToHexStr)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c4ec18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Int32ToHexStr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryInt32ToHexStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, char16_t, int32_t, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryInt32ToHexStr)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5c4f11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryInt32ToHexStr",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(),
                                                                                                       ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int32ToHexChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (*)(char16_t*, uint32_t, int32_t, int32_t)>(&::System::Number::Int32ToHexChars)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c50c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "Int32ToHexChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt32ToNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<::System::Number_NumberBuffer>)>(&::System::Number::UInt32ToNumber)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c50cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "UInt32ToNumber", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt32ToDecChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (*)(char16_t*, uint32_t, int32_t)>(&::System::Number::UInt32ToDecChars)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c4d300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "UInt32ToDecChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt32ToDecStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t, int32_t)>(&::System::Number::UInt32ToDecStr)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5c4e8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "UInt32ToDecStr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryUInt32ToDecStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, int32_t, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryUInt32ToDecStr)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c4ed5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Number*>(),
                         { "TryUInt32ToDecStr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int64ToNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<::System::Number_NumberBuffer>)>(&::System::Number::Int64ToNumber)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c4fa38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Int64ToNumber", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NegativeInt64ToDecStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, int32_t, ::StringW)>(&::System::Number::NegativeInt64ToDecStr)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5c4f534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NegativeInt64ToDecStr", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryNegativeInt64ToDecStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, int32_t, ::StringW, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryNegativeInt64ToDecStr)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5c4feb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryNegativeInt64ToDecStr",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                                       ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int64ToHexStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, char16_t, int32_t)>(&::System::Number::Int64ToHexStr)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5c4f824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Int64ToHexStr", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryInt64ToHexStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, char16_t, int32_t, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryInt64ToHexStr)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5c501dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryInt64ToHexStr",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<int64_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(),
                                                                                                       ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt64ToNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::by_ref<::System::Number_NumberBuffer>)>(&::System::Number::UInt64ToNumber)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c506d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "UInt64ToNumber", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt64ToDecStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t, int32_t)>(&::System::Number::UInt64ToDecStr)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5c4f29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "UInt64ToDecStr", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryUInt64ToDecStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, int32_t, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryUInt64ToDecStr)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5c4fbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Number*>(),
                         { "TryUInt64ToDecStr", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseFormatSpecifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::ParseFormatSpecifier)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5c4b6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseFormatSpecifier", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Number_NumberBuffer>, char16_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*, bool)>(&::System::Number::NumberToString)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x5c4ba04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "NumberToString",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                    ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToStringFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Number_NumberBuffer>, ::System::ReadOnlySpan_1<char16_t>,
                                                                ::System::Globalization::NumberFormatInfo*)>(&::System::Number::NumberToStringFormat)> {
  constexpr static std::size_t size = 0x11b4;
  constexpr static std::size_t addrs = 0x5c4bf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToStringFormat",
                                                                    {},
                                                                    { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                                      ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatCurrency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Number_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatCurrency)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5c50ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatCurrency",
                                                                    {},
                                                                    { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatFixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Number_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*, ::ArrayW<int32_t>, ::StringW, ::StringW)>(&::System::Number::FormatFixed)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x5c51138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatFixed",
                                                                    {},
                                                                    { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                      ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Number_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatNumber)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5c51684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatNumber",
                                                                    {},
                                                                    { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatScientific
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Number_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*, char16_t)>(&::System::Number::FormatScientific)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5c518d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                         { "FormatScientific",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::System::Globalization::NumberFormatInfo*, int32_t, char16_t, int32_t, bool)>(
    &::System::Number::FormatExponent)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5c522a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatExponent",
                                                                    {},
                                                                    { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatGeneral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Number_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*, char16_t, bool)>(&::System::Number::FormatGeneral)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5c51b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                         { "FormatGeneral",
                                           {},
                                           { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatPercent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::System::Number_NumberBuffer>, int32_t, int32_t,
                                                                ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatPercent)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5c51f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatPercent",
                                                                    {},
                                                                    { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.RoundNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Number_NumberBuffer>, int32_t)>(&::System::Number::RoundNumber)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5c50de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "RoundNumber", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FindSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::Number::FindSection)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c52168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FindSection", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Low32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::System::Number::Low32)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c50de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Low32", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.High32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::System::Number::High32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c50dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "High32", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int64DivMod1E9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<uint64_t>)>(&::System::Number::Int64DivMod1E9)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c50da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Int64DivMod1E9", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Number_NumberBuffer>, ::by_ref<int32_t>)>(&::System::Number::NumberToInt32)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c52578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToInt32", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Number_NumberBuffer>, ::by_ref<int64_t>)>(&::System::Number::NumberToInt64)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c52604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToInt64", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Number_NumberBuffer>, ::by_ref<uint32_t>)>(&::System::Number::NumberToUInt32)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c5268c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToUInt32", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Number_NumberBuffer>, ::by_ref<uint64_t>)>(&::System::Number::NumberToUInt64)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c52710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToUInt64", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Number::ParseInt32)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5c456ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseInt32",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Number::ParseInt64)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5c47de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseInt64",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Number::ParseUInt32)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5c53ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseUInt32",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Number::ParseUInt64)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5c5453c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseUInt64",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<char16_t*>, char16_t*, ::System::Globalization::NumberStyles, ::by_ref<::System::Number_NumberBuffer>,
                                                                ::System::Globalization::NumberFormatInfo*, bool)>(&::System::Number::ParseNumber)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x5c54dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                         { "ParseNumber",
                                           {},
                                           { ::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                             ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<int32_t>)>(&::System::Number::TryParseInt32)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c45ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseInt32",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseInt32IntegerStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<int32_t>, ::by_ref<bool>)>(&::System::Number::TryParseInt32IntegerStyle)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x5c52794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "TryParseInt32IntegerStyle",
                                                  {},
                                                  { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                    ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseInt64IntegerStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<int64_t>, ::by_ref<bool>)>(&::System::Number::TryParseInt64IntegerStyle)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x5c53308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "TryParseInt64IntegerStyle",
                                                  {},
                                                  { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                    ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<int64_t>)>(&::System::Number::TryParseInt64)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c48238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseInt64",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<uint32_t>)>(&::System::Number::TryParseUInt32)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c55748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseUInt32",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt32IntegerStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<uint32_t>, ::by_ref<bool>)>(&::System::Number::TryParseUInt32IntegerStyle)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x5c53eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "TryParseUInt32IntegerStyle",
                                                  {},
                                                  { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                    ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt32HexNumberStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<uint32_t>, ::by_ref<bool>)>(&::System::Number::TryParseUInt32HexNumberStyle)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5c52e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "TryParseUInt32HexNumberStyle",
                                                  {},
                                                  { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                    ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<uint64_t>)>(&::System::Number::TryParseUInt64)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c558c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseUInt64",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt64IntegerStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<uint64_t>, ::by_ref<bool>)>(&::System::Number::TryParseUInt64IntegerStyle)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x5c5471c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "TryParseUInt64IntegerStyle",
                                                  {},
                                                  { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                    ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt64HexNumberStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<uint64_t>, ::by_ref<bool>)>(&::System::Number::TryParseUInt64HexNumberStyle)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5c53988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "TryParseUInt64HexNumberStyle",
                                                  {},
                                                  { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                    ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Number::ParseDecimal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c55a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseDecimal",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberBufferToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Number_NumberBuffer>, ::by_ref<::System::Decimal>)>(&::System::Number::NumberBufferToDecimal)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5c55b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "NumberBufferToDecimal", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Number::ParseDouble)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x5c55e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseDouble",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(
    &::System::Number::ParseSingle)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5c56394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseSingle",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<::System::Decimal>)>(&::System::Number::TryParseDecimal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c56844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseDecimal",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                   ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<double_t>)>(&::System::Number::TryParseDouble)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c5694c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseDouble",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*,
                                                                ::by_ref<float_t>)>(&::System::Number::TryParseSingle)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c56a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseSingle",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                          ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.StringToNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::by_ref<::System::Number_NumberBuffer>,
                                                                ::System::Globalization::NumberFormatInfo*, bool)>(&::System::Number::StringToNumber)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c531dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                         { "StringToNumber",
                                           {},
                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                             ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryStringToNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::by_ref<::System::Number_NumberBuffer>,
                                                                ::System::Globalization::NumberFormatInfo*, bool)>(&::System::Number::TryStringToNumber)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c55588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                         { "TryStringToNumber",
                                           {},
                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                             ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TrailingZeros
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::Number::TrailingZeros)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c556a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TrailingZeros", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.MatchChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (*)(char16_t*, char16_t*, ::StringW)>(&::System::Number::MatchChars)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c55510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "MatchChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.IsWhite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Number::IsWhite)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c554fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "IsWhite", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.IsDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Number::IsDigit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c55578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "IsDigit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ThrowOverflowOrFormatException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::System::Number::ThrowOverflowOrFormatException)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c52e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ThrowOverflowOrFormatException", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberBufferToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Number_NumberBuffer>, ::by_ref<double_t>)>(&::System::Number::NumberBufferToDouble)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c56308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                             { "NumberBufferToDouble", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.DigitsToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(char16_t*, int32_t)>(&::System::Number::DigitsToInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c56b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "DigitsToInt", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Mul32x32To64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&::System::Number::Mul32x32To64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c56bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Mul32x32To64", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Mul64Lossy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t, ::by_ref<int32_t>)>(&::System::Number::Mul64Lossy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c56bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Mul64Lossy", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.abs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Number::abs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c56c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "abs", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::by_ref<::System::Number_NumberBuffer>)>(&::System::Number::NumberToDouble)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5c4de60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToDouble", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.DoubleToNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(double_t, int32_t, ::by_ref<::System::Number_NumberBuffer>)>(&::System::Number::DoubleToNumber)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x5c4d9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                { "DoubleToNumber", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
    return ___internal_method;
  }
};
inline void System::Number::setStaticF_s_posCurrencyFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_posCurrencyFormats", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_posCurrencyFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_posCurrencyFormats", ::System::Number*>();
}
inline void System::Number::setStaticF_s_negCurrencyFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negCurrencyFormats", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_negCurrencyFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negCurrencyFormats", ::System::Number*>();
}
inline void System::Number::setStaticF_s_posPercentFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_posPercentFormats", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_posPercentFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_posPercentFormats", ::System::Number*>();
}
inline void System::Number::setStaticF_s_negPercentFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negPercentFormats", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_negPercentFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negPercentFormats", ::System::Number*>();
}
inline void System::Number::setStaticF_s_negNumberFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negNumberFormats", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_negNumberFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negNumberFormats", ::System::Number*>();
}
inline void System::Number::setStaticF_s_charToHexLookup(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_charToHexLookup", ::System::Number*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Number::getStaticF_s_charToHexLookup() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_charToHexLookup", ::System::Number*>();
}
inline void System::Number::setStaticF_s_rgval64Power10(::ArrayW<uint64_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint64_t>, "s_rgval64Power10", ::System::Number*>(std::forward<::ArrayW<uint64_t>>(value));
}
inline ::ArrayW<uint64_t> System::Number::getStaticF_s_rgval64Power10() {
  return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "s_rgval64Power10", ::System::Number*>();
}
inline void System::Number::setStaticF_s_rgexp64Power10(::ArrayW<int8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int8_t>, "s_rgexp64Power10", ::System::Number*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> System::Number::getStaticF_s_rgexp64Power10() {
  return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "s_rgexp64Power10", ::System::Number*>();
}
inline void System::Number::setStaticF_s_rgval64Power10By16(::ArrayW<uint64_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint64_t>, "s_rgval64Power10By16", ::System::Number*>(std::forward<::ArrayW<uint64_t>>(value));
}
inline ::ArrayW<uint64_t> System::Number::getStaticF_s_rgval64Power10By16() {
  return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "s_rgval64Power10By16", ::System::Number*>();
}
inline void System::Number::setStaticF_s_rgexp64Power10By16(::ArrayW<int16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t>, "s_rgexp64Power10By16", ::System::Number*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> System::Number::getStaticF_s_rgexp64Power10By16() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "s_rgexp64Power10By16", ::System::Number*>();
}
inline ::StringW System::Number::FormatDecimal(::System::Decimal value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Number*>(),
          { "FormatDecimal", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, info);
}
inline bool System::Number::TryFormatDecimal(::System::Decimal value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info,
                                             ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatDecimal",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                                     ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                                                     ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, info, destination, charsWritten);
}
inline void System::Number::DecimalToNumber(::System::Decimal value, ::by_ref<::System::Number_NumberBuffer> number) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "DecimalToNumber", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, number);
}
inline ::StringW System::Number::FormatDouble(double_t value, ::StringW format, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "FormatDouble", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, info);
}
inline bool System::Number::TryFormatDouble(double_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                            ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatDouble",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<double_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                                     ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                                                     ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, info, destination, charsWritten);
}
inline ::StringW System::Number::FormatDouble(::by_ref<::System::Text::ValueStringBuilder> sb, double_t value, ::System::ReadOnlySpan_1<char16_t> format,
                                              ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatDouble",
                                                                  {},
                                                                  { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<double_t>(),
                                                                    ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sb, value, format, info);
}
inline ::StringW System::Number::FormatSingle(float_t value, ::StringW format, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "FormatSingle", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, info);
}
inline bool System::Number::TryFormatSingle(float_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                            ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatSingle",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                                     ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                                                     ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, info, destination, charsWritten);
}
inline ::StringW System::Number::FormatSingle(::by_ref<::System::Text::ValueStringBuilder> sb, float_t value, ::System::ReadOnlySpan_1<char16_t> format,
                                              ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatSingle",
                                                                  {},
                                                                  { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<float_t>(),
                                                                    ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sb, value, format, info);
}
inline bool System::Number::TryCopyTo(::StringW source, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                                           { "TryCopyTo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination, charsWritten);
}
inline ::StringW System::Number::FormatInt32(int32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                       { "FormatInt32", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, provider);
}
inline bool System::Number::TryFormatInt32(int32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                           ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatInt32",
                                                                  {},
                                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                    ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
inline ::StringW System::Number::FormatUInt32(uint32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                       { "FormatUInt32", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, provider);
}
inline bool System::Number::TryFormatUInt32(uint32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                            ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatUInt32",
                                                                  {},
                                                                  { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                    ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
inline ::StringW System::Number::FormatInt64(int64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                       { "FormatInt64", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, provider);
}
inline bool System::Number::TryFormatInt64(int64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                           ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatInt64",
                                                                  {},
                                                                  { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                    ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
inline ::StringW System::Number::FormatUInt64(uint64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                       { "FormatUInt64", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, provider);
}
inline bool System::Number::TryFormatUInt64(uint64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                            ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryFormatUInt64",
                                                                  {},
                                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                    ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
inline void System::Number::Int32ToNumber(int32_t value, ::by_ref<::System::Number_NumberBuffer> number) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Int32ToNumber", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, number);
}
inline ::StringW System::Number::NegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NegativeInt32ToDecStr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, digits, sNegative);
}
inline bool System::Number::TryNegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryNegativeInt32ToDecStr",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                                     ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, digits, sNegative, destination, charsWritten);
}
inline ::StringW System::Number::Int32ToHexStr(int32_t value, char16_t hexBase, int32_t digits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Int32ToHexStr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, hexBase, digits);
}
inline bool System::Number::TryInt32ToHexStr(int32_t value, char16_t hexBase, int32_t digits, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryInt32ToHexStr",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, hexBase, digits, destination, charsWritten);
}
inline char16_t* System::Number::Int32ToHexChars(char16_t* buffer, uint32_t value, int32_t hexBase, int32_t digits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "Int32ToHexChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t*>(nullptr, ___internal_method, buffer, value, hexBase, digits);
}
inline void System::Number::UInt32ToNumber(uint32_t value, ::by_ref<::System::Number_NumberBuffer> number) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "UInt32ToNumber", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, number);
}
inline char16_t* System::Number::UInt32ToDecChars(char16_t* bufferEnd, uint32_t value, int32_t digits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "UInt32ToDecChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t*>(nullptr, ___internal_method, bufferEnd, value, digits);
}
inline ::StringW System::Number::UInt32ToDecStr(uint32_t value, int32_t digits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "UInt32ToDecStr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, digits);
}
inline bool System::Number::TryUInt32ToDecStr(uint32_t value, int32_t digits, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                          { "TryUInt32ToDecStr", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, digits, destination, charsWritten);
}
inline void System::Number::Int64ToNumber(int64_t input, ::by_ref<::System::Number_NumberBuffer> number) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Int64ToNumber", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, number);
}
inline ::StringW System::Number::NegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NegativeInt64ToDecStr", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input, digits, sNegative);
}
inline bool System::Number::TryNegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryNegativeInt64ToDecStr",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                                     ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, digits, sNegative, destination, charsWritten);
}
inline ::StringW System::Number::Int64ToHexStr(int64_t value, char16_t hexBase, int32_t digits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Int64ToHexStr", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, hexBase, digits);
}
inline bool System::Number::TryInt64ToHexStr(int64_t value, char16_t hexBase, int32_t digits, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryInt64ToHexStr",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<int64_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, hexBase, digits, destination, charsWritten);
}
inline void System::Number::UInt64ToNumber(uint64_t value, ::by_ref<::System::Number_NumberBuffer> number) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "UInt64ToNumber", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, number);
}
inline ::StringW System::Number::UInt64ToDecStr(uint64_t value, int32_t digits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "UInt64ToDecStr", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, digits);
}
inline bool System::Number::TryUInt64ToDecStr(uint64_t value, int32_t digits, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                          { "TryUInt64ToDecStr", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, digits, destination, charsWritten);
}
inline char16_t System::Number::ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ::by_ref<int32_t> digits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseFormatSpecifier", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, format, digits);
}
inline void System::Number::NumberToString(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Number_NumberBuffer> number, char16_t format, int32_t nMaxDigits,
                                           ::System::Globalization::NumberFormatInfo* info, bool isDecimal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "NumberToString",
                                                {},
                                                { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<char16_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, format, nMaxDigits, info, isDecimal);
}
inline void System::Number::NumberToStringFormat(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Number_NumberBuffer> number, ::System::ReadOnlySpan_1<char16_t> format,
                                                 ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToStringFormat",
                                                                  {},
                                                                  { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                                    ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, format, info);
}
inline void System::Number::FormatCurrency(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                           ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatCurrency",
                                                                  {},
                                                                  { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
inline void System::Number::FormatFixed(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                        ::System::Globalization::NumberFormatInfo* info, ::ArrayW<int32_t> groupDigits, ::StringW sDecimal, ::StringW sGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatFixed",
                                                                  {},
                                                                  { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                    ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, groupDigits, sDecimal, sGroup);
}
inline void System::Number::FormatNumber(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                         ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatNumber",
                                                                  {},
                                                                  { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
inline void System::Number::FormatScientific(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                             ::System::Globalization::NumberFormatInfo* info, char16_t expChar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "FormatScientific",
                                                {},
                                                { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, expChar);
}
inline void System::Number::FormatExponent(::by_ref<::System::Text::ValueStringBuilder> sb, ::System::Globalization::NumberFormatInfo* info, int32_t value, char16_t expChar, int32_t minDigits,
                                           bool positiveSign) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatExponent",
                                                                  {},
                                                                  { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(),
                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, info, value, expChar, minDigits, positiveSign);
}
inline void System::Number::FormatGeneral(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                          ::System::Globalization::NumberFormatInfo* info, char16_t expChar, bool bSuppressScientific) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "FormatGeneral",
                                                {},
                                                { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, expChar, bSuppressScientific);
}
inline void System::Number::FormatPercent(::by_ref<::System::Text::ValueStringBuilder> sb, ::by_ref<::System::Number_NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                          ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FormatPercent",
                                                                  {},
                                                                  { ::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(),
                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
inline void System::Number::RoundNumber(::by_ref<::System::Number_NumberBuffer> number, int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "RoundNumber", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, number, pos);
}
inline int32_t System::Number::FindSection(::System::ReadOnlySpan_1<char16_t> format, int32_t section) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "FindSection", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, format, section);
}
inline uint32_t System::Number::Low32(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Low32", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Number::High32(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "High32", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Number::Int64DivMod1E9(::by_ref<uint64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Int64DivMod1E9", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline bool System::Number::NumberToInt32(::by_ref<::System::Number_NumberBuffer> number, ::by_ref<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToInt32", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline bool System::Number::NumberToInt64(::by_ref<::System::Number_NumberBuffer> number, ::by_ref<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToInt64", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline bool System::Number::NumberToUInt32(::by_ref<::System::Number_NumberBuffer> number, ::by_ref<uint32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToUInt32", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline bool System::Number::NumberToUInt64(::by_ref<::System::Number_NumberBuffer> number, ::by_ref<uint64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToUInt64", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline int32_t System::Number::ParseInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseInt32",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, styles, info);
}
inline int64_t System::Number::ParseInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseInt64",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, styles, info);
}
inline uint32_t System::Number::ParseUInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseUInt32",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, styles, info);
}
inline uint64_t System::Number::ParseUInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseUInt64",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, styles, info);
}
inline bool System::Number::ParseNumber(::by_ref<char16_t*> str, char16_t* strEnd, ::System::Globalization::NumberStyles styles, ::by_ref<::System::Number_NumberBuffer> number,
                                        ::System::Globalization::NumberFormatInfo* info, bool parseDecimal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                       { "ParseNumber",
                                         {},
                                         { ::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                           ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, strEnd, styles, number, info, parseDecimal);
}
inline bool System::Number::TryParseInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                          ::by_ref<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseInt32",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result);
}
inline bool System::Number::TryParseInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                      ::by_ref<int32_t> result, ::by_ref<bool> failureIsOverflow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "TryParseInt32IntegerStyle",
                                                {},
                                                { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                  ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
inline bool System::Number::TryParseInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                      ::by_ref<int64_t> result, ::by_ref<bool> failureIsOverflow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "TryParseInt64IntegerStyle",
                                                {},
                                                { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                  ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
inline bool System::Number::TryParseInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                          ::by_ref<int64_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseInt64",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result);
}
inline bool System::Number::TryParseUInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                           ::by_ref<uint32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseUInt32",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result);
}
inline bool System::Number::TryParseUInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                       ::by_ref<uint32_t> result, ::by_ref<bool> failureIsOverflow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "TryParseUInt32IntegerStyle",
                                                {},
                                                { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                  ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
inline bool System::Number::TryParseUInt32HexNumberStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                         ::by_ref<uint32_t> result, ::by_ref<bool> failureIsOverflow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "TryParseUInt32HexNumberStyle",
                                                {},
                                                { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                  ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
inline bool System::Number::TryParseUInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                           ::by_ref<uint64_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseUInt64",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result);
}
inline bool System::Number::TryParseUInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                       ::by_ref<uint64_t> result, ::by_ref<bool> failureIsOverflow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "TryParseUInt64IntegerStyle",
                                                {},
                                                { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                  ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
inline bool System::Number::TryParseUInt64HexNumberStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                         ::by_ref<uint64_t> result, ::by_ref<bool> failureIsOverflow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "TryParseUInt64HexNumberStyle",
                                                {},
                                                { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                  ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
inline ::System::Decimal System::Number::ParseDecimal(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseDecimal",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value, styles, info);
}
inline bool System::Number::NumberBufferToDecimal(::by_ref<::System::Number_NumberBuffer> number, ::by_ref<::System::Decimal> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "NumberBufferToDecimal", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline double_t System::Number::ParseDouble(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseDouble",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, styles, info);
}
inline float_t System::Number::ParseSingle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ParseSingle",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, styles, info);
}
inline bool System::Number::TryParseDecimal(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                            ::by_ref<::System::Decimal> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseDecimal",
                                                                               {},
                                                                               { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                 ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result);
}
inline bool System::Number::TryParseDouble(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                           ::by_ref<double_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseDouble",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result);
}
inline bool System::Number::TryParseSingle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                           ::by_ref<float_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TryParseSingle",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                                                                        ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result);
}
inline void System::Number::StringToNumber(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::by_ref<::System::Number_NumberBuffer> number,
                                           ::System::Globalization::NumberFormatInfo* info, bool parseDecimal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                       { "StringToNumber",
                                         {},
                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                           ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, styles, number, info, parseDecimal);
}
inline bool System::Number::TryStringToNumber(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::by_ref<::System::Number_NumberBuffer> number,
                                              ::System::Globalization::NumberFormatInfo* info, bool parseDecimal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                       { "TryStringToNumber",
                                         {},
                                         { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(),
                                           ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, number, info, parseDecimal);
}
inline bool System::Number::TrailingZeros(::System::ReadOnlySpan_1<char16_t> value, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "TrailingZeros", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, index);
}
inline char16_t* System::Number::MatchChars(char16_t* p, char16_t* pEnd, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "MatchChars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t*>(nullptr, ___internal_method, p, pEnd, value);
}
inline bool System::Number::IsWhite(int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "IsWhite", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Number::IsDigit(int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "IsDigit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline void System::Number::ThrowOverflowOrFormatException(bool overflow, ::StringW overflowResourceKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "ThrowOverflowOrFormatException", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, overflow, overflowResourceKey);
}
inline bool System::Number::NumberBufferToDouble(::by_ref<::System::Number_NumberBuffer> number, ::by_ref<double_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberBufferToDouble", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline uint32_t System::Number::DigitsToInt(char16_t* p, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "DigitsToInt", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, p, count);
}
inline uint64_t System::Number::Mul32x32To64(uint32_t a, uint32_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Mul32x32To64", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, a, b);
}
inline uint64_t System::Number::Mul64Lossy(uint64_t a, uint64_t b, ::by_ref<int32_t> pexp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "Mul64Lossy", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, a, b, pexp);
}
inline int32_t System::Number::abs(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "abs", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline double_t System::Number::NumberToDouble(::by_ref<::System::Number_NumberBuffer> number) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(), { "NumberToDouble", {}, { ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, number);
}
inline void System::Number::DoubleToNumber(double_t value, int32_t precision, ::by_ref<::System::Number_NumberBuffer> number) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Number*>(),
                                              { "DoubleToNumber", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Number_NumberBuffer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, precision, number);
}
// Ctor Parameters []
constexpr ::System::Number::Number() {}
