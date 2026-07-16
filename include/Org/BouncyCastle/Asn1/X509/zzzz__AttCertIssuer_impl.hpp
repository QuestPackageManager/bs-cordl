#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/AttCertIssuer.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttCertIssuer_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralNames_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V2Form_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttCertIssuer.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AttCertIssuer* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::AttCertIssuer::GetInstance)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x3558dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttCertIssuer.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AttCertIssuer* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::AttCertIssuer::GetInstance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x355913c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttCertIssuer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AttCertIssuer::*)(::Org::BouncyCastle::Asn1::X509::GeneralNames*)>(
    &::Org::BouncyCastle::Asn1::X509::AttCertIssuer::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3559108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttCertIssuer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AttCertIssuer::*)(::Org::BouncyCastle::Asn1::X509::V2Form*)>(
    &::Org::BouncyCastle::Asn1::X509::AttCertIssuer::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3559094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::V2Form*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttCertIssuer.get_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::X509::AttCertIssuer::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AttCertIssuer::get_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3559164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), { "get_Issuer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttCertIssuer.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::AttCertIssuer::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AttCertIssuer::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355916c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& Org::BouncyCastle::Asn1::X509::AttCertIssuer::__cordl_internal_get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& Org::BouncyCastle::Asn1::X509::AttCertIssuer::__cordl_internal_get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void Org::BouncyCastle::Asn1::X509::AttCertIssuer::__cordl_internal_set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& Org::BouncyCastle::Asn1::X509::AttCertIssuer::__cordl_internal_get_choiceObj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___choiceObj;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& Org::BouncyCastle::Asn1::X509::AttCertIssuer::__cordl_internal_get_choiceObj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___choiceObj;
}
constexpr void Org::BouncyCastle::Asn1::X509::AttCertIssuer::__cordl_internal_set_choiceObj(::Org::BouncyCastle::Asn1::Asn1Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___choiceObj = value;
}
inline ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* Org::BouncyCastle::Asn1::X509::AttCertIssuer::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* Org::BouncyCastle::Asn1::X509::AttCertIssuer::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(nullptr, ___internal_method, obj, isExplicit);
}
inline void Org::BouncyCastle::Asn1::X509::AttCertIssuer::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* names) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, names);
}
inline void Org::BouncyCastle::Asn1::X509::AttCertIssuer::_ctor(::Org::BouncyCastle::Asn1::X509::V2Form* v2Form) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::V2Form*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v2Form);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::X509::AttCertIssuer::get_Issuer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), { "get_Issuer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::AttCertIssuer::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* Org::BouncyCastle::Asn1::X509::AttCertIssuer::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* names) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(names));
}
inline ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* Org::BouncyCastle::Asn1::X509::AttCertIssuer::New_ctor(::Org::BouncyCastle::Asn1::X509::V2Form* v2Form) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>(v2Form));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::X509::AttCertIssuer::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::X509::AttCertIssuer::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::AttCertIssuer::AttCertIssuer() {}
