#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\ECPrivateKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3410c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3410d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)(
    ::StringW, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3410c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)(
    ::StringW, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3410dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters.get_D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::get_D)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3410e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(), { "get_D", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3410e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::Equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3410f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3410f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::__cordl_internal_set_d(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, parameters);
}
inline void Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, publicKeyParamSet);
}
inline void Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d,
                                                                                 ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, d, parameters);
}
inline void Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d,
                                                                                 ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, d, publicKeyParamSet);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::get_D() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(), { "get_D", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::Equals(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(d, parameters));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(d, publicKeyParamSet));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d,
                                                                        ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(algorithm, d, parameters));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d,
                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(algorithm, d, publicKeyParamSet));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::ECPrivateKeyParameters() {}
