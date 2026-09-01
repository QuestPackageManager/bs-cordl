#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectRendererFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectController_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectLoadingIndicatorPass_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectPostRenderPass_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectPreRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)()>(&::GlobalNamespace::MainEffectRendererFeature::Create)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f4340c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)(bool)>(&::GlobalNamespace::MainEffectRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4373c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::MainEffectRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f4374c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature.EnqueueLoadingIndicatorPassIfDue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::GlobalNamespace::MainEffectController*)>(&::GlobalNamespace::MainEffectRendererFeature::EnqueueLoadingIndicatorPassIfDue)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5f437b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(),
            { "EnqueueLoadingIndicatorPassIfDue", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), ::i2c::type_of<::GlobalNamespace::MainEffectController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature.ResolveController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MainEffectController> (*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::MainEffectRendererFeature::ResolveController)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f437b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { "ResolveController", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature.GetEnabledController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MainEffectController> (*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::MainEffectRendererFeature::GetEnabledController)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f438f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { "GetEnabledController", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)()>(&::GlobalNamespace::MainEffectRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f439ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__loadingIndicatorShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingIndicatorShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__loadingIndicatorShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingIndicatorShader;
}
constexpr void GlobalNamespace::MainEffectRendererFeature::__cordl_internal_set__loadingIndicatorShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingIndicatorShader = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__loadingIndicatorTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingIndicatorTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__loadingIndicatorTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingIndicatorTexture;
}
constexpr void GlobalNamespace::MainEffectRendererFeature::__cordl_internal_set__loadingIndicatorTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingIndicatorTexture = value;
}
constexpr float_t& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__loadingIndicatorDelaySec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingIndicatorDelaySec;
}
constexpr float_t const& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__loadingIndicatorDelaySec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingIndicatorDelaySec;
}
constexpr void GlobalNamespace::MainEffectRendererFeature::__cordl_internal_set__loadingIndicatorDelaySec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingIndicatorDelaySec = value;
}
constexpr ::GlobalNamespace::MainEffectPreRenderPass*& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__preRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preRenderPass;
}
constexpr ::GlobalNamespace::MainEffectPreRenderPass* const& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__preRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preRenderPass;
}
constexpr void GlobalNamespace::MainEffectRendererFeature::__cordl_internal_set__preRenderPass(::GlobalNamespace::MainEffectPreRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preRenderPass = value;
}
constexpr ::GlobalNamespace::MainEffectPostRenderPass*& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__postRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____postRenderPass;
}
constexpr ::GlobalNamespace::MainEffectPostRenderPass* const& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__postRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____postRenderPass;
}
constexpr void GlobalNamespace::MainEffectRendererFeature::__cordl_internal_set__postRenderPass(::GlobalNamespace::MainEffectPostRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____postRenderPass = value;
}
constexpr ::GlobalNamespace::MainEffectLoadingIndicatorPass*& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__loadingIndicatorPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingIndicatorPass;
}
constexpr ::GlobalNamespace::MainEffectLoadingIndicatorPass* const& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__loadingIndicatorPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingIndicatorPass;
}
constexpr void GlobalNamespace::MainEffectRendererFeature::__cordl_internal_set__loadingIndicatorPass(::GlobalNamespace::MainEffectLoadingIndicatorPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingIndicatorPass = value;
}
constexpr float_t& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__spinnerShownAtTimeSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spinnerShownAtTimeSec;
}
constexpr float_t const& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__spinnerShownAtTimeSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spinnerShownAtTimeSec;
}
constexpr void GlobalNamespace::MainEffectRendererFeature::__cordl_internal_set__spinnerShownAtTimeSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spinnerShownAtTimeSec = value;
}
inline void GlobalNamespace::MainEffectRendererFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectRendererFeature::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MainEffectRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                        ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::MainEffectRendererFeature::EnqueueLoadingIndicatorPassIfDue(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                         ::GlobalNamespace::MainEffectController* controller) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(),
          { "EnqueueLoadingIndicatorPassIfDue", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), ::i2c::type_of<::GlobalNamespace::MainEffectController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, controller);
}
inline ::UnityW<::GlobalNamespace::MainEffectController> GlobalNamespace::MainEffectRendererFeature::ResolveController(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { "ResolveController", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MainEffectController>>(nullptr, ___internal_method, camera);
}
inline ::UnityW<::GlobalNamespace::MainEffectController> GlobalNamespace::MainEffectRendererFeature::GetEnabledController(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { "GetEnabledController", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MainEffectController>>(nullptr, ___internal_method, camera);
}
inline void GlobalNamespace::MainEffectRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectRendererFeature* GlobalNamespace::MainEffectRendererFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectRendererFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectRendererFeature::MainEffectRendererFeature() {}
