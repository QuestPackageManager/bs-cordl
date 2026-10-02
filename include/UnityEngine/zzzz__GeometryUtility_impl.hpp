#pragma once
// IWYU pragma private; include "UnityEngine/GeometryUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GeometryUtility_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::ArrayW<::UnityEngine::Plane>)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6ed2bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                                             { "CalculateFrustumPlanes", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::System::Span_1<::UnityEngine::Plane>)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6ed2cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                                { "CalculateFrustumPlanes", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Plane>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::ArrayW<::UnityEngine::Plane>)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ed2ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                                             { "CalculateFrustumPlanes", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_TestPlanesAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<::UnityEngine::Plane>, ::by_ref<::UnityEngine::Bounds>)>(
    &::UnityEngine::GeometryUtility::Internal_TestPlanesAABB)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6ed2f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                         { "Internal_TestPlanesAABB", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.TestPlanesAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Plane>, ::UnityEngine::Bounds)>(&::UnityEngine::GeometryUtility::TestPlanesAABB)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6ed3034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                                             { "TestPlanesAABB", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_ExtractPlanes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Span_1<::UnityEngine::Plane>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::GeometryUtility::Internal_ExtractPlanes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6ed2e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                                { "Internal_ExtractPlanes", {}, { ::i2c::type_of<::System::Span_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_TestPlanesAABB_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bounds>)>(
    &::UnityEngine::GeometryUtility::Internal_TestPlanesAABB_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ed2ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                         { "Internal_TestPlanesAABB_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_ExtractPlanes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::GeometryUtility::Internal_ExtractPlanes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ed30e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
            { "Internal_ExtractPlanes_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Camera* camera, ::ArrayW<::UnityEngine::Plane> planes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                                           { "CalculateFrustumPlanes", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, planes);
}
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4> worldToProjectionMatrix, ::System::Span_1<::UnityEngine::Plane> planes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                              { "CalculateFrustumPlanes", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Plane>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldToProjectionMatrix, planes);
}
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Matrix4x4 worldToProjectionMatrix, ::ArrayW<::UnityEngine::Plane> planes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                                           { "CalculateFrustumPlanes", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldToProjectionMatrix, planes);
}
inline bool UnityEngine::GeometryUtility::Internal_TestPlanesAABB(::System::ReadOnlySpan_1<::UnityEngine::Plane> planes, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds> bounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                       { "Internal_TestPlanesAABB", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, planes, bounds);
}
inline bool UnityEngine::GeometryUtility::TestPlanesAABB(::ArrayW<::UnityEngine::Plane> planes, ::UnityEngine::Bounds bounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                                           { "TestPlanesAABB", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, planes, bounds);
}
inline void UnityEngine::GeometryUtility::Internal_ExtractPlanes(::System::Span_1<::UnityEngine::Plane> planes, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4> worldToProjectionMatrix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                                              { "Internal_ExtractPlanes", {}, { ::i2c::type_of<::System::Span_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, planes, worldToProjectionMatrix);
}
inline bool UnityEngine::GeometryUtility::Internal_TestPlanesAABB_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> planes, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds> bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                          { "Internal_TestPlanesAABB_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, planes, bounds);
}
inline void UnityEngine::GeometryUtility::Internal_ExtractPlanes_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> planes,
                                                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4> worldToProjectionMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                       { "Internal_ExtractPlanes_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, planes, worldToProjectionMatrix);
}
// Ctor Parameters []
constexpr ::UnityEngine::GeometryUtility::GeometryUtility() {}
