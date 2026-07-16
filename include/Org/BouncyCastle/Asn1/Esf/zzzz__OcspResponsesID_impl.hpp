#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OcspResponsesID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OcspResponsesID_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OcspIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherHash_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3372610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3372b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::*)(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*)>(
    &::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3372d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::*)(
    ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*, ::Org::BouncyCastle::Asn1::Esf::OtherHash*)>(&::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3372d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID.get_OcspIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* (::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::get_OcspIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3372d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { "get_OcspIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID.get_OcspRepHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OtherHash* (::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::get_OcspRepHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3372d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { "get_OcspRepHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::ToAsn1Object)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3372d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*& Org::BouncyCastle::Asn1::Esf::OcspResponsesID::__cordl_internal_get_ocspIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* const& Org::BouncyCastle::Asn1::Esf::OcspResponsesID::__cordl_internal_get_ocspIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspIdentifier;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OcspResponsesID::__cordl_internal_set_ocspIdentifier(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ocspIdentifier = value;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash*& Org::BouncyCastle::Asn1::Esf::OcspResponsesID::__cordl_internal_get_ocspRepHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspRepHash;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash* const& Org::BouncyCastle::Asn1::Esf::OcspResponsesID::__cordl_internal_get_ocspRepHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspRepHash;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OcspResponsesID::__cordl_internal_set_ocspRepHash(::Org::BouncyCastle::Asn1::Esf::OtherHash* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ocspRepHash = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* Org::BouncyCastle::Asn1::Esf::OcspResponsesID::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::OcspResponsesID::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::OcspResponsesID::_ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ocspIdentifier);
}
inline void Org::BouncyCastle::Asn1::Esf::OcspResponsesID::_ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHash* ocspRepHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ocspIdentifier, ocspRepHash);
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* Org::BouncyCastle::Asn1::Esf::OcspResponsesID::get_OcspIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { "get_OcspIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* Org::BouncyCastle::Asn1::Esf::OcspResponsesID::get_OcspRepHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), { "get_OcspRepHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::OcspResponsesID::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* Org::BouncyCastle::Asn1::Esf::OcspResponsesID::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* Org::BouncyCastle::Asn1::Esf::OcspResponsesID::New_ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(ocspIdentifier));
}
inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* Org::BouncyCastle::Asn1::Esf::OcspResponsesID::New_ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier,
                                                                                                                ::Org::BouncyCastle::Asn1::Esf::OtherHash* ocspRepHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>(ocspIdentifier, ocspRepHash));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID::OcspResponsesID() {}
