#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsSignedDataStreamGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__ISignerInfoGenerator_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__ISignerInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::*)(
    ::Org::BouncyCastle::Cms::ISignerInfoGenerator*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2666410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::ISignerInfoGenerator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder.get_DigestAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::*)()>(
        &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::get_DigestAlgorithm)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2668128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder*>::get(),
                                    "get_DigestAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::ISignerInfoGenerator*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::__cordl_internal_get_signerInf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerInf;
}
constexpr ::Org::BouncyCastle::Cms::ISignerInfoGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::__cordl_internal_get_signerInf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerInf;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::__cordl_internal_set_signerInf(::Org::BouncyCastle::Cms::ISignerInfoGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signerInf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::__cordl_internal_get_digestOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOID;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::__cordl_internal_get_digestOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOID;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::__cordl_internal_set_digestOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digestOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::_ctor(::Org::BouncyCastle::Cms::ISignerInfoGenerator* signerInf, ::StringW digestOID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::ISignerInfoGenerator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signerInf, digestOID);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::get_DigestAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder*>::get(),
                                  "get_DigestAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder*
Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::New_ctor(::Org::BouncyCastle::Cms::ISignerInfoGenerator* signerInf, ::StringW digestOID) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder*>(signerInf, digestOID));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::*)(
    ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::StringW, ::StringW,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::_ctor)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x26660f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerInfo* (
    ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::Generate)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0x2668248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl*>::get(), "Generate",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outer;
}
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outer;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_set_outer(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__signerIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signerIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__signerIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signerIdentifier;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_set__signerIdentifier(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signerIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__digestOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____digestOID;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__digestOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____digestOID;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_set__digestOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____digestOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__encOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encOID;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__encOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encOID;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_set__encOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__sAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sAttr;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__sAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sAttr;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_set__sAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sAttr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__unsAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unsAttr;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__unsAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unsAttr;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_set__unsAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unsAttr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__encName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encName;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__encName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encName;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_set__encName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::ISigner*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__sig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sig;
}
constexpr ::Org::BouncyCastle::Crypto::ISigner* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_get__sig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sig;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::__cordl_internal_set__sig(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::_ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer,
                                                                                                ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                                                ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW digestOID,
                                                                                                ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr,
                                                                                                ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outer, key, signerIdentifier, digestOID, encOID, sAttr, unsAttr);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::Generate(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> calculatedDigest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl*>::get(),
                                               "Generate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerInfo*, false>(this, ___internal_method, contentType, digestAlgorithm, calculatedDigest);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::New_ctor(
    ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier,
    ::StringW digestOID, ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl*>(outer, key, signerIdentifier, digestOID, encOID, sAttr, unsAttr));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::ISignerInfoGenerator"
constexpr Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::operator ::Org::BouncyCastle::Cms::ISignerInfoGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::ISignerInfoGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::ISignerInfoGenerator"
constexpr ::Org::BouncyCastle::Cms::ISignerInfoGenerator* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::i___Org__BouncyCastle__Cms__ISignerInfoGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::ISignerInfoGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::*)(
    ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*, ::System::IO::Stream*, ::StringW, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2667b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2668afc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2668b20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2668b44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream.DoClose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::DoClose)> {
  constexpr static std::size_t size = 0xff0;
  constexpr static std::size_t addrs = 0x2668b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(),
                                                 "DoClose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream.WriteToGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Asn1::Asn1Generator*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::WriteToGenerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2669b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(),
                                                 "WriteToGenerator", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Generator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outer;
}
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outer;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_set_outer(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get__out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get__out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_set__out(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____out)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get__contentOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentOID;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get__contentOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentOID;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_set__contentOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contentOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get__sGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get__sGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sGen;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_set__sGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get__sigGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sigGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get__sigGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sigGen;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_set__sigGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sigGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get__eiGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eiGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_get__eiGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eiGen;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::__cordl_internal_set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eiGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::_ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::System::IO::Stream* outStream,
                                                                                                  ::StringW contentOID, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen,
                                                                                                  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sigGen,
                                                                                                  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outer, outStream, contentOID, sGen, sigGen, eiGen);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes, off, len);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::Close() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::DoClose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(),
                                               "DoClose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::WriteToGenerator(::Org::BouncyCastle::Asn1::Asn1Generator* ag,
                                                                                                             ::Org::BouncyCastle::Asn1::Asn1Encodable* ae) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>::get(),
                                               "WriteToGenerator", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Generator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ag, ae);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::New_ctor(
    ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::System::IO::Stream* outStream, ::StringW contentOID, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sigGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*>(outer, outStream, contentOID, sGen, sigGen, eiGen));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2664f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2665554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.SetBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::SetBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266562c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "SetBufferSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddDigests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddDigests)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2665634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddDigests", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddDigests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddDigests)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x26651c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddDigests", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2665864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26659a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*,
    ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2665ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*,
    ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2665b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26658e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2665a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2665dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW, ::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2665f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*,
    ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2666034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2665e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW, ::StringW, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2665f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.DoAddSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::StringW, ::StringW, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::DoAddSigner)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2665c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "DoAddSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSignerCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::Org::BouncyCastle::Cms::SignerInformation*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSignerCallback)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x266643c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26665d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::System::IO::Stream*, bool)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26665d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(),
                                                                               "Open", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::System::IO::Stream*, bool, ::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2666654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, bool)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2665010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, bool, ::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x26666dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.RegisterDigestOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::RegisterDigestOid)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2666474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "RegisterDigestOid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.ConfigureDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::ConfigureDigest)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2665638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "ConfigureDigest",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(
    ::System::IO::Stream*, ::StringW, bool, ::System::IO::Stream*, ::Org::BouncyCastle::Cms::CmsProcessable*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Generate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2667bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.CalculateVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (
    ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::CalculateVersion)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x2666f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "CalculateVersion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.CheckForVersion3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::CheckForVersion3)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2667ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "CheckForVersion3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AttachDigestsToOutputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(::System::Collections::ICollection*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AttachDigestsToOutputStream)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x2667794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AttachDigestsToOutputStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.GetSafeOutputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::GetSafeOutputStream)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2668054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "GetSafeOutputStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.GetSafeTeeOutputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(::System::IO::Stream*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::GetSafeTeeOutputStream)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x26676b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "GetSafeTeeOutputStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__signerInfs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signerInfs;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__signerInfs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signerInfs;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_set__signerInfs(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signerInfs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__messageDigestOids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageDigestOids;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__messageDigestOids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageDigestOids;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_set__messageDigestOids(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____messageDigestOids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__messageDigests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageDigests;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__messageDigests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageDigests;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_set__messageDigests(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____messageDigests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__messageHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageHashes;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__messageHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageHashes;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_set__messageHashes(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____messageHashes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__messageDigestsLocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageDigestsLocked;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__messageDigestsLocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageDigestsLocked;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_set__messageDigestsLocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____messageDigestsLocked = value;
}
constexpr int32_t& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr int32_t const& Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_get__bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__cordl_internal_set__bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferSize = value;
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get>(
      std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rand);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::SetBufferSize(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "SetBufferSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferSize);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddDigests(::ArrayW<::StringW, ::Array<::StringW>*> digestOids) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddDigests", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digestOids);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddDigests(::System::Collections::IEnumerable* digestOids) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddDigests", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digestOids);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                            ::StringW digestOid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, cert, digestOid);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                            ::StringW encryptionOid, ::StringW digestOid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, cert, encryptionOid, digestOid);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                            ::StringW digestOid, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                            ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, cert, digestOid, signedAttr, unsignedAttr);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                            ::StringW encryptionOid, ::StringW digestOid, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                            ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, cert, encryptionOid, digestOid, signedAttr, unsignedAttr);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                            ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator,
                                                                            ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, cert, digestOid, signedAttrGenerator, unsignedAttrGenerator);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                            ::StringW encryptionOid, ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator,
                                                                            ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, cert, encryptionOid, digestOid, signedAttrGenerator, unsignedAttrGenerator);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID,
                                                                            ::StringW digestOid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, subjectKeyID, digestOid);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID,
                                                                            ::StringW encryptionOid, ::StringW digestOid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, subjectKeyID, encryptionOid, digestOid);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID,
                                                                            ::StringW digestOid, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                            ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, subjectKeyID, digestOid, signedAttr, unsignedAttr);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID,
                                                                            ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator,
                                                                            ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, subjectKeyID, digestOid, signedAttrGenerator, unsignedAttrGenerator);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID,
                                                                            ::StringW encryptionOid, ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator,
                                                                            ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, subjectKeyID, encryptionOid, digestOid, signedAttrGenerator, unsignedAttrGenerator);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::DoAddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                              ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW encryptionOid, ::StringW digestOid,
                                                                              ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator,
                                                                              ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "DoAddSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, signerIdentifier, encryptionOid, digestOid, signedAttrGenerator, unsignedAttrGenerator);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSignerCallback(::Org::BouncyCastle::Cms::SignerInformation* si) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, si);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open(::System::IO::Stream* outStream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Open",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open(::System::IO::Stream* outStream, bool encapsulate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream, encapsulate);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open(::System::IO::Stream* outStream, bool encapsulate, ::System::IO::Stream* dataOutputStream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream, encapsulate, dataOutputStream);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW signedContentType, bool encapsulate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream, signedContentType, encapsulate);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW signedContentType, bool encapsulate,
                                                                                        ::System::IO::Stream* dataOutputStream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream, signedContentType, encapsulate, dataOutputStream);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::RegisterDigestOid(::StringW digestOid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "RegisterDigestOid",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digestOid);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::ConfigureDigest(::StringW digestOid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "ConfigureDigest",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digestOid);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Generate(::System::IO::Stream* outStream, ::StringW eContentType, bool encapsulate, ::System::IO::Stream* dataOutputStream,
                                                                           ::Org::BouncyCastle::Cms::CmsProcessable* content) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStream, eContentType, encapsulate, dataOutputStream, content);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::CalculateVersion(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentOid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "CalculateVersion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method, contentOid);
}
inline bool Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::CheckForVersion3(::System::Collections::IList* signerInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "CheckForVersion3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, signerInfos);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AttachDigestsToOutputStream(::System::Collections::ICollection* digests, ::System::IO::Stream* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "AttachDigestsToOutputStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, digests, s);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::GetSafeOutputStream(::System::IO::Stream* s) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "GetSafeOutputStream",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, s);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::GetSafeTeeOutputStream(::System::IO::Stream* s1, ::System::IO::Stream* s2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>::get(), "GetSafeTeeOutputStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, s1, s2);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>());
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*>(rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::CmsSignedDataStreamGenerator() {}
