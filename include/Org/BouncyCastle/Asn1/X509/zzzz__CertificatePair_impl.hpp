#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\CertificatePair.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificatePair_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePair.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::CertificatePair* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::CertificatePair::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x355e5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CertificatePair::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePair::_ctor)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x355e750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CertificatePair::*)(
    ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*)>(&::Org::BouncyCastle::Asn1::X509::CertificatePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355eb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePair.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::CertificatePair::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePair::ToAsn1Object)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x355eb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePair.get_Forward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* (::Org::BouncyCastle::Asn1::X509::CertificatePair::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePair::get_Forward)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355ec24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), { "get_Forward", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePair.get_Reverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* (::Org::BouncyCastle::Asn1::X509::CertificatePair::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePair::get_Reverse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355ec2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), { "get_Reverse", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& Org::BouncyCastle::Asn1::X509::CertificatePair::__cordl_internal_get_forward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forward;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* const& Org::BouncyCastle::Asn1::X509::CertificatePair::__cordl_internal_get_forward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forward;
}
constexpr void Org::BouncyCastle::Asn1::X509::CertificatePair::__cordl_internal_set_forward(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forward = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& Org::BouncyCastle::Asn1::X509::CertificatePair::__cordl_internal_get_reverse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reverse;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* const& Org::BouncyCastle::Asn1::X509::CertificatePair::__cordl_internal_get_reverse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reverse;
}
constexpr void Org::BouncyCastle::Asn1::X509::CertificatePair::__cordl_internal_set_reverse(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reverse = value;
}
inline ::Org::BouncyCastle::Asn1::X509::CertificatePair* Org::BouncyCastle::Asn1::X509::CertificatePair::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::CertificatePair::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::CertificatePair::_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* forward,
                                                                  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* reverse) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forward, reverse);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::CertificatePair::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* Org::BouncyCastle::Asn1::X509::CertificatePair::get_Forward() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), { "get_Forward", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* Org::BouncyCastle::Asn1::X509::CertificatePair::get_Reverse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(), { "get_Reverse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::CertificatePair* Org::BouncyCastle::Asn1::X509::CertificatePair::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::CertificatePair* Org::BouncyCastle::Asn1::X509::CertificatePair::New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* forward,
                                                                                                                  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* reverse) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::CertificatePair*>(forward, reverse));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::CertificatePair::CertificatePair() {}
