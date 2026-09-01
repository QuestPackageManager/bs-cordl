#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\CompleteRevocationRefs.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__CompleteRevocationRefs_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__CrlOcspRef_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3371678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::_ctor)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x33717fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::*)(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*>)>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3371c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3371d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs.GetCrlOcspRefs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*> (::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::GetCrlOcspRefs)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3371ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(), { "GetCrlOcspRefs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3371ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::__cordl_internal_get_crlOcspRefs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlOcspRefs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::__cordl_internal_get_crlOcspRefs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlOcspRefs;
}
constexpr void Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::__cordl_internal_set_crlOcspRefs(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlOcspRefs = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*> crlOcspRefs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crlOcspRefs);
}
inline void Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::_ctor(::System::Collections::IEnumerable* crlOcspRefs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crlOcspRefs);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*> Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::GetCrlOcspRefs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(), { "GetCrlOcspRefs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*> crlOcspRefs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(crlOcspRefs));
}
inline ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::New_ctor(::System::Collections::IEnumerable* crlOcspRefs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*>(crlOcspRefs));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs::CompleteRevocationRefs() {}
