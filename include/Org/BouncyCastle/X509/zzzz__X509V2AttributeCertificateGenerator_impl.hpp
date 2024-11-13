#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509V2AttributeCertificateGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509V2AttributeCertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V2AttributeCertificateInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509ExtensionsGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateHolder_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateIssuer_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Attribute_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25c8d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25c8dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetHolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(
    ::Org::BouncyCastle::X509::AttributeCertificateHolder*)>(&::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetHolder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25c8e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetHolder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::AttributeCertificateHolder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetIssuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(
    ::Org::BouncyCastle::X509::AttributeCertificateIssuer*)>(&::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25c8e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetIssuer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetSerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25c8e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetSerialNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetNotBefore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::System::DateTime)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotBefore)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25c8eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetNotBefore",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetNotAfter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::System::DateTime)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotAfter)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25c8f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetNotAfter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetSignatureAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::StringW)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSignatureAlgorithm)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x25c8fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetSignatureAlgorithm",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::X509::X509Attribute*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x25c912c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Attribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetIssuerUniqueId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::ArrayW<bool, ::Array<bool>*>)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuerUniqueId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x25c9170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetIssuerUniqueId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(
    ::StringW, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25c91b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "AddExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(
    ::StringW, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25c9248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "AddExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
        &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c92dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (
    ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25c92e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (
    ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*)>(&::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x25c9360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.get_SignatureAlgNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25c98b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(),
                                                 "get_SignatureAlgNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_extGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extGenerator;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*> const&
Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_extGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extGenerator;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_set_extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extGenerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_acInfoGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acInfoGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*> const&
Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_acInfoGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acInfoGen;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_set_acInfoGen(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___acInfoGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_sigOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigOID;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const&
Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_sigOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigOID;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_set_sigOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sigOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_sigAlgId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgId;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const&
Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_sigAlgId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgId;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sigAlgId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_signatureAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr ::StringW const& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_signatureAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_set_signatureAlgorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signatureAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator* Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>());
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetHolder(::Org::BouncyCastle::X509::AttributeCertificateHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetHolder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::AttributeCertificateHolder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, holder);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer* issuer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetIssuer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, issuer);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetSerialNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serialNumber);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotBefore(::System::DateTime date) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetNotBefore",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotAfter(::System::DateTime date) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetNotAfter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSignatureAlgorithm(::StringW signatureAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetSignatureAlgorithm",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signatureAlgorithm);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddAttribute(::Org::BouncyCastle::X509::X509Attribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Attribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuerUniqueId(::ArrayW<bool, ::Array<bool>*> iui) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "SetIssuerUniqueId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iui);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "AddExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, critical, extensionValue);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "AddExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, critical, extensionValue);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*, false>(this, ___internal_method, privateKey);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                                                    ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*, false>(this, ___internal_method, privateKey, random);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate*
Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*, false>(this, ___internal_method, signatureCalculatorFactory);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::get_SignatureAlgNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>::get(), "get_SignatureAlgNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::X509V2AttributeCertificateGenerator() {}
