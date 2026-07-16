#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRendererData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthFormat_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StencilStateData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystemData_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::Create)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x686ea18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686eac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_opaqueLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686eacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                           { "set_opaqueLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_transparentLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_transparentLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686eadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_transparentLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_transparentLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_transparentLayerMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686eae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                           { "set_transparentLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_defaultStencilState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::StencilStateData* (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_defaultStencilState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686eaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_defaultStencilState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_defaultStencilState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::Rendering::Universal::StencilStateData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_defaultStencilState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686eafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                             { "set_defaultStencilState", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::StencilStateData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_shadowTransparentReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_shadowTransparentReceive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686eb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_shadowTransparentReceive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_shadowTransparentReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_shadowTransparentReceive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686eb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "set_shadowTransparentReceive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_renderingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_renderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686eb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_renderingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_renderingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::Rendering::Universal::RenderingMode)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_renderingMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686eb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                           { "set_renderingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_depthPrimingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DepthPrimingMode (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_depthPrimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686eb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_depthPrimingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_depthPrimingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::Rendering::Universal::DepthPrimingMode)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_depthPrimingMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686eb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                             { "set_depthPrimingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthPrimingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_copyDepthMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::CopyDepthMode (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_copyDepthMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686eb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_copyDepthMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_copyDepthMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::Rendering::Universal::CopyDepthMode)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_copyDepthMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686eb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                           { "set_copyDepthMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::CopyDepthMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_depthAttachmentFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DepthFormat (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_depthAttachmentFormat)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x686eb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_depthAttachmentFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_depthAttachmentFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::Rendering::Universal::DepthFormat)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_depthAttachmentFormat)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x686ec28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                             { "set_depthAttachmentFormat", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_depthTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DepthFormat (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_depthTextureFormat)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x686ed1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_depthTextureFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_depthTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::Rendering::Universal::DepthFormat)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_depthTextureFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686ee4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                           { "set_depthTextureFormat", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686ee5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_accurateGbufferNormals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686ee64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "set_accurateGbufferNormals", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.get_intermediateTextureMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::IntermediateTextureMode (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::get_intermediateTextureMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x686ee74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_intermediateTextureMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.set_intermediateTextureMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)(::UnityEngine::Rendering::Universal::IntermediateTextureMode)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::set_intermediateTextureMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x686ee7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                             { "set_intermediateTextureMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::IntermediateTextureMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(&::UnityEngine::Rendering::Universal::UniversalRendererData::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x686ee8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.ReloadAllNullProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::ReloadAllNullProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x686eac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "ReloadAllNullProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x686ee98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererData::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x686eea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererData::*)()>(&::UnityEngine::Rendering::Universal::UniversalRendererData::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x686eec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData>& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_xrSystemData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrSystemData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_xrSystemData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrSystemData;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_xrSystemData(::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrSystemData = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_postProcessData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_postProcessData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessData;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_postProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postProcessData = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_AssetVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetVersion;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_AssetVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetVersion;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_AssetVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetVersion = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_OpaqueLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_OpaqueLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_OpaqueLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpaqueLayerMask = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_TransparentLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparentLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_TransparentLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparentLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_TransparentLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransparentLayerMask = value;
}
constexpr ::UnityEngine::Rendering::Universal::StencilStateData*& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DefaultStencilState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr ::UnityEngine::Rendering::Universal::StencilStateData* const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DefaultStencilState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultStencilState = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_ShadowTransparentReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowTransparentReceive;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_ShadowTransparentReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowTransparentReceive;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_ShadowTransparentReceive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowTransparentReceive = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_RenderingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingMode;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_RenderingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DepthPrimingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingMode;
}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DepthPrimingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthPrimingMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_CopyDepthMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMode;
}
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_CopyDepthMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_CopyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyDepthMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::DepthFormat& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DepthAttachmentFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthAttachmentFormat;
}
constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DepthAttachmentFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthAttachmentFormat;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_DepthAttachmentFormat(::UnityEngine::Rendering::Universal::DepthFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthAttachmentFormat = value;
}
constexpr ::UnityEngine::Rendering::Universal::DepthFormat& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DepthTextureFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTextureFormat;
}
constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_DepthTextureFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTextureFormat;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_DepthTextureFormat(::UnityEngine::Rendering::Universal::DepthFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthTextureFormat = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_AccurateGbufferNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccurateGbufferNormals;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_AccurateGbufferNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccurateGbufferNormals;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_AccurateGbufferNormals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccurateGbufferNormals = value;
}
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_IntermediateTextureMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntermediateTextureMode;
}
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode const& UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_get_m_IntermediateTextureMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntermediateTextureMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererData::__cordl_internal_set_m_IntermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IntermediateTextureMode = value;
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::UniversalRendererData::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalRendererData::get_opaqueLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_opaqueLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_opaqueLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "set_opaqueLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalRendererData::get_transparentLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_transparentLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_transparentLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                         { "set_transparentLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::StencilStateData* UnityEngine::Rendering::Universal::UniversalRendererData::get_defaultStencilState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_defaultStencilState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::StencilStateData*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_defaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                           { "set_defaultStencilState", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::StencilStateData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRendererData::get_shadowTransparentReceive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_shadowTransparentReceive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_shadowTransparentReceive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "set_shadowTransparentReceive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::UniversalRendererData::get_renderingMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_renderingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                         { "set_renderingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DepthPrimingMode UnityEngine::Rendering::Universal::UniversalRendererData::get_depthPrimingMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_depthPrimingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DepthPrimingMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                         { "set_depthPrimingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthPrimingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::CopyDepthMode UnityEngine::Rendering::Universal::UniversalRendererData::get_copyDepthMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_copyDepthMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::CopyDepthMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_copyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                         { "set_copyDepthMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::CopyDepthMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DepthFormat UnityEngine::Rendering::Universal::UniversalRendererData::get_depthAttachmentFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_depthAttachmentFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DepthFormat>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_depthAttachmentFormat(::UnityEngine::Rendering::Universal::DepthFormat value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                         { "set_depthAttachmentFormat", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DepthFormat UnityEngine::Rendering::Universal::UniversalRendererData::get_depthTextureFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_depthTextureFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DepthFormat>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_depthTextureFormat(::UnityEngine::Rendering::Universal::DepthFormat value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                                                         { "set_depthTextureFormat", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalRendererData::get_accurateGbufferNormals() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_accurateGbufferNormals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_accurateGbufferNormals(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "set_accurateGbufferNormals", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::IntermediateTextureMode UnityEngine::Rendering::Universal::UniversalRendererData::get_intermediateTextureMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "get_intermediateTextureMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::IntermediateTextureMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::set_intermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(),
                                                           { "set_intermediateTextureMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::IntermediateTextureMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::ReloadAllNullProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "ReloadAllNullProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRendererData* UnityEngine::Rendering::Universal::UniversalRendererData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRendererData*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::Universal::UniversalRendererData::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::UniversalRendererData::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRendererData::UniversalRendererData() {}
