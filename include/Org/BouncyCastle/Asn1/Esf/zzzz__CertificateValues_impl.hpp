#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\CertificateValues.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__CertificateValues_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CertificateValues.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::CertificateValues* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::CertificateValues::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x336f8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CertificateValues._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CertificateValues::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::CertificateValues::_ctor)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x336fa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CertificateValues._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CertificateValues::*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>)>(
    &::Org::BouncyCastle::Asn1::Esf::CertificateValues::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x336fd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CertificateValues._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CertificateValues::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Asn1::Esf::CertificateValues::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x336fe00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CertificateValues.GetCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> (::Org::BouncyCastle::Asn1::Esf::CertificateValues::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CertificateValues::GetCertificates)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x336ff88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), { "GetCertificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CertificateValues.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::CertificateValues::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CertificateValues::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33700a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::CertificateValues::__cordl_internal_get_certificates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificates;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::CertificateValues::__cordl_internal_get_certificates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificates;
}
constexpr void Org::BouncyCastle::Asn1::Esf::CertificateValues::__cordl_internal_set_certificates(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificates = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::CertificateValues* Org::BouncyCastle::Asn1::Esf::CertificateValues::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::CertificateValues::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::CertificateValues::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> certificates) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificates);
}
inline void Org::BouncyCastle::Asn1::Esf::CertificateValues::_ctor(::System::Collections::IEnumerable* certificates) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificates);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> Org::BouncyCastle::Asn1::Esf::CertificateValues::GetCertificates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), { "GetCertificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::CertificateValues::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::CertificateValues* Org::BouncyCastle::Asn1::Esf::CertificateValues::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::CertificateValues* Org::BouncyCastle::Asn1::Esf::CertificateValues::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> certificates) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(certificates));
}
inline ::Org::BouncyCastle::Asn1::Esf::CertificateValues* Org::BouncyCastle::Asn1::Esf::CertificateValues::New_ctor(::System::Collections::IEnumerable* certificates) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CertificateValues*>(certificates));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::CertificateValues::CertificateValues() {}
