#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OcspListID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OcspListID_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OcspResponsesID_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspListID.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OcspListID* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::OcspListID::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x33711b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspListID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OcspListID::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::OcspListID::_ctor)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x33721c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspListID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OcspListID::*)(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>)>(
    &::Org::BouncyCastle::Asn1::Esf::OcspListID::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3372794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspListID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OcspListID::*)(::System::Collections::IEnumerable*)>(&::Org::BouncyCastle::Asn1::Esf::OcspListID::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3372848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspListID.GetOcspResponses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*> (::Org::BouncyCastle::Asn1::Esf::OcspListID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OcspListID::GetOcspResponses)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x33729d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), { "GetOcspResponses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspListID.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::OcspListID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OcspListID::ToAsn1Object)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3372af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::OcspListID::__cordl_internal_get_ocspResponses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspResponses;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::OcspListID::__cordl_internal_get_ocspResponses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspResponses;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OcspListID::__cordl_internal_set_ocspResponses(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ocspResponses = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* Org::BouncyCastle::Asn1::Esf::OcspListID::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::OcspListID::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::OcspListID::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*> ocspResponses) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ocspResponses);
}
inline void Org::BouncyCastle::Asn1::Esf::OcspListID::_ctor(::System::Collections::IEnumerable* ocspResponses) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ocspResponses);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*> Org::BouncyCastle::Asn1::Esf::OcspListID::GetOcspResponses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), { "GetOcspResponses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::OcspListID::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* Org::BouncyCastle::Asn1::Esf::OcspListID::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* Org::BouncyCastle::Asn1::Esf::OcspListID::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*> ocspResponses) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(ocspResponses));
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* Org::BouncyCastle::Asn1::Esf::OcspListID::New_ctor(::System::Collections::IEnumerable* ocspResponses) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OcspListID*>(ocspResponses));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::OcspListID::OcspListID() {}
