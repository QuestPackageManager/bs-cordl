#pragma once
#include "Mono/Security/Authenticode/zzzz__AuthenticodeBase_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Mono/Security/Authenticode/zzzz__AuthenticodeDeformatter_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/zzzz__PKCS7_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "Mono/Security/X509/zzzz__X509Chain_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x240ae30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x240aebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.set_RawData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::set_RawData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x240aee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(), "set_RawData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.get_SigningCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::get_SigningCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240b34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(),
                                                                               "get_SigningCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.CheckSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::CheckSignature)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x240b058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(),
                                                                               "CheckSignature", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.CompareIssuerSerial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)(
    ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::Authenticode::AuthenticodeDeformatter::CompareIssuerSerial)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x240bd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(), "CompareIssuerSerial", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)(
    ::Mono::Security::__PKCS7__SignedData*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Security::Cryptography::HashAlgorithm*)>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0xa48;
  constexpr static std::size_t addrs = 0x240b354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(), "VerifySignature", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::__PKCS7__SignedData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::HashAlgorithm*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.VerifyCounterSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)(
    ::Mono::Security::__PKCS7__SignerInfo*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Authenticode::AuthenticodeDeformatter::VerifyCounterSignature)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x240be90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(), "VerifyCounterSignature", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::__PKCS7__SignerInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x240afb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(),
                                                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_filename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filename;
}
constexpr ::StringW const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_filename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filename;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_filename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___filename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_rawdata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawdata;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_rawdata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawdata;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_rawdata(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rawdata)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_hash(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_coll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coll;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_coll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coll;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_coll(::Mono::Security::X509::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coll)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::ASN1*& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_signedHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedHash;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_signedHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedHash;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_signedHash(::Mono::Security::ASN1* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signedHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_timestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timestamp;
}
constexpr ::System::DateTime const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_timestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timestamp;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_timestamp(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timestamp = value;
}
constexpr ::Mono::Security::X509::X509Certificate*& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_signingCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingCertificate;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Certificate*> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_signingCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingCertificate;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_signingCertificate(::Mono::Security::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signingCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_reason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reason;
}
constexpr int32_t const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_reason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reason;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_reason(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reason = value;
}
constexpr bool& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_trustedRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedRoot;
}
constexpr bool const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_trustedRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedRoot;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_trustedRoot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trustedRoot = value;
}
constexpr bool& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_trustedTimestampRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedTimestampRoot;
}
constexpr bool const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_trustedTimestampRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedTimestampRoot;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_trustedTimestampRoot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trustedTimestampRoot = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_entry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entry;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_entry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entry;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_entry(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::X509::X509Chain*& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_signerChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerChain;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Chain*> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_signerChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerChain;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_signerChain(::Mono::Security::X509::X509Chain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signerChain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::X509::X509Chain*& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_timestampChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timestampChain;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Chain*> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__get_timestampChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timestampChain;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_timestampChain(::Mono::Security::X509::X509Chain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___timestampChain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Security::Authenticode::AuthenticodeDeformatter* Mono::Security::Authenticode::AuthenticodeDeformatter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Authenticode::AuthenticodeDeformatter*>());
}
inline void Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Security::Authenticode::AuthenticodeDeformatter* Mono::Security::Authenticode::AuthenticodeDeformatter::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(rawData));
}
inline void Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawData);
}
inline void Mono::Security::Authenticode::AuthenticodeDeformatter::set_RawData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(), "set_RawData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::Authenticode::AuthenticodeDeformatter::get_SigningCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(),
                                                                             "get_SigningCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*, false>(this, ___internal_method);
}
inline bool Mono::Security::Authenticode::AuthenticodeDeformatter::CheckSignature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(),
                                                                             "CheckSignature", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Mono::Security::Authenticode::AuthenticodeDeformatter::CompareIssuerSerial(::StringW issuer, ::ArrayW<uint8_t, ::Array<uint8_t>*> serial, ::Mono::Security::X509::X509Certificate* x509) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(), "CompareIssuerSerial", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, issuer, serial, x509);
}
inline bool Mono::Security::Authenticode::AuthenticodeDeformatter::VerifySignature(::Mono::Security::__PKCS7__SignedData* sd, ::ArrayW<uint8_t, ::Array<uint8_t>*> calculatedMessageDigest,
                                                                                   ::System::Security::Cryptography::HashAlgorithm* ha) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(), "VerifySignature", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::__PKCS7__SignedData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::HashAlgorithm*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sd, calculatedMessageDigest, ha);
}
inline bool Mono::Security::Authenticode::AuthenticodeDeformatter::VerifyCounterSignature(::Mono::Security::__PKCS7__SignerInfo* cs, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(), "VerifyCounterSignature", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::__PKCS7__SignerInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cs, signature);
}
inline void Mono::Security::Authenticode::AuthenticodeDeformatter::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeDeformatter*>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::Authenticode::AuthenticodeDeformatter::AuthenticodeDeformatter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
