#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\HMDDeviceDetector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__HMDDeviceDetector_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector.DetectHMDPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BeatSaber::Analytics::Gameplay::HMDDeviceDetector::DetectHMDPlatform)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3263ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(), { "DetectHMDPlatform", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW BeatSaber::Analytics::Gameplay::HMDDeviceDetector::DetectHMDPlatform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::HMDDeviceDetector*>(), { "DetectHMDPlatform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::HMDDeviceDetector::HMDDeviceDetector() {}
