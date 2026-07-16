#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandles.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandles_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__DepthBits_def.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleAllocInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScaleFunc_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.get_maxWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::RTHandles::get_maxWidth)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67a6198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "get_maxWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.get_maxHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::RTHandles::get_maxHeight)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67a6200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "get_maxHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.get_rtHandleProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandleProperties (*)()>(&::UnityEngine::Rendering::RTHandles::get_rtHandleProperties)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67a6268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "get_rtHandleProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.CalculateDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2)>(&::UnityEngine::Rendering::RTHandles::CalculateDimensions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67a62e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "CalculateDimensions", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.CalculateDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Rendering::ScaleFunc*)>(&::UnityEngine::Rendering::RTHandles::CalculateDimensions)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67a6528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "CalculateDimensions", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::Rendering::RTHandle* (*)(int32_t, int32_t, int32_t, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode,
                                            ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples,
                                            bool, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x67a65d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc",
                                                                                                                        {},
                                                                                                                        { ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<float_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                          ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::RTHandle* (*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode,
                                                        ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples, bool, bool, bool,
                                                        ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x67a68a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc",
                                                                                                                        {},
                                                                                                                        { ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<float_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                          ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::RTHandle* (*)(int32_t, int32_t, ::UnityEngine::TextureWrapMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::TextureWrapMode, int32_t,
                                                        ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode,
                                                        ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples, bool, bool, bool,
                                                        ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x67a6a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc",
                                                                                                                        {},
                                                                                                                        { ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<float_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                          ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(int32_t, int32_t, ::UnityEngine::Rendering::RTHandleAllocInfo)>(
    &::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x67a6d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                                { "Alloc", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode,
                                                                                               ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x67a6f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                            { "Alloc",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.GetFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(
    ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::Rendering::RTHandles::GetFormat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67a70d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                         { "GetFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Vector2, int32_t, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode,
                                            ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples,
                                            bool, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x67a70dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc",
                                                                                                                        {},
                                                                                                                        { ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<float_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                          ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Vector2, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode,
                                            ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples, bool, bool, bool,
                                            ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x67a73a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                            { "Alloc",
                              {},
                              { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Vector2, ::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode,
                                                                                               ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x67a75f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                            { "Alloc",
                              {},
                              { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Vector2, ::UnityEngine::Rendering::RTHandleAllocInfo)>(
    &::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x67a772c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                                             { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::ScaleFunc*, int32_t, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                        ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t,
                                                        ::UnityEngine::Rendering::MSAASamples, bool, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(
        &::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x67a79e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc",
                                                                                                                        {},
                                                                                                                        { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<int32_t>(),
                                                                                                                          ::i2c::type_of<float_t>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<bool>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                          ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                          ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::ScaleFunc*, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::UnityEngine::FilterMode,
                                            ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples,
                                            bool, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x67a7c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                            { "Alloc",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::ScaleFunc*, ::by_ref<::UnityEngine::RenderTextureDescriptor>,
                                                                                               ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x67a7ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                            { "Alloc",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::ScaleFunc*, ::UnityEngine::Rendering::RTHandleAllocInfo)>(
    &::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67a7ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                                { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Texture*)>(&::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67a8124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::RenderTexture*, bool)>(&::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67a825c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67a5748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::StringW)>(
    &::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67a8420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                                             { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::RTHandles::Alloc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67a8558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::RTHandles::Initialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67a85d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Initialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, bool)>(&::UnityEngine::Rendering::RTHandles::Initialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67a8928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::RTHandles::Release)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67a89e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.SetHardwareDynamicResolutionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::RTHandles::SetHardwareDynamicResolutionState)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67a8a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "SetHardwareDynamicResolutionState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.SetReferenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::RTHandles::SetReferenceSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67a8c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "SetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.ResetReferenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::RTHandles::ResetReferenceSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67a8d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "ResetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandles.CalculateRatioAgainstMaxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::RTHandles::CalculateRatioAgainstMaxSize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67a8d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "CalculateRatioAgainstMaxSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RTHandles::setStaticF_s_DefaultInstance(::UnityEngine::Rendering::RTHandleSystem* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandleSystem*, "s_DefaultInstance", ::UnityEngine::Rendering::RTHandles*>(
      std::forward<::UnityEngine::Rendering::RTHandleSystem*>(value));
}
inline ::UnityEngine::Rendering::RTHandleSystem* UnityEngine::Rendering::RTHandles::getStaticF_s_DefaultInstance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandleSystem*, "s_DefaultInstance", ::UnityEngine::Rendering::RTHandles*>();
}
inline int32_t UnityEngine::Rendering::RTHandles::get_maxWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "get_maxWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RTHandles::get_maxHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "get_maxHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandleProperties UnityEngine::Rendering::RTHandles::get_rtHandleProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "get_rtHandleProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandleProperties>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandles::CalculateDimensions(::UnityEngine::Vector2 scaleFactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "CalculateDimensions", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, scaleFactor);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandles::CalculateDimensions(::UnityEngine::Rendering::ScaleFunc* scaleFunc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "CalculateDimensions", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, scaleFunc);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(int32_t width, int32_t height, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                                                    ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                                                    bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel,
                                                                                    float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                                                    bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                                                    ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc",
                                                                                                                      {},
                                                                                                                      { ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<float_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                        ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, width, height, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension,
                                                                                  enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS,
                                                                                  useDynamicScale, useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices,
                                                                                    ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                                                    ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips,
                                                                                    bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                                                    bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                                                    ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc",
                                                                                                                      {},
                                                                                                                      { ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<float_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                        ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, width, height, format, slices, filterMode, wrapMode, dimension, enableRandomWrite,
                                                                                  useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale,
                                                                                  useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(int32_t width, int32_t height, ::UnityEngine::TextureWrapMode wrapModeU, ::UnityEngine::TextureWrapMode wrapModeV,
                                                                                    ::UnityEngine::TextureWrapMode wrapModeW, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                                                    ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips,
                                                                                    bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                                                    bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                                                    ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc",
                                                                                                                      {},
                                                                                                                      { ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<float_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                        ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, width, height, wrapModeU, wrapModeV, wrapModeW, slices, depthBufferBits, colorFormat,
                                                                                  filterMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias,
                                                                                  msaaSamples, bindTextureMS, useDynamicScale, useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(int32_t width, int32_t height, ::UnityEngine::Rendering::RTHandleAllocInfo info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                                           { "Alloc", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, width, height, info);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode,
                                                                                    ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                          { "Alloc",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::RTHandles::GetFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                                                                           ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                       { "GetFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, colorFormat, depthStencilFormat);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Vector2 scaleFactor, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                                                    ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                                                    bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel,
                                                                                    float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                                                    bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                                                    ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc",
                                                                                                                      {},
                                                                                                                      { ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<float_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                        ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, scaleFactor, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension,
                                                                                  enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS,
                                                                                  useDynamicScale, useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Vector2 scaleFactor, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices,
                                                                                    ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                                                    ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips,
                                                                                    bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                                                    bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                                                    ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                       { "Alloc",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, scaleFactor, format, slices, filterMode, wrapMode, dimension, enableRandomWrite,
                                                                                  useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale,
                                                                                  useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Vector2 scaleFactor, ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                                    ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel,
                                                                                    float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                          { "Alloc",
                            {},
                            { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                              ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, scaleFactor, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias,
                                                                                  name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Vector2 scaleFactor, ::UnityEngine::Rendering::RTHandleAllocInfo info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                                           { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, scaleFactor, info);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                                                    ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                                                    bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel,
                                                                                    float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                                                    bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                                                    ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc",
                                                                                                                      {},
                                                                                                                      { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<int32_t>(),
                                                                                                                        ::i2c::type_of<float_t>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                        ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, scaleFunc, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension,
                                                                                  enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS,
                                                                                  useDynamicScale, useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                    int32_t slices, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                                                    ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips,
                                                                                    bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                                                    bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                                                    ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                       { "Alloc",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, scaleFunc, format, slices, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap,
                                                                                  autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale,
                                                                                  useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                                    ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel,
                                                                                    float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                          { "Alloc",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                              ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, scaleFunc, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::UnityEngine::Rendering::RTHandleAllocInfo info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                              { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, scaleFunc, info);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Texture* tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, tex);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::RenderTexture* tex, bool transferOwnership) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, tex, transferOwnership);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Rendering::RenderTargetIdentifier tex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, tex);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Rendering::RenderTargetIdentifier tex, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                                           { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, tex, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandles::Alloc(::UnityEngine::Rendering::RTHandle* tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, tex);
}
inline void UnityEngine::Rendering::RTHandles::Initialize(int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Initialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, width, height);
}
inline void UnityEngine::Rendering::RTHandles::Initialize(int32_t width, int32_t height, bool useLegacyDynamicResControl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, width, height, useLegacyDynamicResControl);
}
inline void UnityEngine::Rendering::RTHandles::Release(::UnityEngine::Rendering::RTHandle* rth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rth);
}
inline void UnityEngine::Rendering::RTHandles::SetHardwareDynamicResolutionState(bool hwDynamicResRequested) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "SetHardwareDynamicResolutionState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hwDynamicResRequested);
}
inline void UnityEngine::Rendering::RTHandles::SetReferenceSize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "SetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, width, height);
}
inline void UnityEngine::Rendering::RTHandles::ResetReferenceSize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "ResetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, width, height);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::RTHandles::CalculateRatioAgainstMaxSize(int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandles*>(), { "CalculateRatioAgainstMaxSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, width, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandles::RTHandles() {}
