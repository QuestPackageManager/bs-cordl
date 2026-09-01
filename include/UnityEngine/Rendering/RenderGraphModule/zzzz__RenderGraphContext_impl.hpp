#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\RenderGraphContext.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IDerivedRendergraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext.FromInternalContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::FromInternalContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dbcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(),
                                                             { "FromInternalContext", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext.get_renderContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ScriptableRenderContext (::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_renderContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67dbce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(), { "get_renderContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext.get_cmd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_cmd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67dbc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(), { "get_cmd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext.get_renderGraphPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_renderGraphPool)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67dbcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(), { "get_renderGraphPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext.get_defaultResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_defaultResources)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67dbd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(), { "get_defaultResources", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(),
                                                           { "FromInternalContext", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context);
}
inline ::UnityEngine::Rendering::ScriptableRenderContext UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_renderContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(), { "get_renderContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ScriptableRenderContext>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_cmd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(), { "get_cmd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_renderGraphPool() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(), { "get_renderGraphPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::get_defaultResources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(), { "get_defaultResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::operator ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*() {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*
UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::i___UnityEngine__Rendering__RenderGraphModule__IDerivedRendergraphContext() {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "wrappedContext", ty: "::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::RenderGraphContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* wrappedContext) noexcept {
  this->wrappedContext = wrappedContext;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext::RenderGraphContext() {}
