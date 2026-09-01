#pragma once
// IWYU pragma private; include "Mono\Security\X509\X501.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X501_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X501.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Mono::Security::ASN1*)>(&::Mono::Security::X509::X501::ToString)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5a8c07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X501*>(), { "ToString", {}, { ::i2c::type_of<::Mono::Security::ASN1*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Mono::Security::ASN1*, bool, ::StringW, bool)>(&::Mono::Security::X509::X501::ToString)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5a9399c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X501*>(),
                                                { "ToString", {}, { ::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.AppendEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::Mono::Security::ASN1*, bool)>(&::Mono::Security::X509::X501::AppendEntry)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x5a93124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X501*>(),
                                                { "AppendEntry", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X501::setStaticF_countryName(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "countryName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_countryName() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "countryName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_organizationName(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "organizationName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_organizationName() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "organizationName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_organizationalUnitName(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "organizationalUnitName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_organizationalUnitName() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "organizationalUnitName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_commonName(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "commonName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_commonName() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "commonName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_localityName(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "localityName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_localityName() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "localityName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_stateOrProvinceName(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "stateOrProvinceName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_stateOrProvinceName() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "stateOrProvinceName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_streetAddress(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "streetAddress", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_streetAddress() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "streetAddress", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_serialNumber(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "serialNumber", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_serialNumber() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "serialNumber", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_domainComponent(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "domainComponent", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_domainComponent() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "domainComponent", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_userid(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "userid", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_userid() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "userid", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_email(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "email", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_email() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "email", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_dnQualifier(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "dnQualifier", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_dnQualifier() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "dnQualifier", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_title(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "title", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_title() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "title", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_surname(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "surname", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_surname() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "surname", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_givenName(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "givenName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_givenName() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "givenName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_initial(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "initial", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_initial() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "initial", ::Mono::Security::X509::X501*>();
}
inline ::StringW Mono::Security::X509::X501::ToString(::Mono::Security::ASN1* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X501*>(), { "ToString", {}, { ::i2c::type_of<::Mono::Security::ASN1*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, seq);
}
inline ::StringW Mono::Security::X509::X501::ToString(::Mono::Security::ASN1* seq, bool reversed, ::StringW separator, bool quotes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X501*>(),
                                              { "ToString", {}, { ::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, seq, reversed, separator, quotes);
}
inline void Mono::Security::X509::X501::AppendEntry(::System::Text::StringBuilder* sb, ::Mono::Security::ASN1* entry, bool quotes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X501*>(),
                                              { "AppendEntry", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, entry, quotes);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X501::X501() {}
