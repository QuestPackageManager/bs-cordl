#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Operators\RsaOaepWrapperProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__RsaOaepWrapperProvider_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__WrapperProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3406610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider.Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3406cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*>(),
                            { "Org.BouncyCastle.Crypto.Operators.WrapperProvider.CreateWrapper", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::__cordl_internal_get_digestOid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOid;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::__cordl_internal_get_digestOid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOid;
}
constexpr void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::__cordl_internal_set_digestOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestOid = value;
}
inline void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digestOid);
}
inline ::System::Object*
Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper(bool forWrapping,
                                                                                                                              ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*>(),
                          { "Org.BouncyCastle.Crypto.Operators.WrapperProvider.CreateWrapper", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, forWrapping, parameters);
}
inline ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*
Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*>(digestOid));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Operators::WrapperProvider"
constexpr Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::operator ::Org::BouncyCastle::Crypto::Operators::WrapperProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Operators::WrapperProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Operators::WrapperProvider"
constexpr ::Org::BouncyCastle::Crypto::Operators::WrapperProvider* Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::i___Org__BouncyCastle__Crypto__Operators__WrapperProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Operators::WrapperProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::RsaOaepWrapperProvider() {}
