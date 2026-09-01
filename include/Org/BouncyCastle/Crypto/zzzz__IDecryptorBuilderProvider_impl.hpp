#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IDecryptorBuilderProvider.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDecryptorBuilderProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider.CreateDecryptorBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherBuilder* (::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider::CreateDecryptorBuilder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::ICipherBuilder* Org::BouncyCastle::Crypto::IDecryptorBuilderProvider::CreateDecryptorBuilder(::System::Object* algorithmDetails) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherBuilder*>(this, ___internal_method, algorithmDetails);
}
