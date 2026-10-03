#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeUtil_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeUtil.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeUtil::CellSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6bb43fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeUtil*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeUtil.BrickSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, int32_t)>(&::UnityEngine::Rendering::ProbeVolumeUtil::BrickSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb442c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeUtil*>(), { "BrickSize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeUtil.MaxBrickSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, int32_t)>(&::UnityEngine::Rendering::ProbeVolumeUtil::MaxBrickSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6bb4470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeUtil*>(), { "MaxBrickSize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::ProbeVolumeUtil::CellSize(int32_t subdivisionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeUtil*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, subdivisionLevel);
}
inline float_t UnityEngine::Rendering::ProbeVolumeUtil::BrickSize(float_t minBrickSize, int32_t subdivisionLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeUtil*>(), { "BrickSize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, minBrickSize, subdivisionLevel);
}
inline float_t UnityEngine::Rendering::ProbeVolumeUtil::MaxBrickSize(float_t minBrickSize, int32_t maxSubDivision) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeUtil*>(), { "MaxBrickSize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, minBrickSize, maxSubDivision);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeUtil::ProbeVolumeUtil() {}
