#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSettingsDspTimeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSettingsDspTimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__IDspTimeProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioSettingsDspTimeProvider.get_dspTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::AudioSettingsDspTimeProvider::*)()>(&::GlobalNamespace::AudioSettingsDspTimeProvider::get_dspTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58b9f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioSettingsDspTimeProvider*>(), { "get_dspTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSettingsDspTimeProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSettingsDspTimeProvider::*)()>(&::GlobalNamespace::AudioSettingsDspTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b9f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioSettingsDspTimeProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline double_t GlobalNamespace::AudioSettingsDspTimeProvider::get_dspTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioSettingsDspTimeProvider*>(), { "get_dspTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSettingsDspTimeProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioSettingsDspTimeProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSettingsDspTimeProvider* GlobalNamespace::AudioSettingsDspTimeProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioSettingsDspTimeProvider*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDspTimeProvider"
constexpr GlobalNamespace::AudioSettingsDspTimeProvider::operator ::GlobalNamespace::IDspTimeProvider*() noexcept {
  return static_cast<::GlobalNamespace::IDspTimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDspTimeProvider"
constexpr ::GlobalNamespace::IDspTimeProvider* GlobalNamespace::AudioSettingsDspTimeProvider::i___GlobalNamespace__IDspTimeProvider() noexcept {
  return static_cast<::GlobalNamespace::IDspTimeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSettingsDspTimeProvider::AudioSettingsDspTimeProvider() {}
