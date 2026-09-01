#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalRendererFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferCopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCreateDrawCallSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawDBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawErrorSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawFowardEmissiveSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawGBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawScreenSpaceSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalForwardEmissivePass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalGBufferRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalPreviewPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSkipCulledSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCachedSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCulledSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCullingGroupSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SharedDecalEntityManager_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.get_sharedDecalEntityManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::SharedDecalEntityManager* (*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::get_sharedDecalEntityManager)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68ae0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "get_sharedDecalEntityManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.get_settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::DecalSettings*> (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::get_settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68ae154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "get_settings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.get_intermediateRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::get_intermediateRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68ae15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "get_intermediateRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.get_requiresDecalLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::get_requiresDecalLayers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68ae16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "get_requiresDecalLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.get_isGLDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::get_isGLDevice)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68ae184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "get_isGLDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::Create)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68ae1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.RequireRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(
    bool, bool, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>)>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::RequireRenderingLayers)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68ae248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.GetDBufferSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DBufferSettings* (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::GetDBufferSettings)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68ae4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "GetDBufferSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.GetScreenSpaceSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::GetScreenSpaceSettings)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68ae568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "GetScreenSpaceSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.GetTechnique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DecalTechnique (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRendererData*)>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x68ae5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                             { "GetTechnique", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.GetTechnique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DecalTechnique (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*)>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x68ae71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                           { "GetTechnique", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.GetTechnique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DecalTechnique (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(bool, bool, bool)>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x68ae310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                           { "GetTechnique", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.IsAutomaticDBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::IsAutomaticDBuffer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x68ae818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "IsAutomaticDBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.RecreateSystemsIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*,
                                                                                                                           ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::RecreateSystemsIfNeeded)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x68ae90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                            { "RecreateSystemsIfNeeded",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.OnCameraPreCull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*,
                                                                                                                           ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::OnCameraPreCull)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x68aef0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*,
                                                                                                                           ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x68af050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.SupportsNativeRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::SupportsNativeRenderPass)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68af1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.SetupRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*,
                                                                                                                           ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::SetupRenderPasses)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x68af210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x68af3cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature.ChangeAdaptivePerformanceDrawDistances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DecalRendererFeature::ChangeAdaptivePerformanceDrawDistances)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68af4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "ChangeAdaptivePerformanceDrawDistances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalRendererFeature::*)()>(&::UnityEngine::Rendering::Universal::DecalRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68af4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalSettings*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::Rendering::Universal::DecalSettings* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DecalSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_Technique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Technique;
}
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_Technique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Technique;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_Technique(::UnityEngine::Rendering::Universal::DecalTechnique value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Technique = value;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferSettings;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DBufferSettings(::UnityEngine::Rendering::Universal::DBufferSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DBufferSettings = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ScreenSpaceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceSettings;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ScreenSpaceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_ScreenSpaceSettings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenSpaceSettings = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_RecreateSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecreateSystems;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_RecreateSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecreateSystems;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_RecreateSystems(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RecreateSystems = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalPreviewPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalPreviewPass;
}
constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalPreviewPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalPreviewPass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalPreviewPass(::UnityEngine::Rendering::Universal::DecalPreviewPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalPreviewPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalEntityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalEntityManager;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalEntityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalEntityManager;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalEntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalEntityManager = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCachedSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCachedSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCachedSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCachedSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalUpdateCachedSystem(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalUpdateCachedSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCullingGroupSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCullingGroupSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem* const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCullingGroupSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCullingGroupSystem;
}
constexpr void
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalUpdateCullingGroupSystem(::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalUpdateCullingGroupSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCulledSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCulledSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalUpdateCulledSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalUpdateCulledSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalUpdateCulledSystem(::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalUpdateCulledSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalCreateDrawCallSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalCreateDrawCallSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalCreateDrawCallSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalCreateDrawCallSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalCreateDrawCallSystem(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalCreateDrawCallSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DrawErrorSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawErrorSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DrawErrorSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawErrorSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DrawErrorSystem(::UnityEngine::Rendering::Universal::DecalDrawErrorSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawErrorSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_CopyDepthPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPass;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_CopyDepthPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_CopyDepthPass(::UnityEngine::Rendering::Universal::DBufferCopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyDepthPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferRenderPass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferRenderPass;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferRenderPass* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferRenderPass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DBufferRenderPass(::UnityEngine::Rendering::Universal::DBufferRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DBufferRenderPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ForwardEmissivePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardEmissivePass;
}
constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ForwardEmissivePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardEmissivePass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_ForwardEmissivePass(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForwardEmissivePass = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawDBufferSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawDBufferSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawDBufferSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawDBufferSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalDrawDBufferSystem(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalDrawDBufferSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawForwardEmissiveSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawForwardEmissiveSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* const&
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawForwardEmissiveSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawForwardEmissiveSystem;
}
constexpr void
UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalDrawForwardEmissiveSystem(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalDrawForwardEmissiveSystem = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferClearMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferClearMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DBufferClearMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferClearMaterial;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DBufferClearMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DBufferClearMaterial = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ScreenSpaceDecalRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceDecalRenderPass;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_ScreenSpaceDecalRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceDecalRenderPass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_ScreenSpaceDecalRenderPass(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenSpaceDecalRenderPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawScreenSpaceSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawScreenSpaceSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalDrawScreenSpaceSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalDrawScreenSpaceSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalDrawScreenSpaceSystem(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalDrawScreenSpaceSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalSkipCulledSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalSkipCulledSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalSkipCulledSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalSkipCulledSystem* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DecalSkipCulledSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalSkipCulledSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DecalSkipCulledSystem(::UnityEngine::Rendering::Universal::DecalSkipCulledSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalSkipCulledSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_GBufferRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferRenderPass;
}
constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_GBufferRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferRenderPass;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_GBufferRenderPass(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GBufferRenderPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DrawGBufferSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawGBufferSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DrawGBufferSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawGBufferSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DrawGBufferSystem(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawGBufferSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DeferredLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_get_m_DeferredLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr void UnityEngine::Rendering::Universal::DecalRendererFeature::__cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeferredLights = value;
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::setStaticF__sharedDecalEntityManager_k__BackingField(::UnityEngine::Rendering::Universal::SharedDecalEntityManager* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*, "<sharedDecalEntityManager>k__BackingField",
                                    ::UnityEngine::Rendering::Universal::DecalRendererFeature*>(std::forward<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(value));
}
inline ::UnityEngine::Rendering::Universal::SharedDecalEntityManager* UnityEngine::Rendering::Universal::DecalRendererFeature::getStaticF__sharedDecalEntityManager_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*, "<sharedDecalEntityManager>k__BackingField",
                                           ::UnityEngine::Rendering::Universal::DecalRendererFeature*>();
}
inline ::UnityEngine::Rendering::Universal::SharedDecalEntityManager* UnityEngine::Rendering::Universal::DecalRendererFeature::get_sharedDecalEntityManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "get_sharedDecalEntityManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::SharedDecalEntityManager*>(nullptr, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::DecalSettings*> UnityEngine::Rendering::Universal::DecalRendererFeature::get_settings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "get_settings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::DecalSettings*>>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DecalRendererFeature::get_intermediateRendering() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "get_intermediateRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DecalRendererFeature::get_requiresDecalLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "get_requiresDecalLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DecalRendererFeature::get_isGLDevice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "get_isGLDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DecalRendererFeature::RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals,
                                                                                            ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> atEvent,
                                                                                            ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> maskSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isDeferred, needsGBufferAccurateNormals, atEvent, maskSize);
}
inline ::UnityEngine::Rendering::Universal::DBufferSettings* UnityEngine::Rendering::Universal::DecalRendererFeature::GetDBufferSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "GetDBufferSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DBufferSettings*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* UnityEngine::Rendering::Universal::DecalRendererFeature::GetScreenSpaceSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "GetScreenSpaceSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalTechnique
UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique(::UnityEngine::Rendering::Universal::ScriptableRendererData* renderer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                         { "GetTechnique", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalTechnique>(this, ___internal_method, renderer);
}
inline ::UnityEngine::Rendering::Universal::DecalTechnique UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                         { "GetTechnique", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalTechnique>(this, ___internal_method, renderer);
}
inline ::UnityEngine::Rendering::Universal::DecalTechnique UnityEngine::Rendering::Universal::DecalRendererFeature::GetTechnique(bool isDeferred, bool needsGBufferAccurateNormals,
                                                                                                                                 bool checkForInvalidTechniques) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                                                                                         { "GetTechnique", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalTechnique>(this, ___internal_method, isDeferred, needsGBufferAccurateNormals, checkForInvalidTechniques);
}
inline bool UnityEngine::Rendering::Universal::DecalRendererFeature::IsAutomaticDBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "IsAutomaticDBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DecalRendererFeature::RecreateSystemsIfNeeded(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                             ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(),
                          { "RecreateSystemsIfNeeded",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, renderer, cameraData);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::OnCameraPreCull(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                     ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, cameraData);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                     ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline bool UnityEngine::Rendering::Universal::DecalRendererFeature::SupportsNativeRenderPass() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::SetupRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                       ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::ChangeAdaptivePerformanceDrawDistances() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { "ChangeAdaptivePerformanceDrawDistances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalRendererFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalRendererFeature* UnityEngine::Rendering::Universal::DecalRendererFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalRendererFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalRendererFeature::DecalRendererFeature() {}
