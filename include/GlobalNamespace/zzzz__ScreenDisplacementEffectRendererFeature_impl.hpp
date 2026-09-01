#pragma once
// IWYU pragma private; include "GlobalNamespace\ScreenDisplacementEffectRendererFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectCopyDepthPass_def.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectDrawPass_def.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectGrabPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectRendererFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectRendererFeature::*)()>(&::GlobalNamespace::ScreenDisplacementEffectRendererFeature::Create)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5f4c00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectRendererFeature::*)(bool)>(
    &::GlobalNamespace::ScreenDisplacementEffectRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f4c4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*,
                                                                                                                            ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::GlobalNamespace::ScreenDisplacementEffectRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f4c544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectRendererFeature.DestroySafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::GlobalNamespace::ScreenDisplacementEffectRendererFeature::DestroySafe)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f4c60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(), { "DestroySafe", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectRendererFeature::*)()>(&::GlobalNamespace::ScreenDisplacementEffectRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4c698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get_effectLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get_effectLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectLayerMask;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_set_effectLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effectLayerMask = value;
}
constexpr ::GlobalNamespace::ScreenDisplacementEffectGrabPass*& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get__grabPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grabPass;
}
constexpr ::GlobalNamespace::ScreenDisplacementEffectGrabPass* const& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get__grabPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grabPass;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_set__grabPass(::GlobalNamespace::ScreenDisplacementEffectGrabPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____grabPass = value;
}
constexpr ::GlobalNamespace::ScreenDisplacementEffectDrawPass*& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get__drawPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawPass;
}
constexpr ::GlobalNamespace::ScreenDisplacementEffectDrawPass* const& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get__drawPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawPass;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_set__drawPass(::GlobalNamespace::ScreenDisplacementEffectDrawPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____drawPass = value;
}
constexpr ::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass*& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get__copyDepthPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyDepthPass;
}
constexpr ::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass* const& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get__copyDepthPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyDepthPass;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_set__copyDepthPass(::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____copyDepthPass = value;
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::setStaticF_enabled(bool value) {
  ::cordl_internals::setStaticField<bool, "enabled", ::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ScreenDisplacementEffectRendererFeature::getStaticF_enabled() {
  return ::cordl_internals::getStaticField<bool, "enabled", ::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>();
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::setStaticF_kGrabTexturePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kGrabTexturePropertyId", ::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ScreenDisplacementEffectRendererFeature::getStaticF_kGrabTexturePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "kGrabTexturePropertyId", ::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>();
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                      ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::DestroySafe(::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(), { "DestroySafe", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenDisplacementEffectRendererFeature* GlobalNamespace::ScreenDisplacementEffectRendererFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectRendererFeature::ScreenDisplacementEffectRendererFeature() {}
