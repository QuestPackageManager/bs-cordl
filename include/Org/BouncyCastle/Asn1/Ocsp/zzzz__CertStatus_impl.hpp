#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ocsp\CertStatus.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__RevokedInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CertStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::CertStatus::*)()>(&::Org::BouncyCastle::Asn1::Ocsp::CertStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x345a4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CertStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::CertStatus::*)(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::CertStatus::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x345a528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CertStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::CertStatus::*)(int32_t, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::CertStatus::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x345a538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CertStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::CertStatus::*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::CertStatus::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x345a544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CertStatus.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::CertStatus* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ocsp::CertStatus::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x345a670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CertStatus.get_TagNo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::Ocsp::CertStatus::*)()>(&::Org::BouncyCastle::Asn1::Ocsp::CertStatus::get_TagNo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345a7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { "get_TagNo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CertStatus.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::Ocsp::CertStatus::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::CertStatus::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345a7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CertStatus.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::CertStatus::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::CertStatus::ToAsn1Object)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x345a804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), 5 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Asn1::Ocsp::CertStatus::__cordl_internal_get_tagNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tagNo;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::Ocsp::CertStatus::__cordl_internal_get_tagNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tagNo;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::CertStatus::__cordl_internal_set_tagNo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tagNo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& Org::BouncyCastle::Asn1::Ocsp::CertStatus::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& Org::BouncyCastle::Asn1::Ocsp::CertStatus::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::CertStatus::__cordl_internal_set_value(::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void Org::BouncyCastle::Asn1::Ocsp::CertStatus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Ocsp::CertStatus::_ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Org::BouncyCastle::Asn1::Ocsp::CertStatus::_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagNo, value);
}
inline void Org::BouncyCastle::Asn1::Ocsp::CertStatus::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* choice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, choice);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* Org::BouncyCastle::Asn1::Ocsp::CertStatus::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(nullptr, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Asn1::Ocsp::CertStatus::get_TagNo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { "get_TagNo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::Ocsp::CertStatus::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::CertStatus::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* Org::BouncyCastle::Asn1::Ocsp::CertStatus::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>());
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* Org::BouncyCastle::Asn1::Ocsp::CertStatus::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(info));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* Org::BouncyCastle::Asn1::Ocsp::CertStatus::New_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(tagNo, value));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* Org::BouncyCastle::Asn1::Ocsp::CertStatus::New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* choice) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(choice));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::Ocsp::CertStatus::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::Ocsp::CertStatus::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus::CertStatus() {}
