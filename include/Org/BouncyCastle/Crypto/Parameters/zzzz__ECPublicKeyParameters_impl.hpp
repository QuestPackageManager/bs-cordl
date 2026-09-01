#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\ECPublicKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)(
    ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3410fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)(
    ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x34110c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)(
    ::StringW, ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3411024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)(
    ::StringW, ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3411170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters.get_Q
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::get_Q)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3411210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(), { "get_Q", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3411218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x34112c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3411320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::__cordl_internal_set_q(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___q = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::_ctor(::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, q, parameters);
}
inline void Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::_ctor(::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, q, publicKeyParamSet);
}
inline void Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::EC::ECPoint* q,
                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, q, parameters);
}
inline void Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::EC::ECPoint* q,
                                                                                ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, q, publicKeyParamSet);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::get_Q() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(), { "get_Q", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::Equals(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(q, parameters));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(q, publicKeyParamSet));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::EC::ECPoint* q,
                                                                       ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(algorithm, q, parameters));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::EC::ECPoint* q,
                                                                       ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(algorithm, q, publicKeyParamSet));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::ECPublicKeyParameters() {}
