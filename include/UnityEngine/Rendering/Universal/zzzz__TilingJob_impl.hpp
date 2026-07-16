#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TilingJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "Unity/Mathematics/zzzz__int4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Fixed2_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InclusiveRange_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleReflectionProbe_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TilingJob_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InclusiveRange_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TilingJob_def.hpp"
// Ctor Parameters [CppParam { name: "light", ty: "::UnityEngine::Rendering::VisibleLight", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightPositionVS", ty:
// "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightDirectionVS", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "cosHalfAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "coneHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0::TilingJob___c__DisplayClass19_0(::UnityEngine::Rendering::VisibleLight light,
                                                                                                                ::Unity::Mathematics::float3 lightPositionVS,
                                                                                                                ::Unity::Mathematics::float3 lightDirectionVS, float_t cosHalfAngle,
                                                                                                                float_t coneHeight) noexcept {
  this->light = light;
  this->lightPositionVS = lightPositionVS;
  this->lightDirectionVS = lightDirectionVS;
  this->cosHalfAngle = cosHalfAngle;
  this->coneHeight = coneHeight;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0::TilingJob___c__DisplayClass19_0() {}
// Ctor Parameters [CppParam { name: "light", ty: "::UnityEngine::Rendering::VisibleLight", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightPosVS", ty: "::Unity::Mathematics::float3",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "lightDirVS", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "cosHalfAngle", ty: "float_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0::TilingJob___c__DisplayClass20_0(::UnityEngine::Rendering::VisibleLight light, ::Unity::Mathematics::float3 lightPosVS,
                                                                                                                ::Unity::Mathematics::float3 lightDirVS, float_t cosHalfAngle) noexcept {
  this->light = light;
  this->lightPosVS = lightPosVS;
  this->lightDirVS = lightDirVS;
  this->cosHalfAngle = cosHalfAngle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0::TilingJob___c__DisplayClass20_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TilingJob::*)(int32_t)>(&::UnityEngine::Rendering::Universal::TilingJob::Execute)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x68bca64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.TileLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TilingJob::*)(int32_t)>(&::UnityEngine::Rendering::Universal::TilingJob::TileLight)> {
  constexpr static std::size_t size = 0x1b90;
  constexpr static std::size_t addrs = 0x68bd7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "TileLight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.TileLightOrthographic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TilingJob::*)(int32_t)>(&::UnityEngine::Rendering::Universal::TilingJob::TileLightOrthographic)> {
  constexpr static std::size_t size = 0xc68;
  constexpr static std::size_t addrs = 0x68bcb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "TileLightOrthographic", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.TileReflectionProbe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TilingJob::*)(int32_t)>(&::UnityEngine::Rendering::Universal::TilingJob::TileReflectionProbe)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x68bf374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "TileReflectionProbe", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.ViewToTileSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::UnityEngine::Rendering::Universal::TilingJob::*)(::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::Universal::TilingJob::ViewToTileSpace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x68c0e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "ViewToTileSpace", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.ViewToTileSpaceOrthographic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::UnityEngine::Rendering::Universal::TilingJob::*)(::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::Universal::TilingJob::ViewToTileSpaceOrthographic)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x68c1d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                                                           { "ViewToTileSpaceOrthographic", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.ExpandY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TilingJob::*)(::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::Universal::TilingJob::ExpandY)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x68bfb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "ExpandY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.ExpandOrthographic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TilingJob::*)(::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::Universal::TilingJob::ExpandOrthographic)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x68c1a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "ExpandOrthographic", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.ExpandRangeOrthographic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TilingJob::*)(::by_ref<::UnityEngine::Rendering::Universal::InclusiveRange>, float_t)>(
    &::UnityEngine::Rendering::Universal::TilingJob::ExpandRangeOrthographic)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x68c1c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                { "ExpandRangeOrthographic", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::InclusiveRange>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.square
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::Universal::TilingJob::square)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68bfc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "square", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.GetSphereHorizon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float2, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::float2>,
                                                                ::by_ref<::Unity::Mathematics::float2>)>(&::UnityEngine::Rendering::Universal::TilingJob::GetSphereHorizon)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x68bfc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                             { "GetSphereHorizon",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Mathematics::float2>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.GetSphereYPlaneHorizon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>,
                                                                ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::Rendering::Universal::TilingJob::GetSphereYPlaneHorizon)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x68c1608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                         { "GetSphereYPlaneHorizon",
                                           {},
                                           { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.GetCircleClipPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>,
                                                                ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::Rendering::Universal::TilingJob::GetCircleClipPoints)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x68c01e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                         { "GetCircleClipPoints",
                                           {},
                                           { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.IntersectEllipseLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<float_t, float_t> (*)(float_t, float_t, ::Unity::Mathematics::float3)>(
    &::UnityEngine::Rendering::Universal::TilingJob::IntersectEllipseLine)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x68c1d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                { "IntersectEllipseLine", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.GetProjectedCircleHorizon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float2, float_t, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2,
                                                                ::by_ref<::Unity::Mathematics::float2>, ::by_ref<::Unity::Mathematics::float2>)>(
    &::UnityEngine::Rendering::Universal::TilingJob::GetProjectedCircleHorizon)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x68bffd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                             { "GetProjectedCircleHorizon",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>(),
                                                                 ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float2>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Mathematics::float2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.IntersectCircleYPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3,
                                                                float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(
    &::UnityEngine::Rendering::Universal::TilingJob::IntersectCircleYPlane)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x68c0eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                             { "IntersectCircleYPlane",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(),
                                                                 ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.GetConeSideTangentPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, float_t, float_t, ::Unity::Mathematics::float3,
                                                                ::Unity::Mathematics::float3, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(
    &::UnityEngine::Rendering::Universal::TilingJob::GetConeSideTangentPoints)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x68c0984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                         { "GetConeSideTangentPoints",
                                           {},
                                           { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(),
                                             ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.EvaluateNearConic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(float_t, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::Unity::Mathematics::float3,
                                                                                        ::Unity::Mathematics::float3, float_t)>(&::UnityEngine::Rendering::Universal::TilingJob::EvaluateNearConic)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x68c0684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                         { "EvaluateNearConic",
                                           {},
                                           { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.FindNearConicTangentTheta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, ::Unity::Mathematics::float2,
                                                                                        ::Unity::Mathematics::float2)>(&::UnityEngine::Rendering::Universal::TilingJob::FindNearConicTangentTheta)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x68c03fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                             { "FindNearConicTangentTheta",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob.FindNearConicYTheta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(float_t, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::Unity::Mathematics::float3,
                                                                                        ::Unity::Mathematics::float3, float_t)>(&::UnityEngine::Rendering::Universal::TilingJob::FindNearConicYTheta)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x68c1190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                         { "FindNearConicYTheta",
                                           {},
                                           { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob._TileLight_g__SpherePointIsValid_19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3, ::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0>)>(
    &::UnityEngine::Rendering::Universal::TilingJob::_TileLight_g__SpherePointIsValid_19_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68bfee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                         { "<TileLight>g__SpherePointIsValid|19_0",
                                           {},
                                           { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob._TileLight_g__ConicPointIsValid_19_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3, ::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0>)>(
    &::UnityEngine::Rendering::Universal::TilingJob::_TileLight_g__ConicPointIsValid_19_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x68c0864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                         { "<TileLight>g__ConicPointIsValid|19_1",
                                           {},
                                           { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TilingJob._TileLightOrthographic_g__SpherePointIsValid_20_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3, ::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0>)>(
    &::UnityEngine::Rendering::Universal::TilingJob::_TileLightOrthographic_g__SpherePointIsValid_20_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68c1b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                         { "<TileLightOrthographic>g__SpherePointIsValid|20_0",
                                           {},
                                           { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::TilingJob::setStaticF_k_CubePoints(::ArrayW<::Unity::Mathematics::float3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::float3>, "k_CubePoints", ::UnityEngine::Rendering::Universal::TilingJob>(
      std::forward<::ArrayW<::Unity::Mathematics::float3>>(value));
}
inline ::ArrayW<::Unity::Mathematics::float3> UnityEngine::Rendering::Universal::TilingJob::getStaticF_k_CubePoints() {
  return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::float3>, "k_CubePoints", ::UnityEngine::Rendering::Universal::TilingJob>();
}
inline void UnityEngine::Rendering::Universal::TilingJob::setStaticF_k_CubeLineIndices(::ArrayW<::Unity::Mathematics::int4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::int4>, "k_CubeLineIndices", ::UnityEngine::Rendering::Universal::TilingJob>(
      std::forward<::ArrayW<::Unity::Mathematics::int4>>(value));
}
inline ::ArrayW<::Unity::Mathematics::int4> UnityEngine::Rendering::Universal::TilingJob::getStaticF_k_CubeLineIndices() {
  return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::int4>, "k_CubeLineIndices", ::UnityEngine::Rendering::Universal::TilingJob>();
}
inline void UnityEngine::Rendering::Universal::TilingJob::Execute(int32_t jobIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, jobIndex);
}
inline void UnityEngine::Rendering::Universal::TilingJob::TileLight(int32_t lightIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "TileLight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lightIndex);
}
inline void UnityEngine::Rendering::Universal::TilingJob::TileLightOrthographic(int32_t lightIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "TileLightOrthographic", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lightIndex);
}
inline void UnityEngine::Rendering::Universal::TilingJob::TileReflectionProbe(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "TileReflectionProbe", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline ::Unity::Mathematics::float2 UnityEngine::Rendering::Universal::TilingJob::ViewToTileSpace(::Unity::Mathematics::float3 positionVS) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "ViewToTileSpace", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method, positionVS);
}
inline ::Unity::Mathematics::float2 UnityEngine::Rendering::Universal::TilingJob::ViewToTileSpaceOrthographic(::Unity::Mathematics::float3 positionVS) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "ViewToTileSpaceOrthographic", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method, positionVS);
}
inline void UnityEngine::Rendering::Universal::TilingJob::ExpandY(::Unity::Mathematics::float3 positionVS) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "ExpandY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, positionVS);
}
inline void UnityEngine::Rendering::Universal::TilingJob::ExpandOrthographic(::Unity::Mathematics::float3 positionVS) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "ExpandOrthographic", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, positionVS);
}
inline void UnityEngine::Rendering::Universal::TilingJob::ExpandRangeOrthographic(::by_ref<::UnityEngine::Rendering::Universal::InclusiveRange> range, float_t xVS) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                              { "ExpandRangeOrthographic", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::InclusiveRange>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, range, xVS);
}
inline float_t UnityEngine::Rendering::Universal::TilingJob::square(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(), { "square", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline void UnityEngine::Rendering::Universal::TilingJob::GetSphereHorizon(::Unity::Mathematics::float2 center, float_t radius, float_t near, float_t clipRadius,
                                                                           ::by_ref<::Unity::Mathematics::float2> p0, ::by_ref<::Unity::Mathematics::float2> p1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                           { "GetSphereHorizon",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Mathematics::float2>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, near, clipRadius, p0, p1);
}
inline void UnityEngine::Rendering::Universal::TilingJob::GetSphereYPlaneHorizon(::Unity::Mathematics::float3 center, float_t sphereRadius, float_t near, float_t clipRadius, float_t y,
                                                                                 ::by_ref<::Unity::Mathematics::float3> left, ::by_ref<::Unity::Mathematics::float3> right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                              { "GetSphereYPlaneHorizon",
                                                {},
                                                { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, sphereRadius, near, clipRadius, y, left, right);
}
inline bool UnityEngine::Rendering::Universal::TilingJob::GetCircleClipPoints(::Unity::Mathematics::float3 circleCenter, ::Unity::Mathematics::float3 circleNormal, float_t circleRadius, float_t near,
                                                                              ::by_ref<::Unity::Mathematics::float3> p0, ::by_ref<::Unity::Mathematics::float3> p1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                              { "GetCircleClipPoints",
                                                {},
                                                { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, circleCenter, circleNormal, circleRadius, near, p0, p1);
}
inline ::System::ValueTuple_2<float_t, float_t> UnityEngine::Rendering::Universal::TilingJob::IntersectEllipseLine(float_t a, float_t b, ::Unity::Mathematics::float3 line) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                           { "IntersectEllipseLine", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<float_t, float_t>>(nullptr, ___internal_method, a, b, line);
}
inline void UnityEngine::Rendering::Universal::TilingJob::GetProjectedCircleHorizon(::Unity::Mathematics::float2 center, float_t radius, ::Unity::Mathematics::float2 U, ::Unity::Mathematics::float2 V,
                                                                                    ::by_ref<::Unity::Mathematics::float2> uv1, ::by_ref<::Unity::Mathematics::float2> uv2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                          { "GetProjectedCircleHorizon",
                            {},
                            { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(),
                              ::i2c::type_of<::by_ref<::Unity::Mathematics::float2>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, U, V, uv1, uv2);
}
inline bool UnityEngine::Rendering::Universal::TilingJob::IntersectCircleYPlane(float_t y, ::Unity::Mathematics::float3 circleCenter, ::Unity::Mathematics::float3 circleNormal,
                                                                                ::Unity::Mathematics::float3 circleU, ::Unity::Mathematics::float3 circleV, float_t circleRadius,
                                                                                ::by_ref<::Unity::Mathematics::float3> p1, ::by_ref<::Unity::Mathematics::float3> p2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                           { "IntersectCircleYPlane",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(),
                                                               ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, y, circleCenter, circleNormal, circleU, circleV, circleRadius, p1, p2);
}
inline void UnityEngine::Rendering::Universal::TilingJob::GetConeSideTangentPoints(::Unity::Mathematics::float3 vertex, ::Unity::Mathematics::float3 axis, float_t cosHalfAngle, float_t circleRadius,
                                                                                   float_t coneHeight, float_t range, ::Unity::Mathematics::float3 circleU, ::Unity::Mathematics::float3 circleV,
                                                                                   ::by_ref<::Unity::Mathematics::float3> l1, ::by_ref<::Unity::Mathematics::float3> l2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                              { "GetConeSideTangentPoints",
                                                {},
                                                { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertex, axis, cosHalfAngle, circleRadius, coneHeight, range, circleU, circleV, l1, l2);
}
inline ::Unity::Mathematics::float3 UnityEngine::Rendering::Universal::TilingJob::EvaluateNearConic(float_t near, ::Unity::Mathematics::float3 o, ::Unity::Mathematics::float3 d, float_t r,
                                                                                                    ::Unity::Mathematics::float3 u, ::Unity::Mathematics::float3 v, float_t theta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                              { "EvaluateNearConic",
                                                {},
                                                { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, near, o, d, r, u, v, theta);
}
inline ::Unity::Mathematics::float2 UnityEngine::Rendering::Universal::TilingJob::FindNearConicTangentTheta(::Unity::Mathematics::float2 o, ::Unity::Mathematics::float2 d, float_t r,
                                                                                                            ::Unity::Mathematics::float2 u, ::Unity::Mathematics::float2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                                           { "FindNearConicTangentTheta",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, o, d, r, u, v);
}
inline ::Unity::Mathematics::float2 UnityEngine::Rendering::Universal::TilingJob::FindNearConicYTheta(float_t near, ::Unity::Mathematics::float3 o, ::Unity::Mathematics::float3 d, float_t r,
                                                                                                      ::Unity::Mathematics::float3 u, ::Unity::Mathematics::float3 v, float_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                              { "FindNearConicYTheta",
                                                {},
                                                { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, near, o, d, r, u, v, y);
}
inline bool
UnityEngine::Rendering::Universal::TilingJob::_TileLight_g__SpherePointIsValid_19_0(::Unity::Mathematics::float3 p,
                                                                                    ::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                       { "<TileLight>g__SpherePointIsValid|19_0",
                                         {},
                                         { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p, _cordl_fixed_empty_name_whitespace);
}
inline bool
UnityEngine::Rendering::Universal::TilingJob::_TileLight_g__ConicPointIsValid_19_1(::Unity::Mathematics::float3 p,
                                                                                   ::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                       { "<TileLight>g__ConicPointIsValid|19_1",
                                         {},
                                         { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p, _cordl_fixed_empty_name_whitespace);
}
inline bool UnityEngine::Rendering::Universal::TilingJob::_TileLightOrthographic_g__SpherePointIsValid_20_0(
    ::Unity::Mathematics::float3 p, ::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TilingJob>(),
                                       { "<TileLightOrthographic>g__SpherePointIsValid|20_0",
                                         {},
                                         { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p, _cordl_fixed_empty_name_whitespace);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::Universal::TilingJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::TilingJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "lights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "reflectionProbes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tileRanges", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange>", modifiers: "", def_value: Some("{}") }, CppParam { name: "itemsPerTile", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rangesPerItem", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldToViews", ty:
// "::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tileScale", ty: "::Unity::Mathematics::float2", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "tileScaleInv", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewPlaneBottoms", ty:
// "::UnityEngine::Rendering::Universal::Fixed2_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewPlaneTops", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<float_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "viewToViewportScaleBiases", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "tileCount", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: Some("{}") }, CppParam { name: "near", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "isOrthographic", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TileYRange", ty: "::UnityEngine::Rendering::Universal::InclusiveRange", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ViewIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_CenterOffset", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::TilingJob::TilingJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> reflectionProbes,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange> tileRanges, int32_t itemsPerTile, int32_t rangesPerItem,
    ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4> worldToViews, ::Unity::Mathematics::float2 tileScale, ::Unity::Mathematics::float2 tileScaleInv,
    ::UnityEngine::Rendering::Universal::Fixed2_1<float_t> viewPlaneBottoms, ::UnityEngine::Rendering::Universal::Fixed2_1<float_t> viewPlaneTops,
    ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4> viewToViewportScaleBiases, ::Unity::Mathematics::int2 tileCount, float_t near, bool isOrthographic,
    ::UnityEngine::Rendering::Universal::InclusiveRange m_TileYRange, int32_t m_Offset, int32_t m_ViewIndex, ::Unity::Mathematics::float2 m_CenterOffset) noexcept {
  this->lights = lights;
  this->reflectionProbes = reflectionProbes;
  this->tileRanges = tileRanges;
  this->itemsPerTile = itemsPerTile;
  this->rangesPerItem = rangesPerItem;
  this->worldToViews = worldToViews;
  this->tileScale = tileScale;
  this->tileScaleInv = tileScaleInv;
  this->viewPlaneBottoms = viewPlaneBottoms;
  this->viewPlaneTops = viewPlaneTops;
  this->viewToViewportScaleBiases = viewToViewportScaleBiases;
  this->tileCount = tileCount;
  this->near = near;
  this->isOrthographic = isOrthographic;
  this->m_TileYRange = m_TileYRange;
  this->m_Offset = m_Offset;
  this->m_ViewIndex = m_ViewIndex;
  this->m_CenterOffset = m_CenterOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TilingJob::TilingJob() {}
