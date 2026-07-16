#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/Asn1CipherBuilderWithKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1CipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x340340c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340360c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(), { "get_AlgorithmDetails", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.GetMaxOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3403614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(), { "GetMaxOutputSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.BuildCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipher* (::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::BuildCipher)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x340364c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(), { "BuildCipher", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3403868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_get_encKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_get_encKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encKey;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_set_encKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encKey = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_get_algorithmIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithmIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_get_algorithmIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithmIdentifier;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__cordl_internal_set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithmIdentifier = value;
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encryptionOID, keySize, random);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_AlgorithmDetails() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(), { "get_AlgorithmDetails", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::GetMaxOutputSize(int32_t inputLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(), { "GetMaxOutputSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputLen);
}
inline ::Org::BouncyCastle::Crypto::ICipher* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::BuildCipher(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(), { "BuildCipher", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipher*>(this, ___internal_method, stream);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*
Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* random) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*>(encryptionOID, keySize, random));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilderWithKey"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::operator ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherBuilderWithKey"
constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::i___Org__BouncyCastle__Crypto__ICipherBuilderWithKey() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilder"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::operator ::Org::BouncyCastle::Crypto::ICipherBuilder*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherBuilder"
constexpr ::Org::BouncyCastle::Crypto::ICipherBuilder* Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::i___Org__BouncyCastle__Crypto__ICipherBuilder() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::Asn1CipherBuilderWithKey() {}
