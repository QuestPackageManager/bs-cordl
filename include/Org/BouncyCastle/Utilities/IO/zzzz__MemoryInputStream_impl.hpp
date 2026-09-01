#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\IO\MemoryInputStream.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__MemoryInputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::MemoryInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::MemoryInputStream::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Utilities::IO::MemoryInputStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x362fb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::MemoryInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::MemoryInputStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::IO::MemoryInputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::MemoryInputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x362fb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::MemoryInputStream*>(), { "get_CanWrite", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::IO::MemoryInputStream::_ctor(::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::MemoryInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline bool Org::BouncyCastle::Utilities::IO::MemoryInputStream::get_CanWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::MemoryInputStream*>(), { "get_CanWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::IO::MemoryInputStream* Org::BouncyCastle::Utilities::IO::MemoryInputStream::New_ctor(::ArrayW<uint8_t> buffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::IO::MemoryInputStream*>(buffer));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::MemoryInputStream::MemoryInputStream() {}
