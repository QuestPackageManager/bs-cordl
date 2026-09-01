#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cmp\CertificateConfirmationContent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateConfirmationContent_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertConfirmContent_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*)>(
    &::Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a1a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)(
    ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*, ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*)>(&::Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a1aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContent.ToAsn1Structure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* (::Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)()>(
    &::Org::BouncyCastle::Cmp::CertificateConfirmationContent::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a1aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(), { "ToAsn1Structure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContent.GetStatusMessages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Cmp::CertificateStatus*> (::Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)()>(
    &::Org::BouncyCastle::Cmp::CertificateConfirmationContent::GetStatusMessages)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x36a1ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(), { "GetStatusMessages", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_get_digestAlgFinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgFinder;
}
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* const& Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_get_digestAlgFinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgFinder;
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestAlgFinder = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*& Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* const& Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_set_content(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
inline void Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline void Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content,
                                                                          ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content, digestAlgFinder);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* Org::BouncyCastle::Cmp::CertificateConfirmationContent::ToAsn1Structure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(), { "ToAsn1Structure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Cmp::CertificateStatus*> Org::BouncyCastle::Cmp::CertificateConfirmationContent::GetStatusMessages() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(), { "GetStatusMessages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Cmp::CertificateStatus*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContent* Org::BouncyCastle::Cmp::CertificateConfirmationContent::New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(content));
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContent*
Org::BouncyCastle::Cmp::CertificateConfirmationContent::New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content,
                                                                 ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(content, digestAlgFinder));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::CertificateConfirmationContent::CertificateConfirmationContent() {}
