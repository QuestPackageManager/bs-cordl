#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\CryptoPro\Gost3410ParamSetParameters.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/CryptoPro/zzzz__Gost3410ParamSetParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x336e7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::GetInstance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x336e7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)(
    int32_t, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x336e1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x336e964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters.get_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)()>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336ea78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), { "get_KeySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters.get_P
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)()>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_P)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x336ea80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), { "get_P", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters.get_Q
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)()>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_Q)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x336ea94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), { "get_Q", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters.get_A
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)()>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_A)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x336eaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), { "get_A", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)()>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::ToAsn1Object)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x336eabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), 5 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_get_keySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySize;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_get_keySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySize;
}
constexpr void Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_set_keySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keySize = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_set_p(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_set_q(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___q = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::__cordl_internal_set_a(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj,
                                                                                                                                                     bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::_ctor(int32_t keySize, ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keySize, p, q, a);
}
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline int32_t Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_KeySize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), { "get_KeySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_P() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), { "get_P", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_Q() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), { "get_Q", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_A() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), { "get_A", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::New_ctor(int32_t keySize,
                                                                                                                                                  ::Org::BouncyCastle::Math::BigInteger* p,
                                                                                                                                                  ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                                                                                  ::Org::BouncyCastle::Math::BigInteger* a) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(keySize, p, q, a));
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::Gost3410ParamSetParameters() {}
