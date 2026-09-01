#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509Certificate2ImplUnix.hpp"
#include "Internal/Cryptography/Pal/zzzz__CertificateData_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2ImplUnix_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedName_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509NameType_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.EnsureCertData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::EnsureCertData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63aa8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "EnsureCertData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.GetRawCertData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::GetRawCertData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_KeyAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63aa924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_KeyAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_KeyAlgorithmParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_KeyAlgorithmParameters)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63aa93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_KeyAlgorithmParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_PublicKeyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_PublicKeyValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63aa954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_PublicKeyValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SerialNumber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63aa96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_SerialNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63aa984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_SignatureAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Version)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63aa99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_SubjectName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X500DistinguishedName* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SubjectName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63aa9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_SubjectName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_IssuerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X500DistinguishedName* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_IssuerName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63aa9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_IssuerName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_Subject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Subject)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x63aa9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_Subject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Issuer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x63aaa10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_Issuer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_RawData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_RawData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63aaa38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_RawData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_Thumbprint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Thumbprint)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x63aaa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_Thumbprint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.GetNameInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)(
    ::System::Security::Cryptography::X509Certificates::X509NameType, bool)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::GetNameInfo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63aab90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(),
                                                             { "GetNameInfo", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509NameType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Extensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63aabc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_Extensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_NotAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_NotAfter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63aabdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_NotAfter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.get_NotBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_NotBefore)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63aac40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_NotBefore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix.AppendPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)(::System::Text::StringBuilder*)>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::AppendPrivateKeyInfo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x63aaca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(),
                                                                                           { "AppendPrivateKeyInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63a9444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::__cordl_internal_get_readCertData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readCertData;
}
constexpr bool const& System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::__cordl_internal_get_readCertData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readCertData;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::__cordl_internal_set_readCertData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readCertData = value;
}
constexpr ::Internal::Cryptography::Pal::CertificateData& System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::__cordl_internal_get_certData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certData;
}
constexpr ::Internal::Cryptography::Pal::CertificateData const& System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::__cordl_internal_get_certData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certData;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::__cordl_internal_set_certData(::Internal::Cryptography::Pal::CertificateData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certData = value;
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::EnsureCertData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "EnsureCertData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::GetRawCertData() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_KeyAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_KeyAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_KeyAlgorithmParameters() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_KeyAlgorithmParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_PublicKeyValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_PublicKeyValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SerialNumber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_SerialNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SignatureAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_SignatureAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_SubjectName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_SubjectName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_IssuerName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_IssuerName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Subject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_Subject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Issuer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_Issuer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_RawData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_RawData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Thumbprint() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_Thumbprint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(),
                                                           { "GetNameInfo", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509NameType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, nameType, forIssuer);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*
System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_Extensions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_Extensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_NotAfter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_NotAfter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::get_NotBefore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { "get_NotBefore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::AppendPrivateKeyInfo(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(),
                                                                                         { "AppendPrivateKeyInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix* System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix::X509Certificate2ImplUnix() {}
