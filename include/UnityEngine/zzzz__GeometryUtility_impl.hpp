#pragma once
// IWYU pragma private; include "UnityEngine/GeometryUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GeometryUtility_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>)>(
    &::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x68b3518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "CalculateFrustumPlanes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>)>(
    &::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x68b35a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "CalculateFrustumPlanes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.TestPlanesAABB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>, ::UnityEngine::Bounds)>(
    &::UnityEngine::GeometryUtility::TestPlanesAABB)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x68b37a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "TestPlanesAABB", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_ExtractPlanes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::GeometryUtility::Internal_ExtractPlanes)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x68b367c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "Internal_ExtractPlanes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.TestPlanesAABB_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<::UnityEngine::Bounds>)>(
    &::UnityEngine::GeometryUtility::TestPlanesAABB_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68b387c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "TestPlanesAABB_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bounds>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_ExtractPlanes_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>, ::ByRef<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::GeometryUtility::Internal_ExtractPlanes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68b38c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "Internal_ExtractPlanes_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Camera* camera, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> planes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "CalculateFrustumPlanes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, planes);
}
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Matrix4x4 worldToProjectionMatrix, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> planes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "CalculateFrustumPlanes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, worldToProjectionMatrix, planes);
}
inline bool UnityEngine::GeometryUtility::TestPlanesAABB(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> planes, ::UnityEngine::Bounds bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "TestPlanesAABB", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, planes, bounds);
}
inline void UnityEngine::GeometryUtility::Internal_ExtractPlanes(::ByRef<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>> planes, ::UnityEngine::Matrix4x4 worldToProjectionMatrix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "Internal_ExtractPlanes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, planes, worldToProjectionMatrix);
}
inline bool UnityEngine::GeometryUtility::TestPlanesAABB_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> planes, ::ByRef<::UnityEngine::Bounds> bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "TestPlanesAABB_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bounds>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, planes, bounds);
}
inline void UnityEngine::GeometryUtility::Internal_ExtractPlanes_Injected(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> planes, ::ByRef<::UnityEngine::Matrix4x4> worldToProjectionMatrix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GeometryUtility*>::get(), "Internal_ExtractPlanes_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, planes, worldToProjectionMatrix);
}
// Ctor Parameters []
constexpr ::UnityEngine::GeometryUtility::GeometryUtility() {}
