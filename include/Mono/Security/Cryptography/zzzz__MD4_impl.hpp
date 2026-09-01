#pragma once
// IWYU pragma private; include "Mono\Security\Cryptography\MD4.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__MD4_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD4::*)()>(&::Mono::Security::Cryptography::MD4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aa04e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Cryptography::MD4* (*)()>(&::Mono::Security::Cryptography::MD4::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5aa04f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline void Mono::Security::Cryptography::MD4::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::Cryptography::MD4* Mono::Security::Cryptography::MD4::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Cryptography::MD4*>(nullptr, ___internal_method);
}
inline ::Mono::Security::Cryptography::MD4* Mono::Security::Cryptography::MD4::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::MD4*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::MD4::MD4() {}
