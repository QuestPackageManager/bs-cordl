#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Operators\Asn1VerifierFactoryProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1VerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340a600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider.CreateVerifierFactory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IVerifierFactory* (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::CreateVerifierFactory)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x340a608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>(),
                                                                                           { "CreateVerifierFactory", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider.get_SignatureAlgNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x340a6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>(), { "get_SignatureAlgNames", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::__cordl_internal_get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::__cordl_internal_get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::__cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKey = value;
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicKey);
}
inline ::Org::BouncyCastle::Crypto::IVerifierFactory* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::CreateVerifierFactory(::System::Object* algorithmDetails) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>(),
                                                                                         { "CreateVerifierFactory", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IVerifierFactory*>(this, ___internal_method, algorithmDetails);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::get_SignatureAlgNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>(), { "get_SignatureAlgNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*
Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>(publicKey));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifierFactoryProvider"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::operator ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IVerifierFactoryProvider"
constexpr ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::i___Org__BouncyCastle__Crypto__IVerifierFactoryProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::Asn1VerifierFactoryProvider() {}
