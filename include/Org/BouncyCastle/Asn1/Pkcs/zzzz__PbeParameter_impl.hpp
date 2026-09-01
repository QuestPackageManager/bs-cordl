#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Pkcs\PbeParameter.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PbeParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x34636ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3463870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x346394c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter.GetSalt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::*)()>(&::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::GetSalt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x34639ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { "GetSalt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter.get_IterationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::get_IterationCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3463a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { "get_IterationCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3463a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Pkcs::PbeParameter::__cordl_internal_get_salt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___salt;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Pkcs::PbeParameter::__cordl_internal_get_salt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___salt;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::PbeParameter::__cordl_internal_set_salt(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___salt = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Pkcs::PbeParameter::__cordl_internal_get_iterationCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterationCount;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Pkcs::PbeParameter::__cordl_internal_get_iterationCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterationCount;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::PbeParameter::__cordl_internal_set_iterationCount(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iterationCount = value;
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* Org::BouncyCastle::Asn1::Pkcs::PbeParameter::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Pkcs::PbeParameter::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Pkcs::PbeParameter::_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, salt, iterationCount);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::Pkcs::PbeParameter::GetSalt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { "GetSalt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::Pkcs::PbeParameter::get_IterationCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), { "get_IterationCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::PbeParameter::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* Org::BouncyCastle::Asn1::Pkcs::PbeParameter::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter* Org::BouncyCastle::Asn1::Pkcs::PbeParameter::New_ctor(::ArrayW<uint8_t> salt, int32_t iterationCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::PbeParameter*>(salt, iterationCount));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::PbeParameter::PbeParameter() {}
