#pragma once
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__PasswordRecipientInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__PasswordRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::PasswordRecipientInformation::*)(
    ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(&::Org::BouncyCastle::Cms::PasswordRecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x11e3f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSecureReadable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInformation.get_KeyDerivationAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::PasswordRecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::PasswordRecipientInformation::get_KeyDerivationAlgorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1207ae0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInformation.GetContentStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (
    ::Org::BouncyCastle::Cms::PasswordRecipientInformation::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Cms::PasswordRecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x1207afc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*& Org::BouncyCastle::Cms::PasswordRecipientInformation::__get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*> const& Org::BouncyCastle::Cms::PasswordRecipientInformation::__get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Cms::PasswordRecipientInformation::__set_info(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::PasswordRecipientInformation* Org::BouncyCastle::Cms::PasswordRecipientInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info,
                                                                                                                              ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>(info, secureReadable));
}
inline void Org::BouncyCastle::Cms::PasswordRecipientInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSecureReadable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, secureReadable);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::PasswordRecipientInformation::get_KeyDerivationAlgorithm() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::PasswordRecipientInformation::GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*, false>(this, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::PasswordRecipientInformation::PasswordRecipientInformation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
