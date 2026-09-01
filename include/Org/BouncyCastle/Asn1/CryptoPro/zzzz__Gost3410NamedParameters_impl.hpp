#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\CryptoPro\Gost3410NamedParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/CryptoPro/zzzz__Gost3410NamedParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/CryptoPro/zzzz__Gost3410ParamSetParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::*)()>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336db24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters.GetByOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::GetByOid)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x336e280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(),
                                                                                           { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters.get_Names
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (*)()>(&::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::get_Names)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x336e3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(), { "get_Names", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters.GetByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* (*)(::StringW)>(
    &::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::GetByName)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x336e4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters.GetOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::GetOid)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x336e6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::setStaticF_objIds(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "objIds", ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::getStaticF_objIds() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "objIds", ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>();
}
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::setStaticF_parameters(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "parameters", ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::getStaticF_parameters() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "parameters", ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>();
}
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::setStaticF_cryptoProA(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*, "cryptoProA", ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(
      std::forward<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(value));
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::getStaticF_cryptoProA() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*, "cryptoProA", ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>();
}
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::setStaticF_cryptoProB(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*, "cryptoProB", ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(
      std::forward<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(value));
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::getStaticF_cryptoProB() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*, "cryptoProB", ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>();
}
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::setStaticF_cryptoProXchA(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*, "cryptoProXchA", ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(
      std::forward<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(value));
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::getStaticF_cryptoProXchA() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*, "cryptoProXchA", ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>();
}
inline void Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(),
                                                                                         { "GetByOid", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(nullptr, ___internal_method, oid);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::get_Names() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(), { "get_Names", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::GetByName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(), { "GetByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::GetOid(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>(), { "GetOid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters* Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::Gost3410NamedParameters() {}
