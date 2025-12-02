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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::Execute)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x66a1f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
