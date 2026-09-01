#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProbeVolumeConstantRuntimeResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeConstantRuntimeResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources.GetRuntimeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>)>(
    &::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GetRuntimeResources)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6796314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(),
                                                             { "GetRuntimeResources", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::Initialize)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6796378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources.GetSkySamplingDirections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)()>(&::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GetSkySamplingDirections)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6796700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(), { "GetSkySamplingDirections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::Cleanup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x679675c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources.GenerateSkyDirections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)()>(&::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GenerateSkyDirections)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x67964e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(), { "GenerateSkyDirections", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::setStaticF_m_SkySamplingDirectionsBuffer(::UnityEngine::ComputeBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ComputeBuffer*, "m_SkySamplingDirectionsBuffer", ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(
      std::forward<::UnityEngine::ComputeBuffer*>(value));
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::getStaticF_m_SkySamplingDirectionsBuffer() {
  return ::cordl_internals::getStaticField<::UnityEngine::ComputeBuffer*, "m_SkySamplingDirectionsBuffer", ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>();
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::setStaticF_m_AntiLeakDataBuffer(::UnityEngine::ComputeBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ComputeBuffer*, "m_AntiLeakDataBuffer", ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(
      std::forward<::UnityEngine::ComputeBuffer*>(value));
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::getStaticF_m_AntiLeakDataBuffer() {
  return ::cordl_internals::getStaticField<::UnityEngine::ComputeBuffer*, "m_AntiLeakDataBuffer", ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>();
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::setStaticF_k_SkyDirections(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "k_SkyDirections", ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(
      std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::getStaticF_k_SkyDirections() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "k_SkyDirections", ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>();
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::setStaticF_k_AntiLeakData(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "k_AntiLeakData", ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::getStaticF_k_AntiLeakData() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "k_AntiLeakData", ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>();
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GetRuntimeResources(::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(),
                                                           { "GetRuntimeResources", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rr);
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GetSkySamplingDirections() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(), { "GetSkySamplingDirections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::GenerateSkyDirections() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources*>(), { "GenerateSkyDirections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeConstantRuntimeResources::ProbeVolumeConstantRuntimeResources() {}
