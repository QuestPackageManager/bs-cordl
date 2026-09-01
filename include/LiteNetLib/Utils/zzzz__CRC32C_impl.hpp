#pragma once
// IWYU pragma private; include "LiteNetLib\Utils\CRC32C.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__CRC32C_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::CRC32C.Compute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::Utils::CRC32C::Compute)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x58a95e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::CRC32C*>(), { "Compute", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void LiteNetLib::Utils::CRC32C::setStaticF_Table(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "Table", ::LiteNetLib::Utils::CRC32C*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> LiteNetLib::Utils::CRC32C::getStaticF_Table() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "Table", ::LiteNetLib::Utils::CRC32C*>();
}
inline uint32_t LiteNetLib::Utils::CRC32C::Compute(::ArrayW<uint8_t> input, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::CRC32C*>(), { "Compute", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, input, offset, length);
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::CRC32C::CRC32C() {}
