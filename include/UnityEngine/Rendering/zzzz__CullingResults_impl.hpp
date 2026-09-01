#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CullingResults.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingAllocationInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleReflectionProbe_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.GetLightIndexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Rendering::CullingResults::GetLightIndexCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b20094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "GetLightIndexCount", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.GetReflectionProbeIndexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Rendering::CullingResults::GetReflectionProbeIndexCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b200d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "GetReflectionProbeIndexCount", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.FillLightAndReflectionProbeIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b2010c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                             { "FillLightAndReflectionProbeIndices", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.GetLightIndexMapSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Rendering::CullingResults::GetLightIndexMapSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b201a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "GetLightIndexMapSize", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.FillLightIndexMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::Rendering::CullingResults::FillLightIndexMap)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b201dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                             { "FillLightIndexMap", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.SetLightIndexMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::Rendering::CullingResults::SetLightIndexMap)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b20230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                             { "SetLightIndexMap", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.GetShadowCasterBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::Rendering::CullingResults::GetShadowCasterBounds)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b20284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                         { "GetShadowCasterBounds", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.ComputeSpotShadowMatricesAndCullingPrimitives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(
        &::UnityEngine::Rendering::CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b202d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                             { "ComputeSpotShadowMatricesAndCullingPrimitives",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.ComputePointShadowMatricesAndCullingPrimitives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::UnityEngine::CubemapFace, float_t, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>,
                                                                ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(
    &::UnityEngine::Rendering::CullingResults::ComputePointShadowMatricesAndCullingPrimitives)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b20344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                             { "ComputePointShadowMatricesAndCullingPrimitives",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.ComputeDirectionalShadowMatricesAndCullingPrimitives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, int32_t, int32_t, ::UnityEngine::Vector3, int32_t, float_t, ::by_ref<::UnityEngine::Matrix4x4>,
                                                                ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(
    &::UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b203c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                         { "ComputeDirectionalShadowMatricesAndCullingPrimitives",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.get_visibleLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> (::UnityEngine::Rendering::CullingResults::*)()>(
    &::UnityEngine::Rendering::CullingResults::get_visibleLights)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b2052c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "get_visibleLights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.get_visibleReflectionProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> (::UnityEngine::Rendering::CullingResults::*)()>(
    &::UnityEngine::Rendering::CullingResults::get_visibleReflectionProbes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b2059c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "get_visibleReflectionProbes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.get_lightAndReflectionProbeIndexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CullingResults::*)()>(&::UnityEngine::Rendering::CullingResults::get_lightAndReflectionProbeIndexCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b2060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "get_lightAndReflectionProbeIndexCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.FillLightAndReflectionProbeIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CullingResults::*)(::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b20684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                                                           { "FillLightAndReflectionProbeIndices", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.GetLightIndexMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::UnityEngine::Rendering::CullingResults::*)(::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::CullingResults::GetLightIndexMap)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b206d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "GetLightIndexMap", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.SetLightIndexMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CullingResults::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::CullingResults::SetLightIndexMap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b207cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "SetLightIndexMap", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.GetShadowCasterBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CullingResults::*)(int32_t, ::by_ref<::UnityEngine::Bounds>)>(
    &::UnityEngine::Rendering::CullingResults::GetShadowCasterBounds)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b2084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                             { "GetShadowCasterBounds", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.ComputeSpotShadowMatricesAndCullingPrimitives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CullingResults::*)(int32_t, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>,
                                                                                                          ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(
    &::UnityEngine::Rendering::CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b208a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                             { "ComputeSpotShadowMatricesAndCullingPrimitives",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.ComputePointShadowMatricesAndCullingPrimitives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CullingResults::*)(int32_t, ::UnityEngine::CubemapFace, float_t, ::by_ref<::UnityEngine::Matrix4x4>,
                                                                                                          ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(
    &::UnityEngine::Rendering::CullingResults::ComputePointShadowMatricesAndCullingPrimitives)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b2090c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                         { "ComputePointShadowMatricesAndCullingPrimitives",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.ComputeDirectionalShadowMatricesAndCullingPrimitives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CullingResults::*)(
    int32_t, int32_t, int32_t, ::UnityEngine::Vector3, int32_t, float_t, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(
    &::UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b20990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                             { "ComputeDirectionalShadowMatricesAndCullingPrimitives",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CullingResults::*)(::UnityEngine::Rendering::CullingResults)>(
    &::UnityEngine::Rendering::CullingResults::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b20a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CullingResults::*)(::System::Object*)>(&::UnityEngine::Rendering::CullingResults::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b20ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { ::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CullingResults::*)()>(&::UnityEngine::Rendering::CullingResults::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b20b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { ::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::CullingResults, ::UnityEngine::Rendering::CullingResults)>(
    &::UnityEngine::Rendering::CullingResults::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b20b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>(), ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.FillLightAndReflectionProbeIndices_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2015c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                             { "FillLightAndReflectionProbeIndices_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingResults.ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Vector3>, int32_t, float_t, ::by_ref<::UnityEngine::Matrix4x4>,
                                                                ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(
    &::UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b20480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                            { "ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CullingResults::GetLightIndexCount(::System::IntPtr cullingResultsPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "GetLightIndexCount", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cullingResultsPtr);
}
inline int32_t UnityEngine::Rendering::CullingResults::GetReflectionProbeIndexCount(::System::IntPtr cullingResultsPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "GetReflectionProbeIndexCount", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cullingResultsPtr);
}
inline void UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices(::System::IntPtr cullingResultsPtr, ::UnityEngine::ComputeBuffer* computeBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                           { "FillLightAndReflectionProbeIndices", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cullingResultsPtr, computeBuffer);
}
inline int32_t UnityEngine::Rendering::CullingResults::GetLightIndexMapSize(::System::IntPtr cullingResultsPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "GetLightIndexMapSize", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cullingResultsPtr);
}
inline void UnityEngine::Rendering::CullingResults::FillLightIndexMap(::System::IntPtr cullingResultsPtr, ::System::IntPtr indexMapPtr, int32_t indexMapSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                           { "FillLightIndexMap", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cullingResultsPtr, indexMapPtr, indexMapSize);
}
inline void UnityEngine::Rendering::CullingResults::SetLightIndexMap(::System::IntPtr cullingResultsPtr, ::System::IntPtr indexMapPtr, int32_t indexMapSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                           { "SetLightIndexMap", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cullingResultsPtr, indexMapPtr, indexMapSize);
}
inline bool UnityEngine::Rendering::CullingResults::GetShadowCasterBounds(::System::IntPtr cullingResultsPtr, int32_t lightIndex, ::by_ref<::UnityEngine::Bounds> bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                              { "GetShadowCasterBounds", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullingResultsPtr, lightIndex, bounds);
}
inline bool UnityEngine::Rendering::CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, int32_t activeLightIndex,
                                                                                                  ::by_ref<::UnityEngine::Matrix4x4> viewMatrix, ::by_ref<::UnityEngine::Matrix4x4> projMatrix,
                                                                                                  ::by_ref<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                           { "ComputeSpotShadowMatricesAndCullingPrimitives",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullingResultsPtr, activeLightIndex, viewMatrix, projMatrix, shadowSplitData);
}
inline bool UnityEngine::Rendering::CullingResults::ComputePointShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, int32_t activeLightIndex, ::UnityEngine::CubemapFace cubemapFace,
                                                                                                   float_t fovBias, ::by_ref<::UnityEngine::Matrix4x4> viewMatrix,
                                                                                                   ::by_ref<::UnityEngine::Matrix4x4> projMatrix,
                                                                                                   ::by_ref<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                           { "ComputePointShadowMatricesAndCullingPrimitives",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullingResultsPtr, activeLightIndex, cubemapFace, fovBias, viewMatrix, projMatrix, shadowSplitData);
}
inline bool UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex,
                                                                                                         int32_t splitCount, ::UnityEngine::Vector3 splitRatio, int32_t shadowResolution,
                                                                                                         float_t shadowNearPlaneOffset, ::by_ref<::UnityEngine::Matrix4x4> viewMatrix,
                                                                                                         ::by_ref<::UnityEngine::Matrix4x4> projMatrix,
                                                                                                         ::by_ref<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                              { "ComputeDirectionalShadowMatricesAndCullingPrimitives",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullingResultsPtr, activeLightIndex, splitIndex, splitCount, splitRatio, shadowResolution, shadowNearPlaneOffset,
                                                   viewMatrix, projMatrix, shadowSplitData);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> UnityEngine::Rendering::CullingResults::get_visibleLights() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "get_visibleLights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> UnityEngine::Rendering::CullingResults::get_visibleReflectionProbes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "get_visibleReflectionProbes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe>>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Rendering::CullingResults::GetNativeArray(void* dataPointer, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                                                              { "GetNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, dataPointer, length);
}
inline int32_t UnityEngine::Rendering::CullingResults::get_lightAndReflectionProbeIndexCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "get_lightAndReflectionProbeIndexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices(::UnityEngine::ComputeBuffer* computeBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                                                         { "FillLightAndReflectionProbeIndices", {}, { ::i2c::type_of<::UnityEngine::ComputeBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, computeBuffer);
}
inline ::Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::CullingResults::GetLightIndexMap(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "GetLightIndexMap", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method, allocator);
}
inline void UnityEngine::Rendering::CullingResults::SetLightIndexMap(::Unity::Collections::NativeArray_1<int32_t> lightIndexMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "SetLightIndexMap", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lightIndexMap);
}
inline bool UnityEngine::Rendering::CullingResults::GetShadowCasterBounds(int32_t lightIndex, ::by_ref<::UnityEngine::Bounds> outBounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                           { "GetShadowCasterBounds", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, lightIndex, outBounds);
}
inline bool UnityEngine::Rendering::CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, ::by_ref<::UnityEngine::Matrix4x4> viewMatrix,
                                                                                                  ::by_ref<::UnityEngine::Matrix4x4> projMatrix,
                                                                                                  ::by_ref<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                           { "ComputeSpotShadowMatricesAndCullingPrimitives",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, activeLightIndex, viewMatrix, projMatrix, shadowSplitData);
}
inline bool UnityEngine::Rendering::CullingResults::ComputePointShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, ::UnityEngine::CubemapFace cubemapFace, float_t fovBias,
                                                                                                   ::by_ref<::UnityEngine::Matrix4x4> viewMatrix, ::by_ref<::UnityEngine::Matrix4x4> projMatrix,
                                                                                                   ::by_ref<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                       { "ComputePointShadowMatricesAndCullingPrimitives",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, activeLightIndex, cubemapFace, fovBias, viewMatrix, projMatrix, shadowSplitData);
}
inline bool UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount,
                                                                                                         ::UnityEngine::Vector3 splitRatio, int32_t shadowResolution, float_t shadowNearPlaneOffset,
                                                                                                         ::by_ref<::UnityEngine::Matrix4x4> viewMatrix, ::by_ref<::UnityEngine::Matrix4x4> projMatrix,
                                                                                                         ::by_ref<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                           { "ComputeDirectionalShadowMatricesAndCullingPrimitives",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, activeLightIndex, splitIndex, splitCount, splitRatio, shadowResolution, shadowNearPlaneOffset, viewMatrix, projMatrix,
                                                   shadowSplitData);
}
inline bool UnityEngine::Rendering::CullingResults::Equals(::UnityEngine::Rendering::CullingResults other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::CullingResults::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::CullingResults::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CullingResults>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::CullingResults::op_Equality(::UnityEngine::Rendering::CullingResults left, ::UnityEngine::Rendering::CullingResults right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>(), ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline void UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices_Injected(::System::IntPtr cullingResultsPtr, ::System::IntPtr computeBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                                                           { "FillLightAndReflectionProbeIndices_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cullingResultsPtr, computeBuffer);
}
inline bool UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(
    ::System::IntPtr cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, ::by_ref<::UnityEngine::Vector3> splitRatio, int32_t shadowResolution,
    float_t shadowNearPlaneOffset, ::by_ref<::UnityEngine::Matrix4x4> viewMatrix, ::by_ref<::UnityEngine::Matrix4x4> projMatrix, ::by_ref<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CullingResults>(),
                          { "ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullingResultsPtr, activeLightIndex, splitIndex, splitCount, splitRatio, shadowResolution, shadowNearPlaneOffset,
                                                   viewMatrix, projMatrix, shadowSplitData);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>"
constexpr UnityEngine::Rendering::CullingResults::operator ::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>* UnityEngine::Rendering::CullingResults::i___System__IEquatable_1___UnityEngine__Rendering__CullingResults_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocationInfo", ty: "::UnityEngine::Rendering::CullingAllocationInfo*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CullingResults::CullingResults(::System::IntPtr ptr, ::UnityEngine::Rendering::CullingAllocationInfo* m_AllocationInfo) noexcept {
  this->ptr = ptr;
  this->m_AllocationInfo = m_AllocationInfo;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CullingResults::CullingResults() {}
