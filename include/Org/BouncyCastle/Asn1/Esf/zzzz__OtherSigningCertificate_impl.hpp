#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\OtherSigningCertificate.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherSigningCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherCertID_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PolicyInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3376688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x337680c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::*)(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>)>(
    &::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33769c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::*)(
    ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>, ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>)>(&::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x33769cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(),
            { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3376aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::*)(::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::_ctor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x3376aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate.GetCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*> (::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::GetCerts)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3376cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), { "GetCerts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate.GetPolicies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> (::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::GetPolicies)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3376e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), { "GetPolicies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::ToAsn1Object)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3376f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::__cordl_internal_get_certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::__cordl_internal_get_certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::__cordl_internal_set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certs = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::__cordl_internal_get_policies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policies;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::__cordl_internal_get_policies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policies;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::__cordl_internal_set_policies(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policies = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*> certs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certs);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*> certs,
                                                                         ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> policies) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(),
          { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certs, policies);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::_ctor(::System::Collections::IEnumerable* certs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certs);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::_ctor(::System::Collections::IEnumerable* certs, ::System::Collections::IEnumerable* policies) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certs, policies);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*> Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::GetCerts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), { "GetCerts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::GetPolicies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), { "GetPolicies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*> certs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(certs));
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*
Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*> certs, ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> policies) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(certs, policies));
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::New_ctor(::System::Collections::IEnumerable* certs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(certs));
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::New_ctor(::System::Collections::IEnumerable* certs,
                                                                                                                                ::System::Collections::IEnumerable* policies) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*>(certs, policies));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate::OtherSigningCertificate() {}
