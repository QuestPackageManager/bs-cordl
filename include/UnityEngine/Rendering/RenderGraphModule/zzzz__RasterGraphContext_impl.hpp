#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RasterGraphContext.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IDerivedRendergraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext.get_defaultResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* (
    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::get_defaultResources)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67d6514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>(), { "get_defaultResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext.get_renderGraphPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* (::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::get_renderGraphPool)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67d652c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>(), { "get_renderGraphPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext.FromInternalContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::FromInternalContext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67d6544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>(),
                                                             { "FromInternalContext", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::setStaticF_rastercmd(::UnityEngine::Rendering::RasterCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RasterCommandBuffer*, "rastercmd", ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>(
      std::forward<::UnityEngine::Rendering::RasterCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::RasterCommandBuffer* UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::getStaticF_rastercmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RasterCommandBuffer*, "rastercmd", ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::get_defaultResources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>(), { "get_defaultResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::get_renderGraphPool() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>(), { "get_renderGraphPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>(),
                                                           { "FromInternalContext", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context);
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::operator ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*() {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*
UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::i___UnityEngine__Rendering__RenderGraphModule__IDerivedRendergraphContext() {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "wrappedContext", ty: "::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cmd",
// ty: "::UnityEngine::Rendering::RasterCommandBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::RasterGraphContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* wrappedContext,
                                                                                              ::UnityEngine::Rendering::RasterCommandBuffer* cmd) noexcept {
  this->wrappedContext = wrappedContext;
  this->cmd = cmd;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext::RasterGraphContext() {}
