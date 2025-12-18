#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampTokenGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampTokenGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampRequest_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampToken_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3527ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*,
    ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x3527ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352830c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetCertificates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCrls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3528314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetCrls", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetAccuracySeconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracySeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352831c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetAccuracySeconds",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetAccuracyMillis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMillis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3528324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetAccuracyMillis",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetAccuracyMicros
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMicros)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352832c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetAccuracyMicros",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetOrdering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(bool)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetOrdering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3528334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetOrdering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetTsa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetTsa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352833c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetTsa", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Tsp::TimeStampToken* (
    ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::Tsp::TimeStampRequest*, ::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::Generate)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x3526018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracySeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracySeconds;
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracySeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracySeconds;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_accuracySeconds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accuracySeconds = value;
}
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracyMillis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracyMillis;
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracyMillis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracyMillis;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_accuracyMillis(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accuracyMillis = value;
}
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracyMicros() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracyMicros;
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracyMicros() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracyMicros;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_accuracyMicros(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accuracyMicros = value;
}
constexpr bool& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_ordering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ordering;
}
constexpr bool const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_ordering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ordering;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_ordering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ordering = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_tsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsa;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_tsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsa;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_tsa(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tsa)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_tsaPolicyOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaPolicyOID;
}
constexpr ::StringW const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_tsaPolicyOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaPolicyOID;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_tsaPolicyOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tsaPolicyOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_key(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_cert(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_digestOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOID;
}
constexpr ::StringW const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_digestOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOID;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_digestOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digestOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_signedAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttr;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_signedAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttr;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_signedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signedAttr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_unsignedAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttr;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_unsignedAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttr;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_unsignedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unsignedAttr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_x509Certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509Certs;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_x509Certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509Certs;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_x509Certs(::Org::BouncyCastle::X509::Store::IX509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x509Certs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_x509Crls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509Crls;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_x509Crls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509Crls;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_x509Crls(::Org::BouncyCastle::X509::Store::IX509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x509Crls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID,
                                                                   ::StringW tsaPolicyOID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, cert, digestOID, tsaPolicyOID);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID,
                                                                   ::StringW tsaPolicyOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                   ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, cert, digestOID, tsaPolicyOID, signedAttr, unsignedAttr);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCertificates(::Org::BouncyCastle::X509::Store::IX509Store* certificates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetCertificates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificates);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCrls(::Org::BouncyCastle::X509::Store::IX509Store* crls) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetCrls", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, crls);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracySeconds(int32_t accuracySeconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetAccuracySeconds",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accuracySeconds);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMillis(int32_t accuracyMillis) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetAccuracyMillis",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accuracyMillis);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMicros(int32_t accuracyMicros) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetAccuracyMicros",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accuracyMicros);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetOrdering(bool ordering) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetOrdering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ordering);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetTsa(::Org::BouncyCastle::Asn1::X509::GeneralName* tsa) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "SetTsa", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tsa);
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request,
                                                                                                           ::Org::BouncyCastle::Math::BigInteger* serialNumber, ::System::DateTime genTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampToken*, false>(this, ___internal_method, request, serialNumber, genTime);
}
inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                                                                    ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID,
                                                                                                                    ::StringW tsaPolicyOID) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(key, cert, digestOID, tsaPolicyOID));
}
inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                                                                    ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID,
                                                                                                                    ::StringW tsaPolicyOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                                                                    ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(key, cert, digestOID, tsaPolicyOID, signedAttr, unsignedAttr));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::TimeStampTokenGenerator() {}
