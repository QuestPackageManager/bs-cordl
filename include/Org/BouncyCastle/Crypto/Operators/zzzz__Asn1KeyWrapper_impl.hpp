#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Operators\Asn1KeyWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1KeyWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)(::StringW, ::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3405d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x340604c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>(), { "get_AlgorithmDetails", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper.Wrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockResult* (::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Wrap)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x34060f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>(), { "Wrap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_set_algorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithm = value;
}
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_get_wrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapper;
}
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* const& Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_get_wrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapper;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__cordl_internal_set_wrapper(::Org::BouncyCastle::Crypto::IKeyWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wrapper = value;
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::_ctor(::StringW algorithm, ::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, cert);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::get_AlgorithmDetails() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>(), { "get_AlgorithmDetails", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Wrap(::ArrayW<uint8_t> keyData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>(), { "Wrap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockResult*>(this, ___internal_method, keyData);
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::New_ctor(::StringW algorithm, ::Org::BouncyCastle::X509::X509Certificate* cert) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper*>(algorithm, cert));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IKeyWrapper"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::operator ::Org::BouncyCastle::Crypto::IKeyWrapper*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IKeyWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IKeyWrapper"
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::i___Org__BouncyCastle__Crypto__IKeyWrapper() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IKeyWrapper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Asn1KeyWrapper() {}
