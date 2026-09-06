#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IVerifierFactoryProvider.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider.CreateVerifierFactory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IVerifierFactory* (::Org::BouncyCastle::Crypto::IVerifierFactoryProvider::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::IVerifierFactoryProvider::CreateVerifierFactory)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::IVerifierFactory* Org::BouncyCastle::Crypto::IVerifierFactoryProvider::CreateVerifierFactory(::System::Object* algorithmDetails) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IVerifierFactory*>(this, ___internal_method, algorithmDetails);
}
