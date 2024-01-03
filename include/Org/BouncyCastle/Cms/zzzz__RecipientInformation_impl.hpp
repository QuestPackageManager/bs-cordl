#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientID_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::RecipientInformation::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(&::Org::BouncyCastle::Cms::RecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1202070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSecureReadable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.GetContentAlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::RecipientInformation::GetContentAlgorithmName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1202108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                                               "GetContentAlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.get_RecipientID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::RecipientID* (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::RecipientInformation::get_RecipientID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12021c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                                               "get_RecipientID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.get_KeyEncryptionAlgorithmID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12021cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                                               "get_KeyEncryptionAlgorithmID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.get_KeyEncryptionAlgOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12021d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                                               "get_KeyEncryptionAlgOid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.get_KeyEncryptionAlgParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1202200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                                               "get_KeyEncryptionAlgParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.GetContentFromSessionKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (
    ::Org::BouncyCastle::Cms::RecipientInformation::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(&::Org::BouncyCastle::Cms::RecipientInformation::GetContentFromSessionKey)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x1202238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(), "GetContentFromSessionKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.GetContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Cms::RecipientInformation::*)(
    ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Cms::RecipientInformation::GetContent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1202464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(), "GetContent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.GetMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::RecipientInformation::GetMac)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1202568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(), "GetMac",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.GetContentStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (
    ::Org::BouncyCastle::Cms::RecipientInformation::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Cms::RecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::RecipientID*& Org::BouncyCastle::Cms::RecipientInformation::__get_rid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rid;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientID*> const& Org::BouncyCastle::Cms::RecipientInformation::__get_rid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rid;
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__set_rid(::Org::BouncyCastle::Cms::RecipientID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::RecipientInformation::__get_keyEncAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncAlg;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::Cms::RecipientInformation::__get_keyEncAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncAlg;
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__set_keyEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyEncAlg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable*& Org::BouncyCastle::Cms::RecipientInformation::__get_secureReadable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secureReadable;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsSecureReadable*> const& Org::BouncyCastle::Cms::RecipientInformation::__get_secureReadable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secureReadable;
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__set_secureReadable(::Org::BouncyCastle::Cms::CmsSecureReadable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secureReadable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Cms::RecipientInformation::__get_resultMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultMac;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Cms::RecipientInformation::__get_resultMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultMac;
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__set_resultMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resultMac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::RecipientInformation* Org::BouncyCastle::Cms::RecipientInformation::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg,
                                                                                                              ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::RecipientInformation*>(keyEncAlg, secureReadable));
}
inline void Org::BouncyCastle::Cms::RecipientInformation::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSecureReadable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyEncAlg, secureReadable);
}
inline ::StringW Org::BouncyCastle::Cms::RecipientInformation::GetContentAlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                                             "GetContentAlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::RecipientID* Org::BouncyCastle::Cms::RecipientInformation::get_RecipientID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                                             "get_RecipientID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::RecipientID*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgorithmID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                                             "get_KeyEncryptionAlgorithmID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgOid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                                             "get_KeyEncryptionAlgOid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(),
                                                                             "get_KeyEncryptionAlgParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::RecipientInformation::GetContentFromSessionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* sKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(), "GetContentFromSessionKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*, false>(this, ___internal_method, sKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Cms::RecipientInformation::GetContent(::Org::BouncyCastle::Crypto::ICipherParameters* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(), "GetContent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, key);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Cms::RecipientInformation::GetMac() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(), "GetMac",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::RecipientInformation::GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::RecipientInformation*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*, false>(this, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::RecipientInformation::RecipientInformation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
