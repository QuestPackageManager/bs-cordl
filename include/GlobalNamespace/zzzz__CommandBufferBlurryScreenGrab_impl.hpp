#pragma once
// IWYU pragma private; include "GlobalNamespace/CommandBufferBlurryScreenGrab.hpp"
#include "GlobalNamespace/zzzz__CommandBufferGOCore_impl.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_impl.hpp"
#include "GlobalNamespace/zzzz__CommandBufferBlurryScreenGrab_def.hpp"
#include "GlobalNamespace/zzzz__CommandBufferOwners_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CommandBufferBlurryScreenGrab.CreateCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::GlobalNamespace::CommandBufferBlurryScreenGrab::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::CommandBufferBlurryScreenGrab::CreateCommandBuffer)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f3ec5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), { ::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferBlurryScreenGrab.CamerasDict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* (
    ::GlobalNamespace::CommandBufferBlurryScreenGrab::*)()>(&::GlobalNamespace::CommandBufferBlurryScreenGrab::CamerasDict)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f3ed60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), { ::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferBlurryScreenGrab.CommandBufferCameraEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CameraEvent (::GlobalNamespace::CommandBufferBlurryScreenGrab::*)()>(
    &::GlobalNamespace::CommandBufferBlurryScreenGrab::CommandBufferCameraEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3edbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), { ::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferBlurryScreenGrab._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandBufferBlurryScreenGrab::*)()>(&::GlobalNamespace::CommandBufferBlurryScreenGrab::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f3edc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_get__kawaseBlurRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_get__kawaseBlurRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr void GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kawaseBlurRenderer = value;
}
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize& GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_get__kernelSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernelSize;
}
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize const& GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_get__kernelSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernelSize;
}
constexpr void GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_set__kernelSize(::GlobalNamespace::KawaseBlurRendererSO_KernelSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kernelSize = value;
}
constexpr ::UnityEngine::Rendering::CameraEvent& GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_get__cameraEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_get__cameraEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraEvent;
}
constexpr void GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_set__cameraEvent(::UnityEngine::Rendering::CameraEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraEvent = value;
}
constexpr int32_t& GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_get__downsample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsample;
}
constexpr int32_t const& GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_get__downsample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsample;
}
constexpr void GlobalNamespace::CommandBufferBlurryScreenGrab::__cordl_internal_set__downsample(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downsample = value;
}
inline void
GlobalNamespace::CommandBufferBlurryScreenGrab::setStaticF__cameras(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*, "_cameras",
                                    ::GlobalNamespace::CommandBufferBlurryScreenGrab*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferBlurryScreenGrab::getStaticF__cameras() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*, "_cameras",
                                           ::GlobalNamespace::CommandBufferBlurryScreenGrab*>();
}
inline ::UnityEngine::Rendering::CommandBuffer* GlobalNamespace::CommandBufferBlurryScreenGrab::CreateCommandBuffer(::UnityEngine::Camera* camera) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method, camera);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferBlurryScreenGrab::CamerasDict() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferBlurryScreenGrab::CommandBufferCameraEvent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CameraEvent>(this, ___internal_method);
}
inline void GlobalNamespace::CommandBufferBlurryScreenGrab::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferBlurryScreenGrab*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CommandBufferBlurryScreenGrab* GlobalNamespace::CommandBufferBlurryScreenGrab::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CommandBufferBlurryScreenGrab*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBufferBlurryScreenGrab::CommandBufferBlurryScreenGrab() {}
