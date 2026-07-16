#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/Ocsp/RequestedCertificate.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/Ocsp/zzzz__RequestedCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/Ocsp/zzzz__RequestedCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice::RequestedCertificate_Choice(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice::RequestedCertificate_Choice() {}
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice::Certificate{ static_cast<int32_t>(0xffffffff) };
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice::PublicKeyCertificate{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice::AttributeCertificate{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x344e524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x344e81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x344e714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x344e70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)(
    ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x344e890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::get_Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x344e930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.GetCertificateBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetCertificateBytes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x344e950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(), { "GetCertificateBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::ToAsn1Object)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x344ea50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__cordl_internal_get_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* const& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__cordl_internal_get_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__cordl_internal_set_cert(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cert = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__cordl_internal_get_publicKeyCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyCert;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__cordl_internal_get_publicKeyCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyCert;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__cordl_internal_set_publicKeyCert(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKeyCert = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__cordl_internal_get_attributeCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCert;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__cordl_internal_get_attributeCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCert;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__cordl_internal_set_attributeCert(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCert = value;
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj,
                                                                                                                                                 bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(nullptr, ___internal_method, obj, isExplicit);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagged);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* certificate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice type, ::ArrayW<uint8_t> certificateOctets) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, certificateOctets);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetCertificateBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(), { "GetCertificateBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(tagged));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*
Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* certificate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(certificate));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*
Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::New_ctor(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate_Choice type, ::ArrayW<uint8_t> certificateOctets) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*>(type, certificateOctets));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::RequestedCertificate() {}
