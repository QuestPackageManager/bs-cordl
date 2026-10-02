#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderingDebuggerRuntimeResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderingDebuggerRuntimeResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderingDebuggerRuntimeResources_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version::RenderingDebuggerRuntimeResources_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version::RenderingDebuggerRuntimeResources_Version() {}
constexpr ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version::Count{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version::Last{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderingDebuggerRuntimeResources::*)()>(
    &::UnityEngine::Rendering::RenderingDebuggerRuntimeResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc291c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderingDebuggerRuntimeResources*>(),
                                                                                           { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderingDebuggerRuntimeResources::*)()>(&::UnityEngine::Rendering::RenderingDebuggerRuntimeResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bc2924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderingDebuggerRuntimeResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version& UnityEngine::Rendering::RenderingDebuggerRuntimeResources::__cordl_internal_get_m_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version const& UnityEngine::Rendering::RenderingDebuggerRuntimeResources::__cordl_internal_get_m_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_version;
}
constexpr void UnityEngine::Rendering::RenderingDebuggerRuntimeResources::__cordl_internal_set_m_version(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_version = value;
}
inline int32_t UnityEngine::Rendering::RenderingDebuggerRuntimeResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderingDebuggerRuntimeResources*>(),
                                                                                         { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderingDebuggerRuntimeResources::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderingDebuggerRuntimeResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources* UnityEngine::Rendering::RenderingDebuggerRuntimeResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderingDebuggerRuntimeResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::RenderingDebuggerRuntimeResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* UnityEngine::Rendering::RenderingDebuggerRuntimeResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::RenderingDebuggerRuntimeResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::RenderingDebuggerRuntimeResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources::RenderingDebuggerRuntimeResources() {}
