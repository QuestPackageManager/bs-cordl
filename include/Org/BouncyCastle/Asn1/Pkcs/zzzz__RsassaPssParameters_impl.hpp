#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Pkcs\RsassaPssParameters.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__RsassaPssParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3468bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::*)()>(&::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3468f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::DerInteger*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3468fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x3468d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3468fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { "get_HashAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters.get_MaskGenAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::get_MaskGenAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3468fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { "get_MaskGenAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters.get_SaltLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::get_SaltLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3468fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { "get_SaltLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters.get_TrailerField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::get_TrailerField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3468fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { "get_TrailerField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::ToAsn1Object)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x3468fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_get_hashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_get_hashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_get_maskGenAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maskGenAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_get_maskGenAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maskGenAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_set_maskGenAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maskGenAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_get_saltLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saltLength;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_get_saltLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saltLength;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_set_saltLength(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saltLength = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_get_trailerField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailerField;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_get_trailerField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailerField;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::__cordl_internal_set_trailerField(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailerField = value;
}
inline void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::setStaticF_DefaultHashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, "DefaultHashAlgorithm", ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::getStaticF_DefaultHashAlgorithm() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, "DefaultHashAlgorithm", ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::setStaticF_DefaultMaskGenFunction(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, "DefaultMaskGenFunction", ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::getStaticF_DefaultMaskGenFunction() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, "DefaultMaskGenFunction", ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::setStaticF_DefaultSaltLength(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "DefaultSaltLength", ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(
      std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::getStaticF_DefaultSaltLength() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "DefaultSaltLength", ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::setStaticF_DefaultTrailerField(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "DefaultTrailerField", ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(
      std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::getStaticF_DefaultTrailerField() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "DefaultTrailerField", ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>();
}
inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                      ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm, ::Org::BouncyCastle::Asn1::DerInteger* saltLength,
                                                                      ::Org::BouncyCastle::Asn1::DerInteger* trailerField) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashAlgorithm, maskGenAlgorithm, saltLength, trailerField);
}
inline void Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::get_HashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { "get_HashAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::get_MaskGenAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { "get_MaskGenAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::get_SaltLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { "get_SaltLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::get_TrailerField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), { "get_TrailerField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>());
}
inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                                                                          ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm,
                                                                                                                          ::Org::BouncyCastle::Asn1::DerInteger* saltLength,
                                                                                                                          ::Org::BouncyCastle::Asn1::DerInteger* trailerField) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(hashAlgorithm, maskGenAlgorithm, saltLength, trailerField));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::RsassaPssParameters() {}
