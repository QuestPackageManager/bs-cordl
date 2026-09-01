#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Mozilla\PublicKeyAndChallenge.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Mozilla/zzzz__PublicKeyAndChallenge_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3457b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3457c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::*)()>(
    &::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3457cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge.get_SubjectPublicKeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::*)()>(
    &::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::get_SubjectPublicKeyInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3457cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(), { "get_SubjectPublicKeyInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge.get_Challenge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerIA5String* (::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::*)()>(
    &::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::get_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3457cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(), { "get_Challenge", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_pkacSeq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkacSeq;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_pkacSeq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkacSeq;
}
constexpr void Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_set_pkacSeq(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pkacSeq = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_spki() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spki;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_spki() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spki;
}
constexpr void Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_set_spki(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spki = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_challenge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challenge;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_challenge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challenge;
}
constexpr void Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_set_challenge(::Org::BouncyCastle::Asn1::DerIA5String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___challenge = value;
}
inline ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge* Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::get_SubjectPublicKeyInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(), { "get_SubjectPublicKeyInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerIA5String* Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::get_Challenge() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(), { "get_Challenge", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerIA5String*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge* Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::PublicKeyAndChallenge() {}
