#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\OidTokenizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__OidTokenizer_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::OidTokenizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::OidTokenizer::*)(::StringW)>(&::Org::BouncyCastle::Asn1::OidTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3693c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::OidTokenizer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::OidTokenizer.get_HasMoreTokens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::OidTokenizer::*)()>(&::Org::BouncyCastle::Asn1::OidTokenizer::get_HasMoreTokens)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3693c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::OidTokenizer*>(), { "get_HasMoreTokens", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::OidTokenizer.NextToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::OidTokenizer::*)()>(&::Org::BouncyCastle::Asn1::OidTokenizer::NextToken)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3693c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::OidTokenizer*>(), { "NextToken", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Asn1::OidTokenizer::__cordl_internal_get_oid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oid;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::OidTokenizer::__cordl_internal_get_oid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oid;
}
constexpr void Org::BouncyCastle::Asn1::OidTokenizer::__cordl_internal_set_oid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oid = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::OidTokenizer::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::OidTokenizer::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void Org::BouncyCastle::Asn1::OidTokenizer::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
inline void Org::BouncyCastle::Asn1::OidTokenizer::_ctor(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::OidTokenizer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid);
}
inline bool Org::BouncyCastle::Asn1::OidTokenizer::get_HasMoreTokens() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::OidTokenizer*>(), { "get_HasMoreTokens", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::OidTokenizer::NextToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::OidTokenizer*>(), { "NextToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::OidTokenizer* Org::BouncyCastle::Asn1::OidTokenizer::New_ctor(::StringW oid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::OidTokenizer*>(oid));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::OidTokenizer::OidTokenizer() {}
