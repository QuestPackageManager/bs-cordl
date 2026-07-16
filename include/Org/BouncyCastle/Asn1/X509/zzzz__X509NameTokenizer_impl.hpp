#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/X509NameTokenizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509NameTokenizer_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3671a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::*)(::StringW, char16_t)>(&::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3671c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer.HasMoreTokens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::*)()>(&::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::HasMoreTokens)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3671ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(), { "HasMoreTokens", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer.NextToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::*)()>(&::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::NextToken)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3671a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(), { "NextToken", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr char16_t& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_get_separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___separator;
}
constexpr char16_t const& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_get_separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___separator;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_set_separator(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___separator = value;
}
constexpr ::System::Text::StringBuilder*& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::System::Text::StringBuilder* const& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__cordl_internal_set_buffer(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
inline void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::_ctor(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid);
}
inline void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::_ctor(::StringW oid, char16_t separator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, separator);
}
inline bool Org::BouncyCastle::Asn1::X509::X509NameTokenizer::HasMoreTokens() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(), { "HasMoreTokens", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::X509NameTokenizer::NextToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(), { "NextToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer* Org::BouncyCastle::Asn1::X509::X509NameTokenizer::New_ctor(::StringW oid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(oid));
}
inline ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer* Org::BouncyCastle::Asn1::X509::X509NameTokenizer::New_ctor(::StringW oid, char16_t separator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(oid, separator));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::X509NameTokenizer() {}
