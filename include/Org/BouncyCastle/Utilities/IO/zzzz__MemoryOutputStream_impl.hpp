#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\IO\MemoryOutputStream.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__MemoryOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::MemoryOutputStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::IO::MemoryOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::MemoryOutputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x362fb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*>(), { "get_CanRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::MemoryOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::MemoryOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::MemoryOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x362fb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Utilities::IO::MemoryOutputStream::get_CanRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*>(), { "get_CanRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::IO::MemoryOutputStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::IO::MemoryOutputStream* Org::BouncyCastle::Utilities::IO::MemoryOutputStream::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::MemoryOutputStream::MemoryOutputStream() {}
