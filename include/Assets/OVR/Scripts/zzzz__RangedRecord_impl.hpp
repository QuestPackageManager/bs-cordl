#pragma once
// IWYU pragma private; include "Assets\OVR\Scripts\RangedRecord.hpp"
#include "Assets/OVR/Scripts/zzzz__Record_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__RangedRecord_def.hpp"
//  Writing Method size for method: ::Assets::OVR::Scripts::RangedRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Assets::OVR::Scripts::RangedRecord::*)(int32_t, ::StringW, ::StringW, float_t, float_t, float_t)>(
    &::Assets::OVR::Scripts::RangedRecord::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e49c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Assets::OVR::Scripts::RangedRecord*>(), { ".ctor",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& Assets::OVR::Scripts::RangedRecord::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr float_t const& Assets::OVR::Scripts::RangedRecord::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Assets::OVR::Scripts::RangedRecord::__cordl_internal_set_value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr float_t& Assets::OVR::Scripts::RangedRecord::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr float_t const& Assets::OVR::Scripts::RangedRecord::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void Assets::OVR::Scripts::RangedRecord::__cordl_internal_set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr float_t& Assets::OVR::Scripts::RangedRecord::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr float_t const& Assets::OVR::Scripts::RangedRecord::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void Assets::OVR::Scripts::RangedRecord::__cordl_internal_set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline void Assets::OVR::Scripts::RangedRecord::_ctor(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Assets::OVR::Scripts::RangedRecord*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, order, cat, msg, val, minVal, maxVal);
}
inline ::Assets::OVR::Scripts::RangedRecord* Assets::OVR::Scripts::RangedRecord::New_ctor(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Assets::OVR::Scripts::RangedRecord*>(order, cat, msg, val, minVal, maxVal));
}
// Ctor Parameters []
constexpr ::Assets::OVR::Scripts::RangedRecord::RangedRecord() {}
