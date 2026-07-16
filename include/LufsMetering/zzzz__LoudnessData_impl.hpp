#pragma once
// IWYU pragma private; include "LufsMetering/LoudnessData.hpp"
#include "LufsMetering/zzzz__LoudnessData_def.hpp"
//  Writing Method size for method: ::LufsMetering::LoudnessData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LufsMetering::LoudnessData::*)(float_t, ::ArrayW<float_t>, float_t)>(&::LufsMetering::LoudnessData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3267c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LufsMetering::LoudnessData>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void LufsMetering::LoudnessData::_ctor(float_t lufs, ::ArrayW<float_t> momentaryValues, float_t blockDuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LufsMetering::LoudnessData>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lufs, momentaryValues, blockDuration);
}
// Ctor Parameters [CppParam { name: "lufs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "blockDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "momentaryValues", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::LufsMetering::LoudnessData::LoudnessData(float_t lufs, float_t blockDuration, ::ArrayW<float_t> momentaryValues) noexcept {
  this->lufs = lufs;
  this->blockDuration = blockDuration;
  this->momentaryValues = momentaryValues;
}
// Ctor Parameters []
constexpr ::LufsMetering::LoudnessData::LoudnessData() {}
