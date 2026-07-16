#pragma once
// IWYU pragma private; include "System/KnownTerminals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__KnownTerminals_def.hpp"
//  Writing Method size for method: ::System::KnownTerminals.get_linux
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::System::KnownTerminals::get_linux)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c90b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::KnownTerminals*>(), { "get_linux", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::KnownTerminals.get_xterm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::System::KnownTerminals::get_xterm)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c90b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::KnownTerminals*>(), { "get_xterm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::KnownTerminals.get_ansi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::System::KnownTerminals::get_ansi)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c90bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::KnownTerminals*>(), { "get_ansi", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> System::KnownTerminals::get_linux() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::KnownTerminals*>(), { "get_linux", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> System::KnownTerminals::get_xterm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::KnownTerminals*>(), { "get_xterm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> System::KnownTerminals::get_ansi() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::KnownTerminals*>(), { "get_ansi", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::KnownTerminals::KnownTerminals() {}
