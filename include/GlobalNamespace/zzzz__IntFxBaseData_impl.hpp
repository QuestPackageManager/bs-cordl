#pragma once
// IWYU pragma private; include "GlobalNamespace\IntFxBaseData.hpp"
#include "GlobalNamespace/zzzz__FxBaseData_impl.hpp"
#include "GlobalNamespace/zzzz__IntFxBaseData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IntFxBaseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IntFxBaseData::*)(float_t, bool, int32_t)>(&::GlobalNamespace::IntFxBaseData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3719498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IntFxBaseData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::IntFxBaseData::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::IntFxBaseData::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::IntFxBaseData::__cordl_internal_set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void GlobalNamespace::IntFxBaseData::_ctor(float_t beat, bool usePreviousEventValue, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IntFxBaseData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, usePreviousEventValue, value);
}
inline ::GlobalNamespace::IntFxBaseData* GlobalNamespace::IntFxBaseData::New_ctor(float_t beat, bool usePreviousEventValue, int32_t value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IntFxBaseData*>(beat, usePreviousEventValue, value));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IntFxBaseData::IntFxBaseData() {}
