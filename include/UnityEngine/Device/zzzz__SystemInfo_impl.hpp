#pragma once
// IWYU pragma private; include "UnityEngine\Device\SystemInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Device/zzzz__SystemInfo_def.hpp"
#include "UnityEngine/zzzz__DeviceType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Device::SystemInfo.get_deviceModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Device::SystemInfo::get_deviceModel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b06bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Device::SystemInfo*>(), { "get_deviceModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Device::SystemInfo.get_deviceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DeviceType (*)()>(&::UnityEngine::Device::SystemInfo::get_deviceType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b06bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Device::SystemInfo*>(), { "get_deviceType", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Device::SystemInfo::get_deviceModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Device::SystemInfo*>(), { "get_deviceModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityEngine::DeviceType UnityEngine::Device::SystemInfo::get_deviceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Device::SystemInfo*>(), { "get_deviceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::DeviceType>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Device::SystemInfo::SystemInfo() {}
