#pragma once
// IWYU pragma private; include "System/Security/Cryptography/HMACRIPEMD160.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_impl.hpp"
#include "System/Security/Cryptography/zzzz__HMACRIPEMD160_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HMACRIPEMD160._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMACRIPEMD160::*)()>(&::System::Security::Cryptography::HMACRIPEMD160::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5af9888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACRIPEMD160*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACRIPEMD160._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMACRIPEMD160::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::HMACRIPEMD160::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5af98ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACRIPEMD160*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::HMACRIPEMD160::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACRIPEMD160*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMACRIPEMD160::_ctor(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACRIPEMD160*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Security::Cryptography::HMACRIPEMD160* System::Security::Cryptography::HMACRIPEMD160::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::HMACRIPEMD160*>());
}
inline ::System::Security::Cryptography::HMACRIPEMD160* System::Security::Cryptography::HMACRIPEMD160::New_ctor(::ArrayW<uint8_t> key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::HMACRIPEMD160*>(key));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::HMACRIPEMD160::HMACRIPEMD160() {}
