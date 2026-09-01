#pragma once
// IWYU pragma private; include "System\Security\Cryptography\SHA256.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__SHA256_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SHA256._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA256::*)()>(&::System::Security::Cryptography::SHA256::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b040bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::SHA256* (*)()>(&::System::Security::Cryptography::SHA256::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b040c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::SHA256::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::SHA256* System::Security::Cryptography::SHA256::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::SHA256*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::SHA256* System::Security::Cryptography::SHA256::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::SHA256*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SHA256::SHA256() {}
