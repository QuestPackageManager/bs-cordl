#pragma once
// IWYU pragma private; include "System/Net/WebUtility.hpp"
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_impl.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebUtility_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_def.hpp"
#include "System/Net/zzzz__WebUtility_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Net::WebUtility_UrlDecoder.FlushBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebUtility_UrlDecoder::*)()>(&::System::Net::WebUtility_UrlDecoder::FlushBytes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x640fe24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(), { "FlushBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility_UrlDecoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebUtility_UrlDecoder::*)(int32_t, ::System::Text::Encoding*)>(&::System::Net::WebUtility_UrlDecoder::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x640faf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility_UrlDecoder.AddChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebUtility_UrlDecoder::*)(char16_t)>(&::System::Net::WebUtility_UrlDecoder::AddChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x640fc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(), { "AddChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility_UrlDecoder.AddByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebUtility_UrlDecoder::*)(uint8_t)>(&::System::Net::WebUtility_UrlDecoder::AddByte)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x640fb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(), { "AddByte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility_UrlDecoder.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebUtility_UrlDecoder::*)()>(&::System::Net::WebUtility_UrlDecoder::GetString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x640fc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(), { "GetString", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr int32_t const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferSize = value;
}
constexpr int32_t& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__numChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numChars;
}
constexpr int32_t const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__numChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numChars;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__numChars(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numChars = value;
}
constexpr ::ArrayW<char16_t>& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__charBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charBuffer;
}
constexpr ::ArrayW<char16_t> const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__charBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charBuffer;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__charBuffer(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charBuffer = value;
}
constexpr int32_t& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__numBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numBytes;
}
constexpr int32_t const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__numBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numBytes;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__numBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numBytes = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteBuffer;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__byteBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____byteBuffer = value;
}
constexpr ::System::Text::Encoding*& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoding = value;
}
inline void System::Net::WebUtility_UrlDecoder::FlushBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(), { "FlushBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebUtility_UrlDecoder::_ctor(int32_t bufferSize, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize, encoding);
}
inline void System::Net::WebUtility_UrlDecoder::AddChar(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(), { "AddChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Net::WebUtility_UrlDecoder::AddByte(uint8_t b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(), { "AddByte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline ::StringW System::Net::WebUtility_UrlDecoder::GetString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(), { "GetString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::WebUtility_UrlDecoder* System::Net::WebUtility_UrlDecoder::New_ctor(int32_t bufferSize, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebUtility_UrlDecoder*>(bufferSize, encoding));
}
// Ctor Parameters []
constexpr ::System::Net::WebUtility_UrlDecoder::WebUtility_UrlDecoder() {}
//  Writing Method size for method: ::System::Net::WebUtility.HtmlEncode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebUtility::HtmlEncode)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x640f17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "HtmlEncode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.HtmlEncode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::IO::TextWriter*)>(&::System::Net::WebUtility::HtmlEncode)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x640f3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "HtmlEncode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::TextWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.IndexOfHtmlEncodingChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Net::WebUtility::IndexOfHtmlEncodingChars)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x640f2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "IndexOfHtmlEncodingChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.get_HtmlEncodeConformance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::UnicodeEncodingConformance (*)()>(&::System::Net::WebUtility::get_HtmlEncodeConformance)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x640f75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "get_HtmlEncodeConformance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlDecodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::System::Net::WebUtility::UrlDecodeInternal)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x640f8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "UrlDecodeInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlDecode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebUtility::UrlDecode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x640fcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "UrlDecode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.GetNextUnicodeScalarValueFromUtf16Surrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<char16_t*>, ::by_ref<int32_t>)>(&::System::Net::WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x640f848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(),
                                                             { "GetNextUnicodeScalarValueFromUtf16Surrogate", {}, { ::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.HexToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::System::Net::WebUtility::HexToInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x640fb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "HexToInt", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebUtility::setStaticF__htmlEntityEndingChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "_htmlEntityEndingChars", ::System::Net::WebUtility*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::WebUtility::getStaticF__htmlEntityEndingChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "_htmlEntityEndingChars", ::System::Net::WebUtility*>();
}
inline void System::Net::WebUtility::setStaticF__htmlDecodeConformance(::System::Net::Configuration::UnicodeDecodingConformance value) {
  ::cordl_internals::setStaticField<::System::Net::Configuration::UnicodeDecodingConformance, "_htmlDecodeConformance", ::System::Net::WebUtility*>(
      std::forward<::System::Net::Configuration::UnicodeDecodingConformance>(value));
}
inline ::System::Net::Configuration::UnicodeDecodingConformance System::Net::WebUtility::getStaticF__htmlDecodeConformance() {
  return ::cordl_internals::getStaticField<::System::Net::Configuration::UnicodeDecodingConformance, "_htmlDecodeConformance", ::System::Net::WebUtility*>();
}
inline void System::Net::WebUtility::setStaticF__htmlEncodeConformance(::System::Net::Configuration::UnicodeEncodingConformance value) {
  ::cordl_internals::setStaticField<::System::Net::Configuration::UnicodeEncodingConformance, "_htmlEncodeConformance", ::System::Net::WebUtility*>(
      std::forward<::System::Net::Configuration::UnicodeEncodingConformance>(value));
}
inline ::System::Net::Configuration::UnicodeEncodingConformance System::Net::WebUtility::getStaticF__htmlEncodeConformance() {
  return ::cordl_internals::getStaticField<::System::Net::Configuration::UnicodeEncodingConformance, "_htmlEncodeConformance", ::System::Net::WebUtility*>();
}
inline ::StringW System::Net::WebUtility::HtmlEncode(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "HtmlEncode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline void System::Net::WebUtility::HtmlEncode(::StringW value, ::System::IO::TextWriter* output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "HtmlEncode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::TextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, output);
}
inline int32_t System::Net::WebUtility::IndexOfHtmlEncodingChars(::StringW s, int32_t startPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "IndexOfHtmlEncodingChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, startPos);
}
inline ::System::Net::Configuration::UnicodeEncodingConformance System::Net::WebUtility::get_HtmlEncodeConformance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "get_HtmlEncodeConformance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::UnicodeEncodingConformance>(nullptr, ___internal_method);
}
inline ::StringW System::Net::WebUtility::UrlDecodeInternal(::StringW value, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "UrlDecodeInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, encoding);
}
inline ::StringW System::Net::WebUtility::UrlDecode(::StringW encodedValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "UrlDecode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, encodedValue);
}
inline int32_t System::Net::WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate(::by_ref<char16_t*> pch, ::by_ref<int32_t> charsRemaining) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(),
                                                           { "GetNextUnicodeScalarValueFromUtf16Surrogate", {}, { ::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pch, charsRemaining);
}
inline int32_t System::Net::WebUtility::HexToInt(char16_t h) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebUtility*>(), { "HexToInt", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h);
}
// Ctor Parameters []
constexpr ::System::Net::WebUtility::WebUtility() {}
