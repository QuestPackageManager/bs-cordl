#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsSrpIdentityManager.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager.GetLoginParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* (::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager::GetLoginParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager::GetLoginParameters(::ArrayW<uint8_t> identity) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>(this, ___internal_method, identity);
}
