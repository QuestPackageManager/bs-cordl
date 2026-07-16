#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomLevelsSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CustomLevelsSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLevelsSettings::*)(bool)>(&::GlobalNamespace::CustomLevelsSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3705114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelsSettings*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CustomLevelsSettings::__cordl_internal_get_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr bool const& GlobalNamespace::CustomLevelsSettings::__cordl_internal_get_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr void GlobalNamespace::CustomLevelsSettings::__cordl_internal_set_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabled = value;
}
inline void GlobalNamespace::CustomLevelsSettings::_ctor(bool enabled) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelsSettings*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline ::GlobalNamespace::CustomLevelsSettings* GlobalNamespace::CustomLevelsSettings::New_ctor(bool enabled) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomLevelsSettings*>(enabled));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomLevelsSettings::CustomLevelsSettings() {}
