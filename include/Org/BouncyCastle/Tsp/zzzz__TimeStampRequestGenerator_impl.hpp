#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampRequestGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampRequestGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBoolean_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampRequest_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator.SetReqPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)(::StringW)>(&::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::SetReqPolicy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x361ddf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), { "SetReqPolicy", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator.SetCertReq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)(bool)>(&::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::SetCertReq)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x361de64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), { "SetCertReq", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)(::StringW, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x361ded4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                                { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)(::StringW, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x361df18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                                             { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x361e0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x361e13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Tsp::TimeStampRequest* (::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)(::StringW, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x361e2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                                                                           { "Generate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Tsp::TimeStampRequest* (
    ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)(::StringW, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x361e2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                                { "Generate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Tsp::TimeStampRequest* (
    ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x361e5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Tsp::TimeStampRequest* (
    ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x361e5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::*)()>(&::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x361e5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_get_reqPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reqPolicy;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_get_reqPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reqPolicy;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_set_reqPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reqPolicy = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_get_certReq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReq;
}
constexpr ::Org::BouncyCastle::Asn1::DerBoolean* const& Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_get_certReq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReq;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_set_certReq(::Org::BouncyCastle::Asn1::DerBoolean* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certReq = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_set_extensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_get_extOrdering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extOrdering;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_get_extOrdering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extOrdering;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::__cordl_internal_set_extOrdering(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extOrdering = value;
}
inline void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::SetReqPolicy(::StringW reqPolicy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), { "SetReqPolicy", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reqPolicy);
}
inline void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::SetCertReq(bool certReq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), { "SetCertReq", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certReq);
}
inline void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                              { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, critical, value);
}
inline void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                                           { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, critical, value);
}
inline void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, critical, extValue);
}
inline void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::ArrayW<uint8_t> extValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, critical, extValue);
}
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate(::StringW digestAlgorithm, ::ArrayW<uint8_t> digest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                                                                         { "Generate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampRequest*>(this, ___internal_method, digestAlgorithm, digest);
}
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate(::StringW digestAlgorithmOid, ::ArrayW<uint8_t> digest,
                                                                                                               ::Org::BouncyCastle::Math::BigInteger* nonce) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(),
                                              { "Generate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampRequest*>(this, ___internal_method, digestAlgorithmOid, digest, nonce);
}
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgorithm,
                                                                                                               ::ArrayW<uint8_t> digest) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampRequest*>(this, ___internal_method, digestAlgorithm, digest);
}
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgorithm,
                                                                                                               ::ArrayW<uint8_t> digest, ::Org::BouncyCastle::Math::BigInteger* nonce) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampRequest*>(this, ___internal_method, digestAlgorithm, digest, nonce);
}
inline void Org::BouncyCastle::Tsp::TimeStampRequestGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator* Org::BouncyCastle::Tsp::TimeStampRequestGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::TimeStampRequestGenerator() {}
