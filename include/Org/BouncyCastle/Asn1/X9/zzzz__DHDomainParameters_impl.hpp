#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/DHDomainParameters.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__DHDomainParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__DHValidationParms_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::DHDomainParameters* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3674248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::DHDomainParameters* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x367425c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::DerInteger*,
    ::Org::BouncyCastle::Asn1::X9::DHValidationParms*)>(&::Org::BouncyCastle::Asn1::X9::DHDomainParameters::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x36745b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::DHValidationParms*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X9::DHDomainParameters::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x36743e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters.GetNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::System::Collections::IEnumerator*)>(
    &::Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3674664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "GetNext", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters.get_P
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(
    &::Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_P)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3674940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "get_P", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters.get_G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(
    &::Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_G)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3674948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "get_G", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters.get_Q
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(
    &::Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_Q)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3674950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "get_Q", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters.get_J
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(
    &::Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_J)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3674958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "get_J", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters.get_ValidationParms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::DHValidationParms* (::Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(
    &::Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_ValidationParms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3674960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "get_ValidationParms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::DHDomainParameters.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X9::DHDomainParameters::*)()>(
    &::Org::BouncyCastle::Asn1::X9::DHDomainParameters::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3674968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_set_p(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_set_g(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_set_q(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___q = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_get_j() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_get_j() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j;
}
constexpr void Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_set_j(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___j = value;
}
constexpr ::Org::BouncyCastle::Asn1::X9::DHValidationParms*& Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_get_validationParms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationParms;
}
constexpr ::Org::BouncyCastle::Asn1::X9::DHValidationParms* const& Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_get_validationParms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationParms;
}
constexpr void Org::BouncyCastle::Asn1::X9::DHDomainParameters::__cordl_internal_set_validationParms(::Org::BouncyCastle::Asn1::X9::DHValidationParms* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationParms = value;
}
inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(nullptr, ___internal_method, obj, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X9::DHDomainParameters::_ctor(::Org::BouncyCastle::Asn1::DerInteger* p, ::Org::BouncyCastle::Asn1::DerInteger* g, ::Org::BouncyCastle::Asn1::DerInteger* q,
                                                                   ::Org::BouncyCastle::Asn1::DerInteger* j, ::Org::BouncyCastle::Asn1::X9::DHValidationParms* validationParms) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::DHValidationParms*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, g, q, j, validationParms);
}
inline void Org::BouncyCastle::Asn1::X9::DHDomainParameters::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetNext(::System::Collections::IEnumerator* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "GetNext", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(nullptr, ___internal_method, e);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_P() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "get_P", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_G() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "get_G", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_Q() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "get_Q", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_J() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "get_J", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_ValidationParms() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), { "get_ValidationParms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::DHValidationParms*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X9::DHDomainParameters::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* Org::BouncyCastle::Asn1::X9::DHDomainParameters::New_ctor(::Org::BouncyCastle::Asn1::DerInteger* p, ::Org::BouncyCastle::Asn1::DerInteger* g,
                                                                                                                    ::Org::BouncyCastle::Asn1::DerInteger* q, ::Org::BouncyCastle::Asn1::DerInteger* j,
                                                                                                                    ::Org::BouncyCastle::Asn1::X9::DHValidationParms* validationParms) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(p, g, q, j, validationParms));
}
inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* Org::BouncyCastle::Asn1::X9::DHDomainParameters::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::DHDomainParameters::DHDomainParameters() {}
