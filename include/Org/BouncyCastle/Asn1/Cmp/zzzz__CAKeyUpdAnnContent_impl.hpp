#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\CAKeyUpdAnnContent.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CAKeyUpdAnnContent_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CmpCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3346c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3346ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent.get_OldWithNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* (::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::get_OldWithNew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent.get_NewWithOld
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* (::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::get_NewWithOld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334702c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent.get_NewWithNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* (::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::get_NewWithNew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3347034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::ToAsn1Object)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x334703c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::__cordl_internal_get_oldWithNew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldWithNew;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* const& Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::__cordl_internal_get_oldWithNew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldWithNew;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::__cordl_internal_set_oldWithNew(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oldWithNew = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::__cordl_internal_get_newWithOld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newWithOld;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* const& Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::__cordl_internal_get_newWithOld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newWithOld;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::__cordl_internal_set_newWithOld(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newWithOld = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::__cordl_internal_get_newWithNew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newWithNew;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* const& Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::__cordl_internal_get_newWithNew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newWithNew;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::__cordl_internal_set_newWithNew(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newWithNew = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent* Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::get_OldWithNew() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::get_NewWithOld() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::get_NewWithNew() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent* Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent::CAKeyUpdAnnContent() {}
