#pragma once
// IWYU pragma private; include "Org/BouncyCastle/OpenSsl/PemReader.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemReader_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__IPasswordFinder_def.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs10CertificationRequest_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemReader::*)(::System::IO::TextReader*)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x34ab938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::OpenSsl::PemReader::*)(::System::IO::TextReader*, ::Org::BouncyCastle::OpenSsl::IPasswordFinder*)>(&::Org::BouncyCastle::OpenSsl::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x34ab950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::OpenSsl::PemReader::*)()>(
    &::Org::BouncyCastle::OpenSsl::PemReader::ReadObject)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x34ab974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadObject",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadRsaPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadRsaPublicKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x34ad160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadRsaPublicKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadPublicKey)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x34ad148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPublicKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadCertificate)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x34ad338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCertificate", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadCrl)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x34ad5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCrl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCertificateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadCertificateRequest)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x34ad1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCertificateRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadAttributeCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadAttributeCertificate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x34ad6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadAttributeCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPkcs7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadPkcs7)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x34ad48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPkcs7", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::ReadPrivateKey)> {
  constexpr static std::size_t size = 0x1264;
  constexpr static std::size_t addrs = 0x34abee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPrivateKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.GetCurveParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::GetCurveParameters)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x34ad800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "GetCurveParameters",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder*& Org::BouncyCastle::OpenSsl::PemReader::__cordl_internal_get_pFinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pFinder;
}
constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder* const& Org::BouncyCastle::OpenSsl::PemReader::__cordl_internal_get_pFinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pFinder;
}
constexpr void Org::BouncyCastle::OpenSsl::PemReader::__cordl_internal_set_pFinder(::Org::BouncyCastle::OpenSsl::IPasswordFinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pFinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::OpenSsl::PemReader::_ctor(::System::IO::TextReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void Org::BouncyCastle::OpenSsl::PemReader::_ctor(::System::IO::TextReader* reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, pFinder);
}
inline ::System::Object* Org::BouncyCastle::OpenSsl::PemReader::ReadObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::OpenSsl::PemReader::ReadRsaPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadRsaPublicKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::OpenSsl::PemReader::ReadPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPublicKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::OpenSsl::PemReader::ReadCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCertificate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::OpenSsl::PemReader::ReadCrl(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCrl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::OpenSsl::PemReader::ReadCertificateRequest(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCertificateRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::OpenSsl::PemReader::ReadAttributeCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadAttributeCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::OpenSsl::PemReader::ReadPkcs7(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPkcs7", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*, false>(this, ___internal_method, pemObject);
}
inline ::System::Object* Org::BouncyCastle::OpenSsl::PemReader::ReadPrivateKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPrivateKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::OpenSsl::PemReader::GetCurveParameters(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "GetCurveParameters",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::OpenSsl::PemReader* Org::BouncyCastle::OpenSsl::PemReader::New_ctor(::System::IO::TextReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::OpenSsl::PemReader*>(reader));
}
inline ::Org::BouncyCastle::OpenSsl::PemReader* Org::BouncyCastle::OpenSsl::PemReader::New_ctor(::System::IO::TextReader* reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::OpenSsl::PemReader*>(reader, pFinder));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::OpenSsl::PemReader::PemReader() {}
