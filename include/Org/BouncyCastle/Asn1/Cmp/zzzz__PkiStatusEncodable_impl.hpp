#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\PkiStatusEncodable.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusEncodable_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::*)(::Org::BouncyCastle::Asn1::Cmp::PkiStatus)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x334fcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::*)(::Org::BouncyCastle::Asn1::DerInteger*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334fd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::GetInstance)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x334fd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::get_Value)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x334fee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334fefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::__cordl_internal_set_status(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::setStaticF_granted(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "granted", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(
      std::forward<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(value));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::getStaticF_granted() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "granted", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>();
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::setStaticF_grantedWithMods(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "grantedWithMods", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(
      std::forward<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(value));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::getStaticF_grantedWithMods() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "grantedWithMods", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>();
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::setStaticF_rejection(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "rejection", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(
      std::forward<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(value));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::getStaticF_rejection() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "rejection", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>();
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::setStaticF_waiting(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "waiting", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(
      std::forward<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(value));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::getStaticF_waiting() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "waiting", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>();
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::setStaticF_revocationWarning(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "revocationWarning", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(
      std::forward<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(value));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::getStaticF_revocationWarning() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "revocationWarning", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>();
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::setStaticF_revocationNotification(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "revocationNotification", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(
      std::forward<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(value));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::getStaticF_revocationNotification() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "revocationNotification", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>();
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::setStaticF_keyUpdateWaiting(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "keyUpdateWaiting", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(
      std::forward<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(value));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::getStaticF_keyUpdateWaiting() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "keyUpdateWaiting", ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>();
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::_ctor(::Org::BouncyCastle::Asn1::DerInteger* status) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatus status) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(status));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::New_ctor(::Org::BouncyCastle::Asn1::DerInteger* status) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(status));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable::PkiStatusEncodable() {}
