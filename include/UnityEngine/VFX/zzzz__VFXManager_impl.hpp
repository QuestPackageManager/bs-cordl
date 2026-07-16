#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXManager_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraBufferTypes_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.get_runtimeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (*)()>(&::UnityEngine::VFX::VFXManager::get_runtimeResources)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e295b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "get_runtimeResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.get_fixedTimeStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::VFX::VFXManager::get_fixedTimeStep)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e29714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "get_fixedTimeStep", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.get_maxDeltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::VFX::VFXManager::get_maxDeltaTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e2973c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "get_maxDeltaTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.get_maxScrubTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::VFX::VFXManager::get_maxScrubTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e29764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "get_maxScrubTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.PrepareCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::VFX::VFXManager::PrepareCamera)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e2978c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "PrepareCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.PrepareCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::VFX::VFXCameraXRSettings)>(&::UnityEngine::VFX::VFXManager::PrepareCamera)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6e297f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                             { "PrepareCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.ProcessCameraCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::VFX::VFXCameraXRSettings,
                                                                ::UnityEngine::Rendering::CullingResults)>(&::UnityEngine::VFX::VFXManager::ProcessCameraCommand)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e2991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                             { "ProcessCameraCommand",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>(), ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.Internal_ProcessCameraCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::VFX::VFXCameraXRSettings, ::System::IntPtr)>(
    &::UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e299a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "Internal_ProcessCameraCommand",
                                                                                               {},
                                                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                                                 ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.IsCameraBufferNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXCameraBufferTypes (*)(::UnityEngine::Camera*)>(&::UnityEngine::VFX::VFXManager::IsCameraBufferNeeded)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e29b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "IsCameraBufferNeeded", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.SetCameraBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::VFX::VFXCameraBufferTypes, ::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::VFX::VFXManager::SetCameraBuffer)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6e29c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                { "SetCameraBuffer",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::VFX::VFXCameraBufferTypes>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.get_runtimeResources_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::VFX::VFXManager::get_runtimeResources_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e296ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "get_runtimeResources_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.PrepareCamera_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::VFX::VFXCameraXRSettings>)>(&::UnityEngine::VFX::VFXManager::PrepareCamera_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e298d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                { "PrepareCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::VFX::VFXCameraXRSettings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.Internal_ProcessCameraCommand_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::VFX::VFXCameraXRSettings>, ::System::IntPtr)>(
    &::UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e29ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "Internal_ProcessCameraCommand_Injected",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                    ::i2c::type_of<::by_ref<::UnityEngine::VFX::VFXCameraXRSettings>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.IsCameraBufferNeeded_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXCameraBufferTypes (*)(::System::IntPtr)>(&::UnityEngine::VFX::VFXManager::IsCameraBufferNeeded_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e29bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "IsCameraBufferNeeded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXManager.SetCameraBuffer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::VFX::VFXCameraBufferTypes, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::VFX::VFXManager::SetCameraBuffer_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e29d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                             { "SetCameraBuffer_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::VFX::VFXCameraBufferTypes>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::VFXManager::setStaticF_kDefaultCameraXRSettings(::UnityEngine::VFX::VFXCameraXRSettings value) {
  ::cordl_internals::setStaticField<::UnityEngine::VFX::VFXCameraXRSettings, "kDefaultCameraXRSettings", ::UnityEngine::VFX::VFXManager*>(std::forward<::UnityEngine::VFX::VFXCameraXRSettings>(value));
}
inline ::UnityEngine::VFX::VFXCameraXRSettings UnityEngine::VFX::VFXManager::getStaticF_kDefaultCameraXRSettings() {
  return ::cordl_internals::getStaticField<::UnityEngine::VFX::VFXCameraXRSettings, "kDefaultCameraXRSettings", ::UnityEngine::VFX::VFXManager*>();
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::VFX::VFXManager::get_runtimeResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "get_runtimeResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(nullptr, ___internal_method);
}
inline float_t UnityEngine::VFX::VFXManager::get_fixedTimeStep() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "get_fixedTimeStep", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::VFX::VFXManager::get_maxDeltaTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "get_maxDeltaTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::VFX::VFXManager::get_maxScrubTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "get_maxScrubTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::VFX::VFXManager::PrepareCamera(::UnityEngine::Camera* cam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "PrepareCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::VFX::VFXManager::PrepareCamera(::UnityEngine::Camera* cam, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                           { "PrepareCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, camXRSettings);
}
inline void UnityEngine::VFX::VFXManager::ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings,
                                                               ::UnityEngine::Rendering::CullingResults results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                           { "ProcessCameraCommand",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                               ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>(), ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, cmd, camXRSettings, results);
}
inline void UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings,
                                                                        ::System::IntPtr cullResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "Internal_ProcessCameraCommand",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                                               ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, cmd, camXRSettings, cullResults);
}
inline ::UnityEngine::VFX::VFXCameraBufferTypes UnityEngine::VFX::VFXManager::IsCameraBufferNeeded(::UnityEngine::Camera* cam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "IsCameraBufferNeeded", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXCameraBufferTypes>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::VFX::VFXManager::SetCameraBuffer(::UnityEngine::Camera* cam, ::UnityEngine::VFX::VFXCameraBufferTypes type, ::UnityEngine::Texture* buffer, int32_t x, int32_t y,
                                                          int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                              { "SetCameraBuffer",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::VFX::VFXCameraBufferTypes>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, type, buffer, x, y, width, height);
}
inline ::System::IntPtr UnityEngine::VFX::VFXManager::get_runtimeResources_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "get_runtimeResources_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::VFX::VFXManager::PrepareCamera_Injected(::System::IntPtr cam, ::by_ref<::UnityEngine::VFX::VFXCameraXRSettings> camXRSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                              { "PrepareCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::VFX::VFXCameraXRSettings>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, camXRSettings);
}
inline void UnityEngine::VFX::VFXManager::Internal_ProcessCameraCommand_Injected(::System::IntPtr cam, ::System::IntPtr cmd, ::by_ref<::UnityEngine::VFX::VFXCameraXRSettings> camXRSettings,
                                                                                 ::System::IntPtr cullResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "Internal_ProcessCameraCommand_Injected",
                                                                                {},
                                                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                  ::i2c::type_of<::by_ref<::UnityEngine::VFX::VFXCameraXRSettings>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, cmd, camXRSettings, cullResults);
}
inline ::UnityEngine::VFX::VFXCameraBufferTypes UnityEngine::VFX::VFXManager::IsCameraBufferNeeded_Injected(::System::IntPtr cam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(), { "IsCameraBufferNeeded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXCameraBufferTypes>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::VFX::VFXManager::SetCameraBuffer_Injected(::System::IntPtr cam, ::UnityEngine::VFX::VFXCameraBufferTypes type, ::System::IntPtr buffer, int32_t x, int32_t y, int32_t width,
                                                                   int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXManager*>(),
                                                           { "SetCameraBuffer_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::VFX::VFXCameraBufferTypes>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, type, buffer, x, y, width, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXManager::VFXManager() {}
