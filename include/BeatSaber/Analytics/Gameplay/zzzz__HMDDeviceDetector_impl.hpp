#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/HMDDeviceDetector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__HMDDeviceDetector_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector.GetOSVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BeatSaber::Analytics::Gameplay::HMDDeviceDetector::GetOSVersion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x34e92b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(), { "GetOSVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector.GetOSBuildNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BeatSaber::Analytics::Gameplay::HMDDeviceDetector::GetOSBuildNumber)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x34e98e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(), { "GetOSBuildNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector.EnsureOSBuildInfoCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BeatSaber::Analytics::Gameplay::HMDDeviceDetector::EnsureOSBuildInfoCached)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x34e9304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(), { "EnsureOSBuildInfoCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector.DetectHMDPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BeatSaber::Analytics::Gameplay::HMDDeviceDetector::DetectHMDPlatform)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x34e919c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(), { "DetectHMDPlatform", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::HMDDeviceDetector::setStaticF__osVersion(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_osVersion", ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Analytics::Gameplay::HMDDeviceDetector::getStaticF__osVersion() {
  return ::cordl_internals::getStaticField<::StringW, "_osVersion", ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>();
}
inline void BeatSaber::Analytics::Gameplay::HMDDeviceDetector::setStaticF__osBuildNumber(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_osBuildNumber", ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Analytics::Gameplay::HMDDeviceDetector::getStaticF__osBuildNumber() {
  return ::cordl_internals::getStaticField<::StringW, "_osBuildNumber", ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>();
}
inline ::StringW BeatSaber::Analytics::Gameplay::HMDDeviceDetector::GetOSVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(), { "GetOSVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW BeatSaber::Analytics::Gameplay::HMDDeviceDetector::GetOSBuildNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(), { "GetOSBuildNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::HMDDeviceDetector::EnsureOSBuildInfoCached() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(), { "EnsureOSBuildInfoCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW BeatSaber::Analytics::Gameplay::HMDDeviceDetector::DetectHMDPlatform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(), { "DetectHMDPlatform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector::HMDDeviceDetector() {}
