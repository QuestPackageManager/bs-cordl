#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/CommonFieldProviders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__CommonFieldProviders_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::CommonFieldProviders.get_RuntimePlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BeatGames::Analytics::Events::CommonFieldProviders::get_RuntimePlatform)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x32578ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::CommonFieldProviders*>(), { "get_RuntimePlatform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::CommonFieldProviders.get_DeviceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BeatGames::Analytics::Events::CommonFieldProviders::get_DeviceType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3257c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::CommonFieldProviders*>(), { "get_DeviceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::CommonFieldProviders.get_VROSMajorVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::BeatGames::Analytics::Events::CommonFieldProviders::get_VROSMajorVersion)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x325797c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::CommonFieldProviders*>(), { "get_VROSMajorVersion", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatGames::Analytics::Events::CommonFieldProviders::setStaticF__cachedVROSVersion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cachedVROSVersion", ::BeatGames::Analytics::Events::CommonFieldProviders*>(std::forward<int32_t>(value));
}
inline int32_t BeatGames::Analytics::Events::CommonFieldProviders::getStaticF__cachedVROSVersion() {
  return ::cordl_internals::getStaticField<int32_t, "_cachedVROSVersion", ::BeatGames::Analytics::Events::CommonFieldProviders*>();
}
inline ::StringW BeatGames::Analytics::Events::CommonFieldProviders::get_RuntimePlatform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::CommonFieldProviders*>(), { "get_RuntimePlatform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW BeatGames::Analytics::Events::CommonFieldProviders::get_DeviceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::CommonFieldProviders*>(), { "get_DeviceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t BeatGames::Analytics::Events::CommonFieldProviders::get_VROSMajorVersion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatGames::Analytics::Events::CommonFieldProviders*>(), { "get_VROSMajorVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::CommonFieldProviders::CommonFieldProviders() {}
