#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthEnvelopedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthEnvelopedData_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::*)(
    ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*)>(&::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11dc4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable.get_Algorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::*)()>(&::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::get_Algorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11dc4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                                                 "get_Algorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable.get_CryptoObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::*)()>(
    &::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::get_CryptoObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11dc4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                                                 "get_CryptoObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable.GetReadable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Cms::CmsReadable* (::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
        &::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::GetReadable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x11dc4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(), "GetReadable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable* Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::i___Org__BouncyCastle__Cms__CmsSecureReadable() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*& Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::__get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*> const&
Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::__get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::__set_parent(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*
Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::New_ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>(parent));
}
inline void Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::_ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::get_Algorithm() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                                               "get_Algorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::get_CryptoObject() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(),
                                               "get_CryptoObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsReadable* Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*>::get(), "GetReadable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsReadable*, false>(this, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11dc358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11dc48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::*)(::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(
    &::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x11dc37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_recipientInfoStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfoStore;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_recipientInfoStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfoStore;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recipientInfoStore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_contentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_contentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_originator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originator;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_originator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originator;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_authEncAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authEncAlg;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_authEncAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authEncAlg;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_authEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authEncAlg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_authAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authAttrs;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_authAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authAttrs;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authAttrs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_unauthAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unauthAttrs;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__get_unauthAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unauthAttrs;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unauthAttrs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> authEnvData) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(authEnvData));
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> authEnvData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, authEnvData);
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::New_ctor(::System::IO::Stream* authEnvData) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(authEnvData));
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor(::System::IO::Stream* authEnvData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, authEnvData);
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(contentInfo));
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentInfo);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::CmsAuthEnvelopedData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
