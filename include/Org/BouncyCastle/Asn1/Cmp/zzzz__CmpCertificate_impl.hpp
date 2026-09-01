#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\CmpCertificate.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CmpCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::*)(::Org::BouncyCastle::Asn1::X509::AttributeCertificate*)>(
    &::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3349180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::*)(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*)>(
    &::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3349188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::GetInstance)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3346cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate.get_IsX509v3PKCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::*)()>(&::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::get_IsX509v3PKCert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3349220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate.get_X509v3PKCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* (::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::get_X509v3PKCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3349230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate.get_X509v2AttrCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificate* (::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::get_X509v2AttrCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3349238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::ToAsn1Object)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3349240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& Org::BouncyCastle::Asn1::Cmp::CmpCertificate::__cordl_internal_get_x509v3PKCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509v3PKCert;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* const& Org::BouncyCastle::Asn1::Cmp::CmpCertificate::__cordl_internal_get_x509v3PKCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509v3PKCert;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CmpCertificate::__cordl_internal_set_x509v3PKCert(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x509v3PKCert = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate*& Org::BouncyCastle::Asn1::Cmp::CmpCertificate::__cordl_internal_get_x509v2AttrCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509v2AttrCert;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* const& Org::BouncyCastle::Asn1::Cmp::CmpCertificate::__cordl_internal_get_x509v2AttrCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509v2AttrCert;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CmpCertificate::__cordl_internal_set_x509v2AttrCert(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x509v2AttrCert = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::CmpCertificate::_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* x509v2AttrCert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x509v2AttrCert);
}
inline void Org::BouncyCastle::Asn1::Cmp::CmpCertificate::_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509v3PKCert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x509v3PKCert);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Org::BouncyCastle::Asn1::Cmp::CmpCertificate::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(nullptr, ___internal_method, obj);
}
inline bool Org::BouncyCastle::Asn1::Cmp::CmpCertificate::get_IsX509v3PKCert() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* Org::BouncyCastle::Asn1::Cmp::CmpCertificate::get_X509v3PKCert() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* Org::BouncyCastle::Asn1::Cmp::CmpCertificate::get_X509v2AttrCert() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::CmpCertificate::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Org::BouncyCastle::Asn1::Cmp::CmpCertificate::New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* x509v2AttrCert) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(x509v2AttrCert));
}
inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Org::BouncyCastle::Asn1::Cmp::CmpCertificate::New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509v3PKCert) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(x509v3PKCert));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::Cmp::CmpCertificate::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::Cmp::CmpCertificate::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate::CmpCertificate() {}
