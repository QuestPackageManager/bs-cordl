#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CompleteCertificateRefs.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__CompleteCertificateRefs_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherCertID_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x336e968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::_ctor)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x336eaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::*)(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>)>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x336ef88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x336f03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs.GetOtherCertIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*> (::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::GetOtherCertIDs)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x336f1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(), { "GetOtherCertIDs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336f2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::__cordl_internal_get_otherCertIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherCertIDs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::__cordl_internal_get_otherCertIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherCertIDs;
}
constexpr void Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::__cordl_internal_set_otherCertIDs(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___otherCertIDs = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs* Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*> otherCertIDs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherCertIDs);
}
inline void Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::_ctor(::System::Collections::IEnumerable* otherCertIDs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherCertIDs);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*> Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::GetOtherCertIDs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(), { "GetOtherCertIDs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs* Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs* Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*> otherCertIDs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(otherCertIDs));
}
inline ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs* Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::New_ctor(::System::Collections::IEnumerable* otherCertIDs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*>(otherCertIDs));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs::CompleteCertificateRefs() {}
