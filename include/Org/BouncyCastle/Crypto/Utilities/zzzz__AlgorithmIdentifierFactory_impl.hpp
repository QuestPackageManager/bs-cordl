#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Utilities/zzzz__AlgorithmIdentifierFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory.GenerateEncryptionAlgID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::GenerateEncryptionAlgID)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x1030f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>::get(),
                                                 "GenerateEncryptionAlgID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10315e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::setStaticF_IDEA_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IDEA_CBC",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::getStaticF_IDEA_CBC() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IDEA_CBC",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>::get>();
}
inline void Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::setStaticF_CAST5_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CAST5_CBC",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::getStaticF_CAST5_CBC() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CAST5_CBC",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>::get>();
}
inline void Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::setStaticF_rc2Table(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t, ::Array<int16_t>*>, "rc2Table",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>::get>(
      std::forward<::ArrayW<int16_t, ::Array<int16_t>*>>(value));
}
inline ::ArrayW<int16_t, ::Array<int16_t>*> Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::getStaticF_rc2Table() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t, ::Array<int16_t>*>, "rc2Table",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>::get>();
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*
Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::GenerateEncryptionAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                                          ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>::get(),
                                               "GenerateEncryptionAlgID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(nullptr, ___internal_method, encryptionOID, keySize, random);
}
inline ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory* Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>());
}
inline void Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::AlgorithmIdentifierFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
