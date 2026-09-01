#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\PolicyMappings.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PolicyMappings_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyMappings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::PolicyMappings::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::PolicyMappings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3663324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyMappings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::PolicyMappings::*)(::System::Collections::Hashtable*)>(
    &::Org::BouncyCastle::Asn1::X509::PolicyMappings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x366332c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyMappings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::PolicyMappings::*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Asn1::X509::PolicyMappings::_ctor)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x3663330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyMappings.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::PolicyMappings::*)()>(
    &::Org::BouncyCastle::Asn1::X509::PolicyMappings::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36638e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::X509::PolicyMappings::__cordl_internal_get_seq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::X509::PolicyMappings::__cordl_internal_get_seq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr void Org::BouncyCastle::Asn1::X509::PolicyMappings::__cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seq = value;
}
inline void Org::BouncyCastle::Asn1::X509::PolicyMappings::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::PolicyMappings::_ctor(::System::Collections::Hashtable* mappings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mappings);
}
inline void Org::BouncyCastle::Asn1::X509::PolicyMappings::_ctor(::System::Collections::IDictionary* mappings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mappings);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::PolicyMappings::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyMappings* Org::BouncyCastle::Asn1::X509::PolicyMappings::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyMappings* Org::BouncyCastle::Asn1::X509::PolicyMappings::New_ctor(::System::Collections::Hashtable* mappings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(mappings));
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyMappings* Org::BouncyCastle::Asn1::X509::PolicyMappings::New_ctor(::System::Collections::IDictionary* mappings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::PolicyMappings*>(mappings));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::PolicyMappings::PolicyMappings() {}
