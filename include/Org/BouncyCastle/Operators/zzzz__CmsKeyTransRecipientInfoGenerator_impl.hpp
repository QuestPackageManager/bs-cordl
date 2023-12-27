#pragma once
#include "Org/BouncyCastle/Cms/zzzz__KeyTransRecipientInfoGenerator_impl.hpp"
#include "Org/BouncyCastle/Operators/zzzz__CmsKeyTransRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)(
    ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Crypto::IKeyWrapper*)>(&::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xf2d928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IKeyWrapper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::IKeyWrapper*)>(&::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xf2da74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IKeyWrapper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)()>(&::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xf2dae8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator.GenerateWrappedKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)(
    ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(&::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::GenerateWrappedKey)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xf2dbd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::__get_keyWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IKeyWrapper*> const& Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::__get_keyWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyWrapper;
}
constexpr void Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::__set_keyWrapper(::Org::BouncyCastle::Crypto::IKeyWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*
Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::New_ctor(::Org::BouncyCastle::X509::X509Certificate* recipCert, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(recipCert, keyWrapper));
}
inline void Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor(::Org::BouncyCastle::X509::X509Certificate* recipCert, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IKeyWrapper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recipCert, keyWrapper);
}
inline ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*
Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>(subjectKeyID, keyWrapper));
}
inline void Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IKeyWrapper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subjectKeyID, keyWrapper);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::get_AlgorithmDetails() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>::get(),
                                               "get_AlgorithmDetails", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::GenerateWrappedKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*>::get(), "GenerateWrappedKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, contentKey);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::CmsKeyTransRecipientInfoGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
