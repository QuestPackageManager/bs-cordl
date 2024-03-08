#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInfoGeneratorBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)()>(
    &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x129f23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.SetDirectSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* (
    ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(bool)>(&::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::SetDirectSignature)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x129f244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "SetDirectSignature",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.WithSignedAttributeGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* (::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(
        &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::WithSignedAttributeGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x129f250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "WithSignedAttributeGenerator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.WithUnsignedAttributeGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* (::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(
        &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::WithUnsignedAttributeGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x129f258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "WithUnsignedAttributeGenerator",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerInfoGenerator* (
    ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::Build)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x129f260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerInfoGenerator* (
    ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::Build)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x129f49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder.CreateGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerInfoGenerator* (
    ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*)>(
    &::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::CreateGenerator)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x129f38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "CreateGenerator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>::get() })));
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
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> const& Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_get_signedGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedGen;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_set_signedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signedGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_get_unsignedGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> const&
Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_get_unsignedGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedGen;
}
constexpr void Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::__cordl_internal_set_unsignedGen(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unsignedGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>());
}
inline void Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::SetDirectSignature(bool hasNoSignedAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "SetDirectSignature",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*, false>(this, ___internal_method, hasNoSignedAttributes);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*
Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::WithSignedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "WithSignedAttributeGenerator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*, false>(this, ___internal_method, signedGen);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*
Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::WithUnsignedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "WithUnsignedAttributeGenerator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*, false>(this, ___internal_method, unsignedGen);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::Build(::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner,
                                                                                                                ::Org::BouncyCastle::X509::X509Certificate* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGenerator*, false>(this, ___internal_method, contentSigner, certificate);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::Build(::Org::BouncyCastle::Crypto::ISignatureFactory* signerFactory,
                                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGenerator*, false>(this, ___internal_method, signerFactory, subjectKeyIdentifier);
}
inline ::Org::BouncyCastle::Cms::SignerInfoGenerator* Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::CreateGenerator(::Org::BouncyCastle::Crypto::ISignatureFactory* contentSigner,
                                                                                                                          ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* sigId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*>::get(), "CreateGenerator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInfoGenerator*, false>(this, ___internal_method, contentSigner, sigId);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder::SignerInfoGeneratorBuilder() {}
