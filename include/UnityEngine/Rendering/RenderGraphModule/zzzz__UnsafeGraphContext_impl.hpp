#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/UnsafeGraphContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IDerivedRendergraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__UnsafeCommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext.get_defaultResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* (
    ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::*)()>(&::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::get_defaultResources)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67d67a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>(), { "get_defaultResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext.get_renderGraphPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* (::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::get_renderGraphPool)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67d67b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>(), { "get_renderGraphPool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext.FromInternalContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::FromInternalContext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67d67d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>(),
                                                             { "FromInternalContext", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d6874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*& UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_get_wrappedContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrappedContext;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* const& UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_get_wrappedContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrappedContext;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_set_wrappedContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wrappedContext = value;
}
constexpr ::UnityEngine::Rendering::UnsafeCommandBuffer*& UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_get_cmd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cmd;
}
constexpr ::UnityEngine::Rendering::UnsafeCommandBuffer* const& UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_get_cmd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cmd;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::__cordl_internal_set_cmd(::UnityEngine::Rendering::UnsafeCommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cmd = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::setStaticF_unsCmd(::UnityEngine::Rendering::UnsafeCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnsafeCommandBuffer*, "unsCmd", ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>(
      std::forward<::UnityEngine::Rendering::UnsafeCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::UnsafeCommandBuffer* UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::getStaticF_unsCmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnsafeCommandBuffer*, "unsCmd", ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::get_defaultResources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>(), { "get_defaultResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::get_renderGraphPool() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>(), { "get_renderGraphPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>(),
                                                           { "FromInternalContext", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::operator ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*
UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::i___UnityEngine__Rendering__RenderGraphModule__IDerivedRendergraphContext() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext::UnsafeGraphContext() {}
