#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/KeyBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__KeyBuilder_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyBuilder.get_Rng
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (*)()>(&::Mono::Security::Cryptography::KeyBuilder::get_Rng)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ab7cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyBuilder*>(), { "get_Rng", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyBuilder.Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::Mono::Security::Cryptography::KeyBuilder::Key)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ab7d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyBuilder*>(), { "Key", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyBuilder.IV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::Mono::Security::Cryptography::KeyBuilder::IV)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ab7d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyBuilder*>(), { "IV", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Mono::Security::Cryptography::KeyBuilder::setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "rng", ::Mono::Security::Cryptography::KeyBuilder*>(
      std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Security::Cryptography::KeyBuilder::getStaticF_rng() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "rng", ::Mono::Security::Cryptography::KeyBuilder*>();
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Security::Cryptography::KeyBuilder::get_Rng() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyBuilder*>(), { "get_Rng", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::KeyBuilder::Key(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyBuilder*>(), { "Key", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, size);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::KeyBuilder::IV(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::KeyBuilder*>(), { "IV", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, size);
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::KeyBuilder::KeyBuilder() {}
