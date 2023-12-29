#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Utilities/zzzz__CipherKeyGeneratorFactory_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf4b0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory.CreateKeyGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::CipherKeyGenerator* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::CreateKeyGenerator)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0xf4b0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>::get(), "CreateKeyGenerator", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory.CreateCipherKeyGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::CipherKeyGenerator* (*)(::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::CreateCipherKeyGenerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xf4b52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>::get(), "CreateCipherKeyGenerator", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory* Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>());
}
inline void Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::CreateKeyGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm,
                                                                                                                                            ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>::get(), "CreateKeyGenerator", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::CipherKeyGenerator*, false>(nullptr, ___internal_method, algorithm, random);
}
inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::CreateCipherKeyGenerator(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                                                                  int32_t keySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>::get(), "CreateCipherKeyGenerator", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::CipherKeyGenerator*, false>(nullptr, ___internal_method, random, keySize);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::CipherKeyGeneratorFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
