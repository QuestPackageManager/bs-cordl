#pragma once
// IWYU pragma private; include "GlobalNamespace/SongSpeedData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongSpeedData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongSpeedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongSpeedData::*)(float_t)>(&::GlobalNamespace::SongSpeedData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37071f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongSpeedData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SongSpeedData::__cordl_internal_get_speedMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speedMul;
}
constexpr float_t const& GlobalNamespace::SongSpeedData::__cordl_internal_get_speedMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speedMul;
}
constexpr void GlobalNamespace::SongSpeedData::__cordl_internal_set_speedMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___speedMul = value;
}
inline void GlobalNamespace::SongSpeedData::_ctor(float_t speedMul) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongSpeedData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speedMul);
}
inline ::GlobalNamespace::SongSpeedData* GlobalNamespace::SongSpeedData::New_ctor(float_t speedMul) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongSpeedData*>(speedMul));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongSpeedData::SongSpeedData() {}
