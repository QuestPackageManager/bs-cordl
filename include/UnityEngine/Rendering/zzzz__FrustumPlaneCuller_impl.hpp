#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrustumPlaneCuller.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, int32_t, int32_t)>(&::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66595fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4::_ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> planes, int32_t offset, int32_t limit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, planes, offset, limit);
}
// Ctor Parameters [CppParam { name: "nx", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "ny", ty: "::Unity::Mathematics::float4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "nz", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "d", ty: "::Unity::Mathematics::float4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "nxAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "nyAbs", ty: "::Unity::Mathematics::float4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "nzAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4::FrustumPlaneCuller_PlanePacket4(::Unity::Mathematics::float4 nx, ::Unity::Mathematics::float4 ny, ::Unity::Mathematics::float4 nz,
                                                                                                     ::Unity::Mathematics::float4 d, ::Unity::Mathematics::float4 nxAbs,
                                                                                                     ::Unity::Mathematics::float4 nyAbs, ::Unity::Mathematics::float4 nzAbs) noexcept {
  this->nx = nx;
  this->ny = ny;
  this->nz = nz;
  this->d = d;
  this->nxAbs = nxAbs;
  this->nyAbs = nyAbs;
  this->nzAbs = nzAbs;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4::FrustumPlaneCuller_PlanePacket4() {}
// Ctor Parameters [CppParam { name: "packetCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo::FrustumPlaneCuller_SplitInfo(int32_t packetCount) noexcept {
  this->packetCount = packetCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo::FrustumPlaneCuller_SplitInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::FrustumPlaneCuller.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::FrustumPlaneCuller::*)(::Unity::Jobs::JobHandle)>(
    &::UnityEngine::Rendering::FrustumPlaneCuller::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66590c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FrustumPlaneCuller>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FrustumPlaneCuller.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::FrustumPlaneCuller (*)(
    ::ByRef<::UnityEngine::Rendering::BatchCullingContext>, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::ByRef<::UnityEngine::Rendering::ReceiverSphereCuller>,
    ::Unity::Collections::Allocator)>(&::UnityEngine::Rendering::FrustumPlaneCuller::Create)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x6659150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FrustumPlaneCuller>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ReceiverSphereCuller>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FrustumPlaneCuller.ComputeSplitVisibilityMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo>,
    ::ByRef<::UnityEngine::Rendering::AABB>)>(&::UnityEngine::Rendering::FrustumPlaneCuller::ComputeSplitVisibilityMask)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x66596c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FrustumPlaneCuller>::get(), "ComputeSplitVisibilityMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FrustumPlaneCuller::Dispose(::Unity::Jobs::JobHandle job) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FrustumPlaneCuller>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, job);
}
inline ::UnityEngine::Rendering::FrustumPlaneCuller UnityEngine::Rendering::FrustumPlaneCuller::Create(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc,
                                                                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> receiverPlanes,
                                                                                                       ::ByRef<::UnityEngine::Rendering::ReceiverSphereCuller> receiverSphereCuller,
                                                                                                       ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FrustumPlaneCuller>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ReceiverSphereCuller>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::FrustumPlaneCuller, false>(nullptr, ___internal_method, cc, receiverPlanes, receiverSphereCuller, allocator);
}
inline uint32_t UnityEngine::Rendering::FrustumPlaneCuller::ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4> planePackets,
                                                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo> splitInfos,
                                                                                       ::ByRef<::UnityEngine::Rendering::AABB> bounds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FrustumPlaneCuller>::get(), "ComputeSplitVisibilityMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::AABB>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, planePackets, splitInfos, bounds);
}
// Ctor Parameters [CppParam { name: "planePackets", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "splitInfos", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FrustumPlaneCuller::FrustumPlaneCuller(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4> planePackets,
                                                                           ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo> splitInfos) noexcept {
  this->planePackets = planePackets;
  this->splitInfos = splitInfos;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FrustumPlaneCuller::FrustumPlaneCuller() {}
