#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Smime\SmimeCapabilityVector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeCapabilityVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector.AddCapability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::AddCapability)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x354c398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>(),
                                                                                           { "AddCapability", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector.AddCapability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, int32_t)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::AddCapability)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x354c414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>(),
                                                             { "AddCapability", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector.AddCapability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::AddCapability)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x354c54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>(),
                                         { "AddCapability", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector.ToAsn1EncodableVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1EncodableVector* (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::*)()>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::ToAsn1EncodableVector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354c654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>(), { "ToAsn1EncodableVector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::*)()>(&::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x354c65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::__cordl_internal_get_capabilities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capabilities;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector* const& Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::__cordl_internal_get_capabilities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capabilities;
}
constexpr void Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::__cordl_internal_set_capabilities(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___capabilities = value;
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>(),
                                                                                         { "AddCapability", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capability);
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>(),
                                                           { "AddCapability", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capability, value);
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>(),
                                       { "AddCapability", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capability, parameters);
}
inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::ToAsn1EncodableVector() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>(), { "ToAsn1EncodableVector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector* Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector::SmimeCapabilityVector() {}
