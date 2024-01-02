#pragma once
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KekRecipientInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KekRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KekRecipientInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KekRecipientInformation::*)(
    ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(&::Org::BouncyCastle::Cms::KekRecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x11e391c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInformation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSecureReadable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KekRecipientInformation.GetContentStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (
    ::Org::BouncyCastle::Cms::KekRecipientInformation::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Cms::KekRecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x120273c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInformation*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*& Org::BouncyCastle::Cms::KekRecipientInformation::__get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*> const& Org::BouncyCastle::Cms::KekRecipientInformation::__get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Cms::KekRecipientInformation::__set_info(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::KekRecipientInformation* Org::BouncyCastle::Cms::KekRecipientInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info,
                                                                                                                    ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::KekRecipientInformation*>(info, secureReadable));
}
inline void Org::BouncyCastle::Cms::KekRecipientInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInformation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSecureReadable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, secureReadable);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::KekRecipientInformation::GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInformation*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*, false>(this, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::KekRecipientInformation::KekRecipientInformation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
