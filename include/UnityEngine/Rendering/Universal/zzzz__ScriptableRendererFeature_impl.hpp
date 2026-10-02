#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRendererFeature.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage::ScriptableRendererFeature_IntermediateTextureUsage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage::ScriptableRendererFeature_IntermediateTextureUsage() {}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage::Unknown{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage::Required{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage::NotRequired{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.SetupRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*,
                                                                                                                                ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::SetupRenderPasses)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ca7120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.get_isActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::get_isActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ca7124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { "get_isActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.get_useIntermediateTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage (
    ::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRendererFeature::get_useIntermediateTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ca712c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.OnCameraPreCull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*,
                                                                                                                                ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::OnCameraPreCull)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ca7134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*,
                                                                                                                                ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6ca7138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::OnValidate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6ca71e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.RequireRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)(
    bool, bool, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::RequireRenderingLayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ca7288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.SetActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::SetActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ca7298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { "SetActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6ca72a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ca7310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ca70a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRendererFeature::__cordl_internal_get_m_Active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRendererFeature::__cordl_internal_get_m_Active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRendererFeature::__cordl_internal_set_m_Active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Active = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererFeature::SetupRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRendererFeature::get_isActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { "get_isActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage UnityEngine::Rendering::Universal::ScriptableRendererFeature::get_useIntermediateTextures() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererFeature::OnCameraPreCull(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                          ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererFeature::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererFeature::OnValidate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRendererFeature::RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals,
                                                                                                 ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> atEvent,
                                                                                                 ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> maskSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isDeferred, needsGBufferAccurateNormals, atEvent, maskSize);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererFeature::SetActive(bool active) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { "SetActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererFeature::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererFeature::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::Universal::ScriptableRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRendererFeature* UnityEngine::Rendering::Universal::ScriptableRendererFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::ScriptableRendererFeature::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::ScriptableRendererFeature::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRendererFeature::ScriptableRendererFeature() {}
