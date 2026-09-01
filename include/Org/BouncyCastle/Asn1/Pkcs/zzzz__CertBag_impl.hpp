#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Pkcs\CertBag.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__CertBag_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::CertBag.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::CertBag* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Pkcs::CertBag::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3460120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::CertBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::CertBag::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::CertBag::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x34601c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::CertBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::CertBag::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::CertBag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3460304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::CertBag.get_CertID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::Pkcs::CertBag::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::CertBag::get_CertID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346030c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::CertBag.get_CertValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::CertBag::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::CertBag::get_CertValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3460314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::CertBag.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::CertBag::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::CertBag::ToAsn1Object)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x346031c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::Pkcs::CertBag::__cordl_internal_get_certID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certID;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::Pkcs::CertBag::__cordl_internal_get_certID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certID;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::CertBag::__cordl_internal_set_certID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certID = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& Org::BouncyCastle::Asn1::Pkcs::CertBag::__cordl_internal_get_certValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certValue;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& Org::BouncyCastle::Asn1::Pkcs::CertBag::__cordl_internal_get_certValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certValue;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::CertBag::__cordl_internal_set_certValue(::Org::BouncyCastle::Asn1::Asn1Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certValue = value;
}
inline ::Org::BouncyCastle::Asn1::Pkcs::CertBag* Org::BouncyCastle::Asn1::Pkcs::CertBag::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Pkcs::CertBag::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Pkcs::CertBag::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* certID, ::Org::BouncyCastle::Asn1::Asn1Object* certValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certID, certValue);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::CertBag::get_CertID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::CertBag::get_CertValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::CertBag::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::CertBag* Org::BouncyCastle::Asn1::Pkcs::CertBag::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::CertBag* Org::BouncyCastle::Asn1::Pkcs::CertBag::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* certID,
                                                                                                  ::Org::BouncyCastle::Asn1::Asn1Object* certValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::CertBag*>(certID, certValue));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::CertBag::CertBag() {}
