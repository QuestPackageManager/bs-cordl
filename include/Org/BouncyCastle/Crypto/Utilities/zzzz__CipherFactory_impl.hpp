#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Utilities/zzzz__CipherFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Utilities::CipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Utilities::CipherFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x112c878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherFactory.CreateContentCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
        &::Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateContentCipher)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x112c880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>::get(), "CreateContentCipher", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherFactory.CreateCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::BufferedBlockCipher* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateCipher)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x112cfd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>::get(), "CreateCipher", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Utilities::CipherFactory::setStaticF_rc2Ekb(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t, ::Array<int16_t>*>, "rc2Ekb",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>::get>(
      std::forward<::ArrayW<int16_t, ::Array<int16_t>*>>(value));
}
inline ::ArrayW<int16_t, ::Array<int16_t>*> Org::BouncyCastle::Crypto::Utilities::CipherFactory::getStaticF_rc2Ekb() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t, ::Array<int16_t>*>, "rc2Ekb",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Utilities::CipherFactory* Org::BouncyCastle::Crypto::Utilities::CipherFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>());
}
inline void Org::BouncyCastle::Crypto::Utilities::CipherFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateContentCipher(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* encKey,
                                                                                                  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encryptionAlgID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>::get(), "CreateContentCipher", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, forEncryption, encKey, encryptionAlgID);
}
inline ::Org::BouncyCastle::Crypto::BufferedBlockCipher* Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateCipher(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::CipherFactory*>::get(), "CreateCipher", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::BufferedBlockCipher*, false>(nullptr, ___internal_method, algorithm);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Utilities::CipherFactory::CipherFactory() {}
