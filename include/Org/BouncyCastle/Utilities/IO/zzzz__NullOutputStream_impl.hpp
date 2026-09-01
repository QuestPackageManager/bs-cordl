#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\IO\NullOutputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__NullOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::NullOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::NullOutputStream::*)(uint8_t)>(&::Org::BouncyCastle::Utilities::IO::NullOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362fb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::NullOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::NullOutputStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::NullOutputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::NullOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::IO::NullOutputStream::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362fb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::NullOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::NullOutputStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::NullOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::NullOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::NullOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x362fb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::NullOutputStream*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Utilities::IO::NullOutputStream::WriteByte(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::NullOutputStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Utilities::IO::NullOutputStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::NullOutputStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void Org::BouncyCastle::Utilities::IO::NullOutputStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::NullOutputStream*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::IO::NullOutputStream* Org::BouncyCastle::Utilities::IO::NullOutputStream::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::IO::NullOutputStream*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::NullOutputStream::NullOutputStream() {}
