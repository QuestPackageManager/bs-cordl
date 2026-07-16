#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/DefaultDigestAlgorithmIdentifierFinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder.find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
        &::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::find)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x36b61e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>(),
                                                                                           { "find", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder.find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::find)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x36c6148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>(), { "find", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::*)()>(
    &::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36b61e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::setStaticF_digestOids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestOids", ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::getStaticF_digestOids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestOids", ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>();
}
inline void Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::setStaticF_digestNameToOids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "digestNameToOids", ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::getStaticF_digestNameToOids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "digestNameToOids", ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>();
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::find(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>(),
                                                                                         { "find", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method, sigAlgId);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::find(::StringW digAlgName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>(), { "find", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method, digAlgName);
}
inline void Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder::DefaultDigestAlgorithmIdentifierFinder() {}
