#pragma once
// IWYU pragma private; include "ENet/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ENet/zzzz__Extensions_def.hpp"
//  Writing Method size for method: ::ENet::Extensions.StringLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>)>(&::ENet::Extensions::StringLength)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5896be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Extensions*>(), { "StringLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline int32_t ENet::Extensions::StringLength(::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Extensions*>(), { "StringLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::ENet::Extensions::Extensions() {}
