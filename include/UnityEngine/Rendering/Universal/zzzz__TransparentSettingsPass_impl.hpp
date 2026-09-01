#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\TransparentSettingsPass.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TransparentSettingsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TransparentSettingsPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TransparentSettingsPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent, bool)>(
    &::UnityEngine::Rendering::Universal::TransparentSettingsPass::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x68a8ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TransparentSettingsPass*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TransparentSettingsPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::TransparentSettingsPass::*)()>(
    &::UnityEngine::Rendering::Universal::TransparentSettingsPass::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68a8f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TransparentSettingsPass*>(), { "Setup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TransparentSettingsPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TransparentSettingsPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::TransparentSettingsPass::Execute)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x68a8f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TransparentSettingsPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::TransparentSettingsPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TransparentSettingsPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(&::UnityEngine::Rendering::Universal::TransparentSettingsPass::ExecutePass)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68a9058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TransparentSettingsPass*>(),
                                                                                           { "ExecutePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::TransparentSettingsPass::__cordl_internal_get_m_shouldReceiveShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_shouldReceiveShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::TransparentSettingsPass::__cordl_internal_get_m_shouldReceiveShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_shouldReceiveShadows;
}
constexpr void UnityEngine::Rendering::Universal::TransparentSettingsPass::__cordl_internal_set_m_shouldReceiveShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_shouldReceiveShadows = value;
}
inline void UnityEngine::Rendering::Universal::TransparentSettingsPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool shadowReceiveSupported) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TransparentSettingsPass*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, shadowReceiveSupported);
}
inline bool UnityEngine::Rendering::Universal::TransparentSettingsPass::Setup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TransparentSettingsPass*>(), { "Setup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TransparentSettingsPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::TransparentSettingsPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::TransparentSettingsPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* rasterCommandBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TransparentSettingsPass*>(),
                                                                                         { "ExecutePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rasterCommandBuffer);
}
inline ::UnityEngine::Rendering::Universal::TransparentSettingsPass* UnityEngine::Rendering::Universal::TransparentSettingsPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                          bool shadowReceiveSupported) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::TransparentSettingsPass*>(evt, shadowReceiveSupported));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass::TransparentSettingsPass() {}
