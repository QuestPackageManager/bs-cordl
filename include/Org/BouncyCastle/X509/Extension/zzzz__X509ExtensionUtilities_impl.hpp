#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Extension/X509ExtensionUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Extension/zzzz__X509ExtensionUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities.FromExtensionValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::FromExtensionValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x363cbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>(),
                                                                                           { "FromExtensionValue", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities.GetIssuerAlternativeNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::GetIssuerAlternativeNames)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x363d484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>(),
                                                                                           { "GetIssuerAlternativeNames", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities.GetSubjectAlternativeNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::GetSubjectAlternativeNames)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x363def4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>(),
                                                                                           { "GetSubjectAlternativeNames", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities.GetAlternativeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::GetAlternativeName)> {
  constexpr static std::size_t size = 0x9f8;
  constexpr static std::size_t addrs = 0x363d4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>(),
                                                                                           { "GetAlternativeName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::*)()>(
    &::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363df6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::FromExtensionValue(::Org::BouncyCastle::Asn1::Asn1OctetString* extensionValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>(),
                                                                                         { "FromExtensionValue", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(nullptr, ___internal_method, extensionValue);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::GetIssuerAlternativeNames(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>(),
                                                                                         { "GetIssuerAlternativeNames", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, cert);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::GetSubjectAlternativeNames(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>(),
                                                                                         { "GetSubjectAlternativeNames", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, cert);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::GetAlternativeName(::Org::BouncyCastle::Asn1::Asn1OctetString* extVal) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>(),
                                                                                         { "GetAlternativeName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, extVal);
}
inline void Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities* Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::X509ExtensionUtilities() {}
