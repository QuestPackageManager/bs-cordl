#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReceiverSphereCuller.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3x3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
// Ctor Parameters [CppParam { name: "receiverSphereLightSpace", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "cascadeBlendCullingFactor", ty:
// "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo::ReceiverSphereCuller_SplitInfo(::Unity::Mathematics::float4 receiverSphereLightSpace, float_t cascadeBlendCullingFactor) noexcept {
  this->receiverSphereLightSpace = receiverSphereLightSpace;
  this->cascadeBlendCullingFactor = cascadeBlendCullingFactor;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo::ReceiverSphereCuller_SplitInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.CreateEmptyForTesting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ReceiverSphereCuller (*)(::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::ReceiverSphereCuller::CreateEmptyForTesting)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6659840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(), "CreateEmptyForTesting", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ReceiverSphereCuller::*)(::Unity::Jobs::JobHandle)>(
    &::UnityEngine::Rendering::ReceiverSphereCuller::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66598e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.UseReceiverPlanes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ReceiverSphereCuller::*)()>(
    &::UnityEngine::Rendering::ReceiverSphereCuller::UseReceiverPlanes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6659590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(),
                                                                               "UseReceiverPlanes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ReceiverSphereCuller (*)(
    ::ByRef<::UnityEngine::Rendering::BatchCullingContext>, ::Unity::Collections::Allocator)>(&::UnityEngine::Rendering::ReceiverSphereCuller::Create)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6659948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.DistanceUntilCylinderFullyCrossesPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Plane)>(
    &::UnityEngine::Rendering::ReceiverSphereCuller::DistanceUntilCylinderFullyCrossesPlane)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6659b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(),
                                                 "DistanceUntilCylinderFullyCrossesPlane", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.ComputeSplitVisibilityMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo>,
                             ::Unity::Mathematics::float3x3, ::ByRef<::UnityEngine::Rendering::AABB>)>(&::UnityEngine::Rendering::ReceiverSphereCuller::ComputeSplitVisibilityMask)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6659ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(), "ComputeSplitVisibilityMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::ReceiverSphereCuller UnityEngine::Rendering::ReceiverSphereCuller::CreateEmptyForTesting(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(), "CreateEmptyForTesting", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReceiverSphereCuller, false>(nullptr, ___internal_method, allocator);
}
inline void UnityEngine::Rendering::ReceiverSphereCuller::Dispose(::Unity::Jobs::JobHandle job) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, job);
}
inline bool UnityEngine::Rendering::ReceiverSphereCuller::UseReceiverPlanes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(),
                                                                             "UseReceiverPlanes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ReceiverSphereCuller UnityEngine::Rendering::ReceiverSphereCuller::Create(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc,
                                                                                                           ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReceiverSphereCuller, false>(nullptr, ___internal_method, cc, allocator);
}
inline float_t UnityEngine::Rendering::ReceiverSphereCuller::DistanceUntilCylinderFullyCrossesPlane(::Unity::Mathematics::float3 cylinderCenter, ::Unity::Mathematics::float3 cylinderDirection,
                                                                                                    float_t cylinderRadius, ::UnityEngine::Plane plane) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(), "DistanceUntilCylinderFullyCrossesPlane", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, cylinderCenter, cylinderDirection, cylinderRadius, plane);
}
inline uint32_t UnityEngine::Rendering::ReceiverSphereCuller::ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> lightFacingFrustumPlanes,
                                                                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo> splitInfos,
                                                                                         ::Unity::Mathematics::float3x3 worldToLightSpaceRotation, ::ByRef<::UnityEngine::Rendering::AABB> bounds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverSphereCuller>::get(), "ComputeSplitVisibilityMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, lightFacingFrustumPlanes, splitInfos, worldToLightSpaceRotation, bounds);
}
// Ctor Parameters [CppParam { name: "splitInfos", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "worldToLightSpaceRotation", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReceiverSphereCuller::ReceiverSphereCuller(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo> splitInfos,
                                                                               ::Unity::Mathematics::float3x3 worldToLightSpaceRotation) noexcept {
  this->splitInfos = splitInfos;
  this->worldToLightSpaceRotation = worldToLightSpaceRotation;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReceiverSphereCuller::ReceiverSphereCuller() {}
