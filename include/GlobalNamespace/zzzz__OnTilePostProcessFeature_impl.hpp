#pragma once
// IWYU pragma private; include "GlobalNamespace/OnTilePostProcessFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__OnTilePostProcessFeature_def.hpp"
#include "GlobalNamespace/zzzz__OnTilePostProcessPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ColorGradingLutPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessFeature.TryLoadResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OnTilePostProcessFeature::*)()>(&::GlobalNamespace::OnTilePostProcessFeature::TryLoadResources)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6c719ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), { "TryLoadResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessFeature::*)()>(&::GlobalNamespace::OnTilePostProcessFeature::Create)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6c71bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), { ::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessFeature.IsRuntimePlatformUntetheredXR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OnTilePostProcessFeature::*)()>(&::GlobalNamespace::OnTilePostProcessFeature::IsRuntimePlatformUntetheredXR)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c71d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), { "IsRuntimePlatformUntetheredXR", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::OnTilePostProcessFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6c71de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), { ::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessFeature.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessFeature::*)(bool)>(&::GlobalNamespace::OnTilePostProcessFeature::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c720bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), { ::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessFeature::*)()>(&::GlobalNamespace::OnTilePostProcessFeature::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c720d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_m_PostProcessData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_m_PostProcessData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessData;
}
constexpr void GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_set_m_PostProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostProcessData = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_m_UberPostShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UberPostShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_m_UberPostShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UberPostShader;
}
constexpr void GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_set_m_UberPostShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UberPostShader = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_postProcessingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessingEvent;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_postProcessingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessingEvent;
}
constexpr void GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_set_postProcessingEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postProcessingEvent = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_m_OnTilePostProcessMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTilePostProcessMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_m_OnTilePostProcessMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTilePostProcessMaterial;
}
constexpr void GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_set_m_OnTilePostProcessMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnTilePostProcessMaterial = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_m_ColorGradingLutPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradingLutPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* const& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_m_ColorGradingLutPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradingLutPass;
}
constexpr void GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_set_m_ColorGradingLutPass(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorGradingLutPass = value;
}
constexpr ::GlobalNamespace::OnTilePostProcessPass*& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_m_OnTilePostProcessPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTilePostProcessPass;
}
constexpr ::GlobalNamespace::OnTilePostProcessPass* const& GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_get_m_OnTilePostProcessPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTilePostProcessPass;
}
constexpr void GlobalNamespace::OnTilePostProcessFeature::__cordl_internal_set_m_OnTilePostProcessPass(::GlobalNamespace::OnTilePostProcessPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnTilePostProcessPass = value;
}
inline bool GlobalNamespace::OnTilePostProcessFeature::TryLoadResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), { "TryLoadResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OnTilePostProcessFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OnTilePostProcessFeature::IsRuntimePlatformUntetheredXR() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), { "IsRuntimePlatformUntetheredXR", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OnTilePostProcessFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                       ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::OnTilePostProcessFeature::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::OnTilePostProcessFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnTilePostProcessFeature* GlobalNamespace::OnTilePostProcessFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnTilePostProcessFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnTilePostProcessFeature::OnTilePostProcessFeature() {}
