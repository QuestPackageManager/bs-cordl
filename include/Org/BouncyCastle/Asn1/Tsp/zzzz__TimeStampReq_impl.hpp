#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Tsp/TimeStampReq.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__TimeStampReq_def.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__MessageImprint_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBoolean_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x354e6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::_ctor)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x354e778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)(
    ::Org::BouncyCastle::Asn1::Tsp::MessageImprint*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::DerBoolean*,
    ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x354eae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBoolean*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354eb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_MessageImprint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Tsp::MessageImprint* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_MessageImprint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354eb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_MessageImprint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_ReqPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_ReqPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354eb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_ReqPolicy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_Nonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Nonce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354eb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_Nonce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_CertReq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBoolean* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_CertReq)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354eb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_CertReq", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354eb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_Extensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x354eba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_messageImprint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageImprint;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_messageImprint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageImprint;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_messageImprint(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageImprint = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_tsaPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaPolicy;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_tsaPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaPolicy;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_tsaPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tsaPolicy = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_nonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonce;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_nonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonce;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_nonce(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nonce = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_certReq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReq;
}
constexpr ::Org::BouncyCastle::Asn1::DerBoolean* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_certReq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReq;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_certReq(::Org::BouncyCastle::Asn1::DerBoolean* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certReq = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::_ctor(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy,
                                                              ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::DerBoolean* certReq,
                                                              ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBoolean*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageImprint, tsaPolicy, nonce, certReq, extensions);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_MessageImprint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_MessageImprint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_ReqPolicy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_ReqPolicy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Nonce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_Nonce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_CertReq() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_CertReq", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBoolean*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Extensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), { "get_Extensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::New_ctor(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint,
                                                                                                          ::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy,
                                                                                                          ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::DerBoolean* certReq,
                                                                                                          ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(messageImprint, tsaPolicy, nonce, certReq, extensions));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::TimeStampReq() {}
