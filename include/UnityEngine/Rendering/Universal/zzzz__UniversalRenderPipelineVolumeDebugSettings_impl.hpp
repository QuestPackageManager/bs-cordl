#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\UniversalRenderPipelineVolumeDebugSettings.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeDebugSettings_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineVolumeDebugSettings_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeStack_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings.get_selectedCameraVolumeStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VolumeStack* (::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraVolumeStack)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x68532a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings.get_selectedCameraLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraLayerMask)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68533f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings.get_selectedCameraPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraPosition)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x68534e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings.get_targetRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_targetRenderPipeline)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68535e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x68529a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::VolumeStack* UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraVolumeStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeStack*>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraLayerMask() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_selectedCameraPosition() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::get_targetRenderPipeline() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings* UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings::UniversalRenderPipelineVolumeDebugSettings() {}
