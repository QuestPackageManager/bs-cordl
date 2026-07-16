#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureDesc.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__FastMemoryDesc_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureSizeMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FilterMode_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_impl.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_impl.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__DepthBits_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScaleFunc_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.get_depthBufferBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DepthBits (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::get_depthBufferBits)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67e505c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { "get_depthBufferBits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.set_depthBufferBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::Rendering::DepthBits)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::set_depthBufferBits)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x67e50d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                                                           { "set_depthBufferBits", {}, { ::i2c::type_of<::UnityEngine::Rendering::DepthBits>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.get_colorFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::get_colorFormat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67e5194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { "get_colorFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.set_colorFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::set_colorFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67e5224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                                                           { "set_colorFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.InitDefaultValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(bool, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::InitDefaultValues)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x67e522c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                                                           { "InitDefaultValues", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(int32_t, int32_t, bool, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67e5304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::Vector2, bool, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67e5330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::Rendering::ScaleFunc*, bool, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67e5370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::Rendering::RenderGraphModule::TextureDesc)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67e53b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x67e53c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)(::UnityEngine::RenderTexture*)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67e1728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::GetHashCode)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x67e5500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureDesc.CalculateFinalDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::RenderGraphModule::TextureDesc::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureDesc::CalculateFinalDimensions)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x67e1f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { "CalculateFinalDimensions", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::DepthBits UnityEngine::Rendering::RenderGraphModule::TextureDesc::get_depthBufferBits() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { "get_depthBufferBits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DepthBits>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::set_depthBufferBits(::UnityEngine::Rendering::DepthBits value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                                                         { "set_depthBufferBits", {}, { ::i2c::type_of<::UnityEngine::Rendering::DepthBits>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::RenderGraphModule::TextureDesc::get_colorFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { "get_colorFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::set_colorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                                                         { "set_colorFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::InitDefaultValues(bool dynamicResolution, bool xrReady) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { "InitDefaultValues", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dynamicResolution, xrReady);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(int32_t width, int32_t height, bool dynamicResolution, bool xrReady) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, width, height, dynamicResolution, xrReady);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(::UnityEngine::Vector2 scale, bool dynamicResolution, bool xrReady) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, scale, dynamicResolution, xrReady);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(::UnityEngine::Rendering::ScaleFunc* func, bool dynamicResolution, bool xrReady) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, func, dynamicResolution, xrReady);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, input);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(::UnityEngine::RenderTextureDescriptor input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, input);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureDesc::_ctor(::UnityEngine::RenderTexture* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, input);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::TextureDesc::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RenderGraphModule::TextureDesc::CalculateFinalDimensions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), { "CalculateFinalDimensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sizeMode", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "slices", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "func", ty: "::UnityEngine::Rendering::ScaleFunc*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}") }, CppParam { name: "filterMode", ty:
// "::UnityEngine::FilterMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "wrapMode", ty: "::UnityEngine::TextureWrapMode", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "dimension", ty: "::UnityEngine::Rendering::TextureDimension", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableRandomWrite", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "useMipMap", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "autoGenerateMips", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "isShadowMap", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "anisoLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mipMapBias", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "msaaSamples", ty: "::UnityEngine::Rendering::MSAASamples", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "bindTextureMS", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useDynamicScale", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "useDynamicScaleExplicit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "memoryless", ty: "::UnityEngine::RenderTextureMemoryless", modifiers: "", def_value: Some("{}") },
// CppParam { name: "vrUsage", ty: "::UnityEngine::VRTextureUsage", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "fastMemoryDesc", ty: "::UnityEngine::Rendering::RenderGraphModule::FastMemoryDesc", modifiers: "", def_value: Some("{}") }, CppParam { name: "fallBackToBlackTexture", ty: "bool", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "disableFallBackToImportedTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "clearBuffer", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "clearColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "discardBuffer", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc::TextureDesc(::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode sizeMode, int32_t width, int32_t height, int32_t slices,
                                                                                ::UnityEngine::Vector2 scale, ::UnityEngine::Rendering::ScaleFunc* func,
                                                                                ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode,
                                                                                ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite,
                                                                                bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                                                ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                                                bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage,
                                                                                ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::FastMemoryDesc fastMemoryDesc, bool fallBackToBlackTexture,
                                                                                bool disableFallBackToImportedTexture, bool clearBuffer, ::UnityEngine::Color clearColor, bool discardBuffer) noexcept {
  this->sizeMode = sizeMode;
  this->width = width;
  this->height = height;
  this->slices = slices;
  this->scale = scale;
  this->func = func;
  this->format = format;
  this->filterMode = filterMode;
  this->wrapMode = wrapMode;
  this->dimension = dimension;
  this->enableRandomWrite = enableRandomWrite;
  this->useMipMap = useMipMap;
  this->autoGenerateMips = autoGenerateMips;
  this->isShadowMap = isShadowMap;
  this->anisoLevel = anisoLevel;
  this->mipMapBias = mipMapBias;
  this->msaaSamples = msaaSamples;
  this->bindTextureMS = bindTextureMS;
  this->useDynamicScale = useDynamicScale;
  this->useDynamicScaleExplicit = useDynamicScaleExplicit;
  this->memoryless = memoryless;
  this->vrUsage = vrUsage;
  this->name = name;
  this->fastMemoryDesc = fastMemoryDesc;
  this->fallBackToBlackTexture = fallBackToBlackTexture;
  this->disableFallBackToImportedTexture = disableFallBackToImportedTexture;
  this->clearBuffer = clearBuffer;
  this->clearColor = clearColor;
  this->discardBuffer = discardBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc::TextureDesc() {}
