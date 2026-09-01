#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Zlib\Adler32.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Adler32_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Adler32.adler32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Utilities::Zlib::Adler32::*)(int64_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Adler32::adler32)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x3630bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Adler32*>(),
                                                { "adler32", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Adler32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Adler32::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Adler32::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3630eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Adler32*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int64_t Org::BouncyCastle::Utilities::Zlib::Adler32::adler32(int64_t adler, ::ArrayW<uint8_t> buf, int32_t index, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Adler32*>(),
                                              { "adler32", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, adler, buf, index, len);
}
inline void Org::BouncyCastle::Utilities::Zlib::Adler32::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Adler32*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Zlib::Adler32* Org::BouncyCastle::Utilities::Zlib::Adler32::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Zlib::Adler32*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Zlib::Adler32::Adler32() {}
