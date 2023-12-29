#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__PrivateKeyInfoFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__EncryptedPrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::*)()>(
    &::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x107604c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory.CreatePrivateKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1076054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), "CreatePrivateKeyInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory.CreatePrivateKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
        &::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo)> {
  constexpr static std::size_t size = 0xfa8;
  constexpr static std::size_t addrs = 0x107605c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), "CreatePrivateKeyInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory.CreatePrivateKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (*)(::ArrayW<char16_t, ::Array<char16_t>*>, ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*)>(
        &::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1077110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), "CreatePrivateKeyInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory.CreatePrivateKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (*)(::ArrayW<char16_t, ::Array<char16_t>*>, bool, ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*)>(
        &::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x107711c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), "CreatePrivateKeyInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory.ExtractBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::ExtractBytes)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1077004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), "ExtractBytes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory* Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>());
}
inline void Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), "CreatePrivateKeyInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, false>(nullptr, ___internal_method, privateKey);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                                             ::Org::BouncyCastle::Asn1::Asn1Set* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), "CreatePrivateKeyInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, false>(nullptr, ___internal_method, privateKey, attributes);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                                                             ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), "CreatePrivateKeyInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, false>(nullptr, ___internal_method, passPhrase, encInfo);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool wrongPkcs12Zero,
                                                                                                                             ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), "CreatePrivateKeyInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, false>(nullptr, ___internal_method, passPhrase, wrongPkcs12Zero, encInfo);
}
inline void Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::ExtractBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> encKey, int32_t size, int32_t offSet, ::Org::BouncyCastle::Math::BigInteger* bI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*>::get(), "ExtractBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, encKey, size, offSet, bI);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::PrivateKeyInfoFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
