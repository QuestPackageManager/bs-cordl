#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IUnsafeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO.BindAndFetchTempTextureHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectSO::*)(
    ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor,
    ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>)>(&::GlobalNamespace::MainEffectSO::BindAndFetchTempTextureHandles)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f45a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO.PreRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectSO::*)(::UnityEngine::Rendering::IBaseCommandBuffer*)>(&::GlobalNamespace::MainEffectSO::PreRender)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f45ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectSO::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, float_t)>(&::GlobalNamespace::MainEffectSO::Render)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f45ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO.PostRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectSO::*)(::UnityEngine::Rendering::RasterCommandBuffer*, float_t)>(
    &::GlobalNamespace::MainEffectSO::PostRender)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f45aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO.get_hasPostProcessEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MainEffectSO::*)()>(&::GlobalNamespace::MainEffectSO::get_hasPostProcessEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f45af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectSO::*)()>(&::GlobalNamespace::MainEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f45af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainEffectSO::BindAndFetchTempTextureHandles(::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* builder,
                                                                          ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor destDesc,
                                                                          ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> textureHandles) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder, renderGraph, destDesc, textureHandles);
}
inline void GlobalNamespace::MainEffectSO::PreRender(::UnityEngine::Rendering::IBaseCommandBuffer* cmd) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GlobalNamespace::MainEffectSO::Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle src,
                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle bloomTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dest,
                                                  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempTextures, float_t fade) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, src, bloomTexture, dest, tempTextures, fade);
}
inline void GlobalNamespace::MainEffectSO::PostRender(::UnityEngine::Rendering::RasterCommandBuffer* cmd, float_t fade) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, fade);
}
inline bool GlobalNamespace::MainEffectSO::get_hasPostProcessEffect() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectSO* GlobalNamespace::MainEffectSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectSO::MainEffectSO() {}
