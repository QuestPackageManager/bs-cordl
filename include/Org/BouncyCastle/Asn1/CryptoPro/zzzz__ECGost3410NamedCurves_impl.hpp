#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\CryptoPro\ECGost3410NamedCurves.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/CryptoPro/zzzz__ECGost3410NamedCurves_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves.ConfigureBasepoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x336a97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(),
                                                             { "ConfigureBasepoint",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves.ConfigureCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::ConfigureCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336aa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(),
                                                                                           { "ConfigureCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::*)()>(&::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336aa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves.GetByOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetByOid)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x336c85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(),
                                                                                           { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves.GetByOidX9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetByOidX9)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x336c984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(),
                                                                                           { "GetByOidX9", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves.get_Names
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (*)()>(&::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::get_Names)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x336cb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(), { "get_Names", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves.GetByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* (*)(::StringW)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetByName)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x336cc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves.GetByNameX9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetByNameX9)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x336ce6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(), { "GetByNameX9", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x336cfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(),
                                                                                           { "GetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves.GetOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetOid)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x336d0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::setStaticF_objIds(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "objIds", ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::getStaticF_objIds() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "objIds", ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>();
}
inline void Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::setStaticF_parameters(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "parameters", ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::getStaticF_parameters() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "parameters", ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>();
}
inline void Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::setStaticF_names(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "names", ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::getStaticF_names() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "names", ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>();
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                                                             ::Org::BouncyCastle::Math::BigInteger* x,
                                                                                                                             ::Org::BouncyCastle::Math::BigInteger* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(),
                                                           { "ConfigureBasepoint",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, curve, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(),
                                                                                         { "ConfigureCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(nullptr, ___internal_method, curve);
}
inline void Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(),
                                                                                         { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetByOidX9(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(),
                                                                                         { "GetByOidX9", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, oid);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::get_Names() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(), { "get_Names", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetByName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetByNameX9(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(), { "GetByNameX9", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>(nullptr, ___internal_method, name);
}
inline ::StringW Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(),
                                                                                         { "GetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::GetOid(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves* Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves::ECGost3410NamedCurves() {}
