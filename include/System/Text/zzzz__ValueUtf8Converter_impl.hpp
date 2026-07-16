#pragma once
// IWYU pragma private; include "System/Text/ValueUtf8Converter.hpp"
#include "System/zzzz__Span_1_impl.hpp"
#include "System/Text/zzzz__ValueUtf8Converter_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Text::ValueUtf8Converter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueUtf8Converter::*)(::System::Span_1<uint8_t>)>(&::System::Text::ValueUtf8Converter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ae57fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::ValueUtf8Converter>(), { ".ctor", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueUtf8Converter.ConvertAndTerminateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<uint8_t> (::System::Text::ValueUtf8Converter::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::System::Text::ValueUtf8Converter::ConvertAndTerminateString)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5ae5808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::ValueUtf8Converter>(), { "ConvertAndTerminateString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueUtf8Converter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::ValueUtf8Converter::*)()>(&::System::Text::ValueUtf8Converter::Dispose)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ae5af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::ValueUtf8Converter>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Text::ValueUtf8Converter::_ctor(::System::Span_1<uint8_t> initialBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::ValueUtf8Converter>(), { ".ctor", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialBuffer);
}
inline ::System::Span_1<uint8_t> System::Text::ValueUtf8Converter::ConvertAndTerminateString(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::ValueUtf8Converter>(), { "ConvertAndTerminateString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>>(*this, ___internal_method, value);
}
inline void System::Text::ValueUtf8Converter::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::ValueUtf8Converter>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bytes", ty: "::System::Span_1<uint8_t>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Text::ValueUtf8Converter::ValueUtf8Converter(::ArrayW<uint8_t> _arrayToReturnToPool, ::System::Span_1<uint8_t> _bytes) noexcept {
  this->_arrayToReturnToPool = _arrayToReturnToPool;
  this->_bytes = _bytes;
}
// Ctor Parameters []
constexpr ::System::Text::ValueUtf8Converter::ValueUtf8Converter() {}
