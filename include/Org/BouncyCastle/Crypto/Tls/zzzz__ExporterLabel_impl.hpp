#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\ExporterLabel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ExporterLabel_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ExporterLabel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ExporterLabel::*)()>(&::Org::BouncyCastle::Crypto::Tls::ExporterLabel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x346b3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::ExporterLabel::setStaticF_extended_master_secret(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "extended_master_secret", ::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::ExporterLabel::getStaticF_extended_master_secret() {
  return ::cordl_internals::getStaticField<::StringW, "extended_master_secret", ::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>();
}
inline void Org::BouncyCastle::Crypto::Tls::ExporterLabel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::ExporterLabel* Org::BouncyCastle::Crypto::Tls::ExporterLabel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::ExporterLabel*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::ExporterLabel::ExporterLabel() {}
