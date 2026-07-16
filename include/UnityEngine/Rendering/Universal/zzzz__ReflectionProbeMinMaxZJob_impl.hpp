#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ReflectionProbeMinMaxZJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Fixed2_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleReflectionProbe_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeMinMaxZJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::Execute)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x68bc698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "worldToViews", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "reflectionProbes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe>", modifiers: "", def_value: Some("{}") }, CppParam { name: "minMaxZs", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::ReflectionProbeMinMaxZJob(
    ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4> worldToViews, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> reflectionProbes,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs) noexcept {
  this->worldToViews = worldToViews;
  this->reflectionProbes = reflectionProbes;
  this->minMaxZs = minMaxZs;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::ReflectionProbeMinMaxZJob() {}
