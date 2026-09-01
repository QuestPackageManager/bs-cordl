#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Operators\RsaOaepWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__RsaOaepWrapper_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyUnwrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::*)(
    bool, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x340685c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*>(),
            { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3406ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*>(), { "get_AlgorithmDetails", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper.Unwrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockResult* (::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::Unwrap)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3406ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*>(),
                                                             { "Unwrap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper.Wrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockResult* (::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::Wrap)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3406bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*>(), { "Wrap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::__cordl_internal_get_algId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algId;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::__cordl_internal_get_algId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algId;
}
constexpr void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::__cordl_internal_set_algId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algId = value;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
inline void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::_ctor(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters,
                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*>(),
          { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forWrapping, parameters, digestOid);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::get_AlgorithmDetails() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*>(), { "get_AlgorithmDetails", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::Unwrap(::ArrayW<uint8_t> cipherText, int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*>(),
                                                           { "Unwrap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockResult*>(this, ___internal_method, cipherText, offset, length);
}
inline ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::Wrap(::ArrayW<uint8_t> keyData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*>(), { "Wrap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockResult*>(this, ___internal_method, keyData);
}
inline ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper* Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::New_ctor(bool forWrapping,
                                                                                                                              ::Org::BouncyCastle::Crypto::ICipherParameters* parameters,
                                                                                                                              ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper*>(forWrapping, parameters, digestOid));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IKeyWrapper"
constexpr Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::operator ::Org::BouncyCastle::Crypto::IKeyWrapper*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IKeyWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IKeyWrapper"
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::i___Org__BouncyCastle__Crypto__IKeyWrapper() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IKeyWrapper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IKeyUnwrapper"
constexpr Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::operator ::Org::BouncyCastle::Crypto::IKeyUnwrapper*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IKeyUnwrapper"
constexpr ::Org::BouncyCastle::Crypto::IKeyUnwrapper* Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::i___Org__BouncyCastle__Crypto__IKeyUnwrapper() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::RsaOaepWrapper() {}
