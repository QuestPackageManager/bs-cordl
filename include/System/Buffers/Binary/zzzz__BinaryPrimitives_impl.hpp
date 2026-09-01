#pragma once
// IWYU pragma private; include "System\Buffers\Binary\BinaryPrimitives.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/Binary/zzzz__BinaryPrimitives_def.hpp"
//  Writing Method size for method: ::System::Buffers::Binary::BinaryPrimitives.ReverseEndianness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Buffers::Binary::BinaryPrimitives::ReverseEndianness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf4050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Binary::BinaryPrimitives*>(), { "ReverseEndianness", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Binary::BinaryPrimitives.ReverseEndianness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint16_t)>(&::System::Buffers::Binary::BinaryPrimitives::ReverseEndianness)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bf4058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Binary::BinaryPrimitives*>(), { "ReverseEndianness", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Binary::BinaryPrimitives.ReverseEndianness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::System::Buffers::Binary::BinaryPrimitives::ReverseEndianness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf4064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Binary::BinaryPrimitives*>(), { "ReverseEndianness", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t System::Buffers::Binary::BinaryPrimitives::ReverseEndianness(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Binary::BinaryPrimitives*>(), { "ReverseEndianness", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Buffers::Binary::BinaryPrimitives::ReverseEndianness(uint16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Binary::BinaryPrimitives*>(), { "ReverseEndianness", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Buffers::Binary::BinaryPrimitives::ReverseEndianness(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Binary::BinaryPrimitives*>(), { "ReverseEndianness", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Buffers::Binary::BinaryPrimitives::BinaryPrimitives() {}
