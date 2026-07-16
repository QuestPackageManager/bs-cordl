#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/RsaPrivateCrtKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaPrivateCrtKeyParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__RsaPrivateKeyStructure_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x3413884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*)>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3413b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters.get_PublicExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_PublicExponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_PublicExponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters.get_P
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_P)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_P", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters.get_Q
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_Q)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_Q", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters.get_DP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_DP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_DP", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters.get_DQ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_DQ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_DQ", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters.get_QInv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_QInv)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_QInv", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::Equals)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3413be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3413d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters.ValidateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::BigInteger*, ::StringW, ::StringW)>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::ValidateValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3413ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(),
                                                { "ValidateValue", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_set_e(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_set_p(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_set_q(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___q = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_dP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dP;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_dP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dP;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_set_dP(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dP = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_dQ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dQ;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_dQ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dQ;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_set_dQ(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dQ = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_qInv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qInv;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_get_qInv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qInv;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::__cordl_internal_set_qInv(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qInv = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent,
                                                                                     ::Org::BouncyCastle::Math::BigInteger* privateExponent, ::Org::BouncyCastle::Math::BigInteger* p,
                                                                                     ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* dP,
                                                                                     ::Org::BouncyCastle::Math::BigInteger* dQ, ::Org::BouncyCastle::Math::BigInteger* qInv) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modulus, publicExponent, privateExponent, p, q, dP, dQ, qInv);
}
inline void Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::_ctor(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* rsaPrivateKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rsaPrivateKey);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_PublicExponent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_PublicExponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_P() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_P", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_Q() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_Q", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_DP() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_DP", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_DQ() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_DQ", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_QInv() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), { "get_QInv", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::ValidateValue(::Org::BouncyCastle::Math::BigInteger* x, ::StringW name, ::StringW desc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(),
                                              { "ValidateValue", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, name, desc);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*
Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent,
                                                                            ::Org::BouncyCastle::Math::BigInteger* privateExponent, ::Org::BouncyCastle::Math::BigInteger* p,
                                                                            ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* dP,
                                                                            ::Org::BouncyCastle::Math::BigInteger* dQ, ::Org::BouncyCastle::Math::BigInteger* qInv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(modulus, publicExponent, privateExponent, p, q, dP, dQ, qInv));
}
inline ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*
Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* rsaPrivateKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(rsaPrivateKey));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::RsaPrivateCrtKeyParameters() {}
