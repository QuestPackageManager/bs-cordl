#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\SignerInfoGeneratorBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInfoGeneratorBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)()>(&::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36d3bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.SetDirectSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* (::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(bool)>(
    &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::SetDirectSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d3bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(), { "SetDirectSignature", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.WithSignedAttributeGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* (::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(
        &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::WithSignedAttributeGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d3c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(),
                                                             { "WithSignedAttributeGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.WithUnsignedAttributeGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* (::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(
        &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::WithUnsignedAttributeGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d3c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(),
                                                             { "WithUnsignedAttributeGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerInfoGenerator* (
    ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::Build)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x36d3c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(),
                                         { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerInfoGenerator* (
    ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::Build)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x36d3e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(),
                                                             { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.CreateGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerInfoGenerator* (
    ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*)>(
    &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::CreateGenerator)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x36d3d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(),
                            { "CreateGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>() } })));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_get_directSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directSignature;
}
constexpr bool const& Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_get_directSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directSignature;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_set_directSignature(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___directSignature = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_get_signedGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedGen;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_get_signedGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedGen;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_set_signedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signedGen = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_get_unsignedGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedGen;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_get_unsignedGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedGen;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_set_unsignedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsignedGen = value;
}
inline void Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::SetDirectSignature(bool hasNoSignedAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(), { "SetDirectSignature", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(this, ___internal_method, hasNoSignedAttributes);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*
Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::WithSignedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(),
                                                           { "WithSignedAttributeGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(this, ___internal_method, signedGen);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*
Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::WithUnsignedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(),
                                                           { "WithUnsignedAttributeGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(this, ___internal_method, unsignedGen);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::Build(::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner,
                                                                                                                ::Org::BouncyCastle::X509::X509Certificate* certificate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(),
                                              { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(this, ___internal_method, contentSigner, certificate);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::Build(::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory,
                                                                                                                ::ArrayW<uint8_t> subjectKeyIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(),
                                                           { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(this, ___internal_method, signerFactory, subjectKeyIdentifier);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::CreateGenerator(::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner,
                                                                                                                          ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>(),
                          { "CreateGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGenerator*>(this, ___internal_method, contentSigner, sigId);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::SignerInfoGeneratorBuilder() {}
