#pragma once
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemReader_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs10CertificationRequest_def.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__IPasswordFinder_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemReader::*)(::System::IO::TextReader*)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x10d1b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::OpenSsl::PemReader::*)(::System::IO::TextReader*, ::Org::BouncyCastle::OpenSsl::IPasswordFinder*)>(&::Org::BouncyCastle::OpenSsl::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x10d1b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::OpenSsl::PemReader::*)()>(
    &::Org::BouncyCastle::OpenSsl::PemReader::ReadObject)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x10d1b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadObject",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadRsaPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadRsaPublicKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x10d3300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadRsaPublicKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadPublicKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10d32e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPublicKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadCertificate)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x10d34e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCertificate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadCrl)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x10d3764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCrl", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCertificateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadCertificateRequest)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x10d338c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCertificateRequest", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadAttributeCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadAttributeCertificate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x10d38c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadAttributeCertificate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPkcs7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (
    ::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadPkcs7)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x10d3648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPkcs7", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::ReadPrivateKey)> {
  constexpr static std::size_t size = 0x1270;
  constexpr static std::size_t addrs = 0x10d2074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPrivateKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.GetCurveParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(
    &::Org::BouncyCastle::OpenSsl::PemReader::GetCurveParameters)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x10d39cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "GetCurveParameters",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder*& Org::BouncyCastle::OpenSsl::PemReader::__get_pFinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pFinder;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::OpenSsl::IPasswordFinder*> const& Org::BouncyCastle::OpenSsl::PemReader::__get_pFinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pFinder;
}
constexpr void Org::BouncyCastle::OpenSsl::PemReader::__set_pFinder(::Org::BouncyCastle::OpenSsl::IPasswordFinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pFinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::OpenSsl::PemReader* Org::BouncyCastle::OpenSsl::PemReader::New_ctor(::System::IO::TextReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::OpenSsl::PemReader*>(reader));
}
inline void Org::BouncyCastle::OpenSsl::PemReader::_ctor(::System::IO::TextReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::Org::BouncyCastle::OpenSsl::PemReader* Org::BouncyCastle::OpenSsl::PemReader::New_ctor(::System::IO::TextReader* reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::OpenSsl::PemReader*>(reader, pFinder));
}
inline void Org::BouncyCastle::OpenSsl::PemReader::_ctor(::System::IO::TextReader* reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, pFinder);
}
inline ::System::Object* Org::BouncyCastle::OpenSsl::PemReader::ReadObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::OpenSsl::PemReader::ReadRsaPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadRsaPublicKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::OpenSsl::PemReader::ReadPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPublicKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::OpenSsl::PemReader::ReadCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCertificate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::OpenSsl::PemReader::ReadCrl(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCrl", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::OpenSsl::PemReader::ReadCertificateRequest(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadCertificateRequest", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::OpenSsl::PemReader::ReadAttributeCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadAttributeCertificate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::OpenSsl::PemReader::ReadPkcs7(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPkcs7", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*, false>(this, ___internal_method, pemObject);
}
inline ::System::Object* Org::BouncyCastle::OpenSsl::PemReader::ReadPrivateKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "ReadPrivateKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pemObject);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::OpenSsl::PemReader::GetCurveParameters(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader*>::get(), "GetCurveParameters",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::OpenSsl::PemReader::PemReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
