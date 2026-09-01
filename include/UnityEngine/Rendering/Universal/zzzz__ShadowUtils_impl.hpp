#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\ShadowUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowDrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__LightShadows_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractDirectionalLightMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::CullingResults>, ::by_ref<::UnityEngine::Rendering::Universal::ShadowData>, int32_t, int32_t, int32_t, int32_t, int32_t, float_t,
                         ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>)>(
        &::UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x68bc0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                            { "ExtractDirectionalLightMatrix",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowData>>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractDirectionalLightMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::CullingResults>, ::by_ref<::UnityEngine::Rendering::Universal::ShadowData>, int32_t, int32_t,
                                                                int32_t, int32_t, int32_t, float_t, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x68bc1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                            { "ExtractDirectionalLightMatrix",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowData>>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractDirectionalLightMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Rendering::Universal::UniversalShadowData*, int32_t, int32_t,
                                                                int32_t, int32_t, int32_t, float_t, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x68bba24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                            { "ExtractDirectionalLightMatrix",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractSpotLightMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::CullingResults>, ::by_ref<::UnityEngine::Rendering::Universal::ShadowData>, int32_t,
                                                                ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>,
                                                                ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(&::UnityEngine::Rendering::Universal::ShadowUtils::ExtractSpotLightMatrix)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x68bc594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                { "ExtractSpotLightMatrix",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowData>>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractSpotLightMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Rendering::Universal::UniversalShadowData*, int32_t,
                                                                ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>,
                                                                ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(&::UnityEngine::Rendering::Universal::ShadowUtils::ExtractSpotLightMatrix)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x68bbd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                { "ExtractSpotLightMatrix",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractPointLightMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::CullingResults>, ::by_ref<::UnityEngine::Rendering::Universal::ShadowData>, int32_t, ::UnityEngine::CubemapFace, float_t,
                         ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(
        &::UnityEngine::Rendering::Universal::ShadowUtils::ExtractPointLightMatrix)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68bc63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                { "ExtractPointLightMatrix",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowData>>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ExtractPointLightMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Rendering::Universal::UniversalShadowData*, int32_t, ::UnityEngine::CubemapFace, float_t,
                         ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Rendering::ShadowSplitData>)>(
        &::UnityEngine::Rendering::Universal::ShadowUtils::ExtractPointLightMatrix)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x68bbbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                { "ExtractPointLightMatrix",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.RenderShadowSlice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>,
                                                                ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>, ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>,
                                                                ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x68bc704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                            { "RenderShadowSlice",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>>(),
                                ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.RenderShadowSlice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>,
                                                                ::by_ref<::UnityEngine::Rendering::RendererList>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x68bc85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                            { "RenderShadowSlice",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.RenderShadowSlice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>,
                                                                ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>, ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x68bc9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                            { "RenderShadowSlice",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetMaxTileResolutionInAtlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::ShadowUtils::GetMaxTileResolutionInAtlas)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x68bca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "GetMaxTileResolutionInAtlas", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ApplySliceTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::ApplySliceTransform)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x68bc464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                         { "ApplySliceTransform", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetShadowBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::by_ref<::UnityEngine::Rendering::VisibleLight>, int32_t, ::by_ref<::UnityEngine::Rendering::Universal::ShadowData>,
                                                                                  ::UnityEngine::Matrix4x4, float_t)>(&::UnityEngine::Rendering::Universal::ShadowUtils::GetShadowBias)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x68bcaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                         { "GetShadowBias",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowData>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetShadowBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::by_ref<::UnityEngine::Rendering::VisibleLight>, int32_t, ::UnityEngine::Rendering::Universal::UniversalShadowData*,
                                                                                  ::UnityEngine::Matrix4x4, float_t)>(&::UnityEngine::Rendering::Universal::ShadowUtils::GetShadowBias)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x68bcefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                         { "GetShadowBias",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetShadowBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::by_ref<::UnityEngine::Rendering::VisibleLight>, int32_t,
                                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, bool, ::UnityEngine::Matrix4x4, float_t)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::GetShadowBias)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x68bcb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                                                           { "GetShadowBias",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetScaleAndBiasForLinearDistanceFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, ::by_ref<float_t>, ::by_ref<float_t>)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::GetScaleAndBiasForLinearDistanceFade)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68bcfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
            { "GetScaleAndBiasForLinearDistanceFade", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SetupShadowCasterConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::VisibleLight>, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::SetupShadowCasterConstantBuffer)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x68bd014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "SetupShadowCasterConstantBuffer",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SetupShadowCasterConstantBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::by_ref<::UnityEngine::Rendering::VisibleLight>, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::SetupShadowCasterConstantBuffer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x68bd0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "SetupShadowCasterConstantBuffer",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SetShadowBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::SetShadowBias)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x68bd1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "SetShadowBias", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SetLightDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::SetLightDirection)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68bd24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                { "SetLightDirection", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SetLightPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::SetLightPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68bd2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                { "SetLightPosition", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SetCameraPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::SetCameraPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68bd38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                { "SetCameraPosition", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SetWorldToCameraAndCameraToWorldMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::SetWorldToCameraAndCameraToWorldMatrices)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x68bd42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                            { "SetWorldToCameraAndCameraToWorldMatrices", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetTemporaryShadowTextureDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::GetTemporaryShadowTextureDescriptor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x68bd570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "GetTemporaryShadowTextureDescriptor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetTemporaryShadowTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::GetTemporaryShadowTexture)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x68bd680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "GetTemporaryShadowTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ShadowRTNeedsReAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::RTHandle*, int32_t, int32_t, int32_t, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::ShadowRTNeedsReAlloc)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x68bd76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "ShadowRTNeedsReAlloc",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.AllocShadowRT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(int32_t, int32_t, int32_t, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::AllocShadowRT)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x68bd9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                                                           { "AllocShadowRT",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.ShadowRTReAllocateIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, int32_t, int32_t, int32_t, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::ShadowRTReAllocateIfNeeded)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x68bda98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "ShadowRTReAllocateIfNeeded",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetShadowTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::GetShadowTransform)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x68bc2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "GetShadowTransform", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SoftShadowQualityToShaderProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Light*, bool)>(&::UnityEngine::Rendering::Universal::ShadowUtils::SoftShadowQualityToShaderProperty)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x68bdb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "SoftShadowQualityToShaderProperty", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SupportsPerLightSoftShadowQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::ShadowUtils::SupportsPerLightSoftShadowQuality)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x68bdccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(), { "SupportsPerLightSoftShadowQuality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SetPerLightSoftShadowKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, bool)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::SetPerLightSoftShadowKeyword)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68bdd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "SetPerLightSoftShadowKeyword", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.SetSoftShadowQualityShaderKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::SetSoftShadowQualityShaderKeywords)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x68bde18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                         { "SetSoftShadowQualityShaderKeywords",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.IsValidShadowCastingLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalLightData*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::IsValidShadowCastingLight)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x68be0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                { "IsValidShadowCastingLight", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.IsValidShadowCastingLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalLightData*, int32_t, ::UnityEngine::LightType, ::UnityEngine::LightShadows, float_t)>(
    &::UnityEngine::Rendering::Universal::ShadowUtils::IsValidShadowCastingLight)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x68be1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "IsValidShadowCastingLight",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::LightType>(), ::i2c::type_of<::UnityEngine::LightShadows>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.GetPunctualLightShadowSlicesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::LightType>)>(&::UnityEngine::Rendering::Universal::ShadowUtils::GetPunctualLightShadowSlicesCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x68bbbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                                                           { "GetPunctualLightShadowSlicesCount", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LightType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.FastApproximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::Rendering::Universal::ShadowUtils::FastApproximately)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68be210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(), { "FastApproximately", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.FastApproximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::UnityEngine::Rendering::Universal::ShadowUtils::FastApproximately)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x68be228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                             { "FastApproximately", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtils.MinimalPunctualLightShadowResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::UnityEngine::Rendering::Universal::ShadowUtils::MinimalPunctualLightShadowResolution)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68be328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(), { "MinimalPunctualLightShadowResolution", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ShadowUtils::setStaticF_m_ForceShadowPointSampling(bool value) {
  ::cordl_internals::setStaticField<bool, "m_ForceShadowPointSampling", ::UnityEngine::Rendering::Universal::ShadowUtils*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::getStaticF_m_ForceShadowPointSampling() {
  return ::cordl_internals::getStaticField<bool, "m_ForceShadowPointSampling", ::UnityEngine::Rendering::Universal::ShadowUtils*>();
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                          ::by_ref<::UnityEngine::Rendering::Universal::ShadowData> shadowData, int32_t shadowLightIndex,
                                                                                          int32_t cascadeIndex, int32_t shadowmapWidth, int32_t shadowmapHeight, int32_t shadowResolution,
                                                                                          float_t shadowNearPlane, ::by_ref<::UnityEngine::Vector4> cascadeSplitDistance,
                                                                                          ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData,
                                                                                          ::by_ref<::UnityEngine::Matrix4x4> viewMatrix, ::by_ref<::UnityEngine::Matrix4x4> projMatrix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                          { "ExtractDirectionalLightMatrix",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowData>>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, cascadeIndex, shadowmapWidth, shadowmapHeight, shadowResolution,
                                                   shadowNearPlane, cascadeSplitDistance, shadowSliceData, viewMatrix, projMatrix);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                          ::by_ref<::UnityEngine::Rendering::Universal::ShadowData> shadowData, int32_t shadowLightIndex,
                                                                                          int32_t cascadeIndex, int32_t shadowmapWidth, int32_t shadowmapHeight, int32_t shadowResolution,
                                                                                          float_t shadowNearPlane, ::by_ref<::UnityEngine::Vector4> cascadeSplitDistance,
                                                                                          ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                          { "ExtractDirectionalLightMatrix",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowData>>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, cascadeIndex, shadowmapWidth, shadowmapHeight, shadowResolution,
                                                   shadowNearPlane, cascadeSplitDistance, shadowSliceData);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                          ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, int32_t shadowLightIndex,
                                                                                          int32_t cascadeIndex, int32_t shadowmapWidth, int32_t shadowmapHeight, int32_t shadowResolution,
                                                                                          float_t shadowNearPlane, ::by_ref<::UnityEngine::Vector4> cascadeSplitDistance,
                                                                                          ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                          { "ExtractDirectionalLightMatrix",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, cascadeIndex, shadowmapWidth, shadowmapHeight, shadowResolution,
                                                   shadowNearPlane, cascadeSplitDistance, shadowSliceData);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractSpotLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                   ::by_ref<::UnityEngine::Rendering::Universal::ShadowData> shadowData, int32_t shadowLightIndex,
                                                                                   ::by_ref<::UnityEngine::Matrix4x4> shadowMatrix, ::by_ref<::UnityEngine::Matrix4x4> viewMatrix,
                                                                                   ::by_ref<::UnityEngine::Matrix4x4> projMatrix, ::by_ref<::UnityEngine::Rendering::ShadowSplitData> splitData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                              { "ExtractSpotLightMatrix",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowData>>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, shadowMatrix, viewMatrix, projMatrix, splitData);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractSpotLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                   ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, int32_t shadowLightIndex,
                                                                                   ::by_ref<::UnityEngine::Matrix4x4> shadowMatrix, ::by_ref<::UnityEngine::Matrix4x4> viewMatrix,
                                                                                   ::by_ref<::UnityEngine::Matrix4x4> projMatrix, ::by_ref<::UnityEngine::Rendering::ShadowSplitData> splitData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                              { "ExtractSpotLightMatrix",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, shadowMatrix, viewMatrix, projMatrix, splitData);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractPointLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                    ::by_ref<::UnityEngine::Rendering::Universal::ShadowData> shadowData, int32_t shadowLightIndex,
                                                                                    ::UnityEngine::CubemapFace cubemapFace, float_t fovBias, ::by_ref<::UnityEngine::Matrix4x4> shadowMatrix,
                                                                                    ::by_ref<::UnityEngine::Matrix4x4> viewMatrix, ::by_ref<::UnityEngine::Matrix4x4> projMatrix,
                                                                                    ::by_ref<::UnityEngine::Rendering::ShadowSplitData> splitData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                              { "ExtractPointLightMatrix",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowData>>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, cubemapFace, fovBias, shadowMatrix, viewMatrix, projMatrix, splitData);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ExtractPointLightMatrix(::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, int32_t shadowLightIndex,
                                                                                    ::UnityEngine::CubemapFace cubemapFace, float_t fovBias, ::by_ref<::UnityEngine::Matrix4x4> shadowMatrix,
                                                                                    ::by_ref<::UnityEngine::Matrix4x4> viewMatrix, ::by_ref<::UnityEngine::Matrix4x4> projMatrix,
                                                                                    ::by_ref<::UnityEngine::Rendering::ShadowSplitData> splitData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                              { "ExtractPointLightMatrix",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowSplitData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cullResults, shadowData, shadowLightIndex, cubemapFace, fovBias, shadowMatrix, viewMatrix, projMatrix, splitData);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> context,
                                                                              ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData,
                                                                              ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings> settings, ::UnityEngine::Matrix4x4 proj,
                                                                              ::UnityEngine::Matrix4x4 view) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                          { "RenderShadowSlice",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>>(),
                              ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, context, shadowSliceData, settings, proj, view);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                              ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData,
                                                                              ::by_ref<::UnityEngine::Rendering::RendererList> shadowRendererList, ::UnityEngine::Matrix4x4 proj,
                                                                              ::UnityEngine::Matrix4x4 view) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                          { "RenderShadowSlice",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, shadowSliceData, shadowRendererList, proj, view);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> context,
                                                                              ::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData,
                                                                              ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings> settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                          { "RenderShadowSlice",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, context, shadowSliceData, settings);
}
inline int32_t UnityEngine::Rendering::Universal::ShadowUtils::GetMaxTileResolutionInAtlas(int32_t atlasWidth, int32_t atlasHeight, int32_t tileCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "GetMaxTileResolutionInAtlas", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, atlasWidth, atlasHeight, tileCount);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::ApplySliceTransform(::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData, int32_t atlasWidth,
                                                                                int32_t atlasHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                          { "ApplySliceTransform", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowSliceData>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shadowSliceData, atlasWidth, atlasHeight);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::ShadowUtils::GetShadowBias(::by_ref<::UnityEngine::Rendering::VisibleLight> shadowLight, int32_t shadowLightIndex,
                                                                                            ::by_ref<::UnityEngine::Rendering::Universal::ShadowData> shadowData,
                                                                                            ::UnityEngine::Matrix4x4 lightProjectionMatrix, float_t shadowResolution) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                       { "GetShadowBias",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ShadowData>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, shadowLight, shadowLightIndex, shadowData, lightProjectionMatrix, shadowResolution);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::ShadowUtils::GetShadowBias(::by_ref<::UnityEngine::Rendering::VisibleLight> shadowLight, int32_t shadowLightIndex,
                                                                                            ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                            ::UnityEngine::Matrix4x4 lightProjectionMatrix, float_t shadowResolution) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                       { "GetShadowBias",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, shadowLight, shadowLightIndex, shadowData, lightProjectionMatrix, shadowResolution);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::ShadowUtils::GetShadowBias(::by_ref<::UnityEngine::Rendering::VisibleLight> shadowLight, int32_t shadowLightIndex,
                                                                                            ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* bias, bool supportsSoftShadows,
                                                                                            ::UnityEngine::Matrix4x4 lightProjectionMatrix, float_t shadowResolution) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                                                         { "GetShadowBias",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, shadowLight, shadowLightIndex, bias, supportsSoftShadows, lightProjectionMatrix, shadowResolution);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::GetScaleAndBiasForLinearDistanceFade(float_t fadeDistance, float_t border, ::by_ref<float_t> scale, ::by_ref<float_t> bias) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
          { "GetScaleAndBiasForLinearDistanceFade", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fadeDistance, border, scale, bias);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::SetupShadowCasterConstantBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::VisibleLight> shadowLight,
                                                                                            ::UnityEngine::Vector4 shadowBias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "SetupShadowCasterConstantBuffer",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>(),
                                                               ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, shadowLight, shadowBias);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::SetupShadowCasterConstantBuffer(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                            ::by_ref<::UnityEngine::Rendering::VisibleLight> shadowLight, ::UnityEngine::Vector4 shadowBias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "SetupShadowCasterConstantBuffer",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>(),
                                                               ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, shadowLight, shadowBias);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::SetShadowBias(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Vector4 shadowBias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "SetShadowBias", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, shadowBias);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::SetLightDirection(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Vector3 lightDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                              { "SetLightDirection", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, lightDirection);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::SetLightPosition(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Vector3 lightPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                              { "SetLightPosition", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, lightPosition);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::SetCameraPosition(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Vector3 worldSpaceCameraPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                              { "SetCameraPosition", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, worldSpaceCameraPos);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::SetWorldToCameraAndCameraToWorldMatrices(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Matrix4x4 viewMatrix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                          { "SetWorldToCameraAndCameraToWorldMatrices", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, viewMatrix);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::ShadowUtils::GetTemporaryShadowTextureDescriptor(int32_t width, int32_t height, int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "GetTemporaryShadowTextureDescriptor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(nullptr, ___internal_method, width, height, bits);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::Universal::ShadowUtils::GetTemporaryShadowTexture(int32_t width, int32_t height, int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "GetTemporaryShadowTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, width, height, bits);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ShadowRTNeedsReAlloc(::UnityEngine::Rendering::RTHandle* handle, int32_t width, int32_t height, int32_t bits, int32_t anisoLevel,
                                                                                 float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "ShadowRTNeedsReAlloc",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, width, height, bits, anisoLevel, mipMapBias, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ShadowUtils::AllocShadowRT(int32_t width, int32_t height, int32_t bits, int32_t anisoLevel, float_t mipMapBias,
                                                                                                         ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                          { "AllocShadowRT",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, width, height, bits, anisoLevel, mipMapBias, name);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::ShadowRTReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, int32_t width, int32_t height, int32_t bits,
                                                                                       int32_t anisoLevel, float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "ShadowRTReAllocateIfNeeded",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, width, height, bits, anisoLevel, mipMapBias, name);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::ShadowUtils::GetShadowTransform(::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "GetShadowTransform", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, proj, view);
}
inline float_t UnityEngine::Rendering::Universal::ShadowUtils::SoftShadowQualityToShaderProperty(::UnityEngine::Light* light, bool softShadowsEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "SoftShadowQualityToShaderProperty", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, light, softShadowsEnabled);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::SupportsPerLightSoftShadowQuality() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(), { "SupportsPerLightSoftShadowQuality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::SetPerLightSoftShadowKeyword(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool hasSoftShadows) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "SetPerLightSoftShadowKeyword", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, hasSoftShadows);
}
inline void UnityEngine::Rendering::Universal::ShadowUtils::SetSoftShadowQualityShaderKeywords(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                               ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                              { "SetSoftShadowQualityShaderKeywords",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, shadowData);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::IsValidShadowCastingLight(::UnityEngine::Rendering::Universal::UniversalLightData* lightData, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                              { "IsValidShadowCastingLight", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lightData, i);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::IsValidShadowCastingLight(::UnityEngine::Rendering::Universal::UniversalLightData* lightData, int32_t i, ::UnityEngine::LightType lightType,
                                                                                      ::UnityEngine::LightShadows lightShadows, float_t shadowStrength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "IsValidShadowCastingLight",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::LightType>(), ::i2c::type_of<::UnityEngine::LightShadows>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lightData, i, lightType, lightShadows, shadowStrength);
}
inline int32_t UnityEngine::Rendering::Universal::ShadowUtils::GetPunctualLightShadowSlicesCount(::by_ref<::UnityEngine::LightType> lightType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                                                         { "GetPunctualLightShadowSlicesCount", {}, { ::i2c::type_of<::by_ref<::UnityEngine::LightType>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lightType);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::FastApproximately(float_t a, float_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(), { "FastApproximately", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtils::FastApproximately(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(),
                                                           { "FastApproximately", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t UnityEngine::Rendering::Universal::ShadowUtils::MinimalPunctualLightShadowResolution(bool softShadow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowUtils*>(), { "MinimalPunctualLightShadowResolution", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, softShadow);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowUtils::ShadowUtils() {}
