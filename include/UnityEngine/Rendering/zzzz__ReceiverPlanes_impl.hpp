#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReceiverPlanes.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverPlanes_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.IsSignBitSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&::UnityEngine::Rendering::ReceiverPlanes::IsSignBitSet)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65f0a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(), "IsSignBitSet", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.LightFacingFrustumPlaneSubArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Plane> (::UnityEngine::Rendering::ReceiverPlanes::*)()>(
    &::UnityEngine::Rendering::ReceiverPlanes::LightFacingFrustumPlaneSubArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x65f0a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(), "LightFacingFrustumPlaneSubArray",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.SilhouettePlaneSubArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Plane> (::UnityEngine::Rendering::ReceiverPlanes::*)()>(
    &::UnityEngine::Rendering::ReceiverPlanes::SilhouettePlaneSubArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x65f0af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(),
                                                                               "SilhouettePlaneSubArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.CreateEmptyForTesting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ReceiverPlanes (*)(::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::ReceiverPlanes::CreateEmptyForTesting)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x65f0bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(), "CreateEmptyForTesting", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ReceiverPlanes::*)(::Unity::Jobs::JobHandle)>(
    &::UnityEngine::Rendering::ReceiverPlanes::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65f0c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverPlanes.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ReceiverPlanes (*)(
    ::ByRef<::UnityEngine::Rendering::BatchCullingContext>, ::Unity::Collections::Allocator)>(&::UnityEngine::Rendering::ReceiverPlanes::Create)> {
  constexpr static std::size_t size = 0x8a8;
  constexpr static std::size_t addrs = 0x65f0c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::ReceiverPlanes::IsSignBitSet(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(), "IsSignBitSet",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, x);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> UnityEngine::Rendering::ReceiverPlanes::LightFacingFrustumPlaneSubArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(),
                                                                             "LightFacingFrustumPlaneSubArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> UnityEngine::Rendering::ReceiverPlanes::SilhouettePlaneSubArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(),
                                                                             "SilhouettePlaneSubArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ReceiverPlanes UnityEngine::Rendering::ReceiverPlanes::CreateEmptyForTesting(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(), "CreateEmptyForTesting", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReceiverPlanes, false>(nullptr, ___internal_method, allocator);
}
inline void UnityEngine::Rendering::ReceiverPlanes::Dispose(::Unity::Jobs::JobHandle job) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, job);
}
inline ::UnityEngine::Rendering::ReceiverPlanes UnityEngine::Rendering::ReceiverPlanes::Create(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ReceiverPlanes>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchCullingContext>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReceiverPlanes, false>(nullptr, ___internal_method, cc, allocator);
}
// Ctor Parameters [CppParam { name: "planes", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightFacingPlaneCount", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReceiverPlanes::ReceiverPlanes(::Unity::Collections::NativeList_1<::UnityEngine::Plane> planes, int32_t lightFacingPlaneCount) noexcept {
  this->planes = planes;
  this->lightFacingPlaneCount = lightFacingPlaneCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReceiverPlanes::ReceiverPlanes() {}
