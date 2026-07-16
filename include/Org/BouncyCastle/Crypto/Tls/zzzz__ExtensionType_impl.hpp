#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ExtensionType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ExtensionType_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ExtensionType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ExtensionType::*)()>(&::Org::BouncyCastle::Crypto::Tls::ExtensionType::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34690b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ExtensionType*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::ExtensionType::setStaticF_DRAFT_token_binding(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DRAFT_token_binding", ::Org::BouncyCastle::Crypto::Tls::ExtensionType*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Tls::ExtensionType::getStaticF_DRAFT_token_binding() {
  return ::cordl_internals::getStaticField<int32_t, "DRAFT_token_binding", ::Org::BouncyCastle::Crypto::Tls::ExtensionType*>();
}
inline void Org::BouncyCastle::Crypto::Tls::ExtensionType::setStaticF_negotiated_ff_dhe_groups(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "negotiated_ff_dhe_groups", ::Org::BouncyCastle::Crypto::Tls::ExtensionType*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Tls::ExtensionType::getStaticF_negotiated_ff_dhe_groups() {
  return ::cordl_internals::getStaticField<int32_t, "negotiated_ff_dhe_groups", ::Org::BouncyCastle::Crypto::Tls::ExtensionType*>();
}
inline void Org::BouncyCastle::Crypto::Tls::ExtensionType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ExtensionType*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::ExtensionType* Org::BouncyCastle::Crypto::Tls::ExtensionType::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::ExtensionType*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::ExtensionType::ExtensionType() {}
