#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/CertRepMessage.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertRepMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CmpCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3345a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3345b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::*)(
    ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>, ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>)>(&::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3345c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(),
                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage.GetCAPubs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> (::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::GetCAPubs)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3345d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage.GetResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*> (::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::GetResponse)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3345e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::ToAsn1Object)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x33460e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::CertRepMessage::__cordl_internal_get_caPubs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caPubs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cmp::CertRepMessage::__cordl_internal_get_caPubs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caPubs;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CertRepMessage::__cordl_internal_set_caPubs(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___caPubs = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::CertRepMessage::__cordl_internal_get_response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cmp::CertRepMessage::__cordl_internal_get_response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CertRepMessage::__cordl_internal_set_response(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___response = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::CertRepMessage::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage* Org::BouncyCastle::Asn1::Cmp::CertRepMessage::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::CertRepMessage::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> caPubs, ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*> response) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(),
                       { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, caPubs, response);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> Org::BouncyCastle::Asn1::Cmp::CertRepMessage::GetCAPubs() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*> Org::BouncyCastle::Asn1::Cmp::CertRepMessage::GetResponse() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::CertRepMessage::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage* Org::BouncyCastle::Asn1::Cmp::CertRepMessage::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage* Org::BouncyCastle::Asn1::Cmp::CertRepMessage::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> caPubs,
                                                                                                              ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*> response) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*>(caPubs, response));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage::CertRepMessage() {}
