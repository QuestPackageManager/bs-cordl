#pragma once
// IWYU pragma private; include "GlobalNamespace\CommandBufferGrabPass.hpp"
#include "GlobalNamespace/zzzz__CommandBufferGOCore_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_impl.hpp"
#include "GlobalNamespace/zzzz__CommandBufferGrabPass_def.hpp"
#include "GlobalNamespace/zzzz__CommandBufferOwners_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass.CreateCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::GlobalNamespace::CommandBufferGrabPass::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5f411f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), { ::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass.CamerasDict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* (
    ::GlobalNamespace::CommandBufferGrabPass::*)()>(&::GlobalNamespace::CommandBufferGrabPass::CamerasDict)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f41428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), { ::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass.CommandBufferCameraEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CameraEvent (::GlobalNamespace::CommandBufferGrabPass::*)()>(
    &::GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f41484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), { ::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandBufferGrabPass::*)()>(&::GlobalNamespace::CommandBufferGrabPass::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f4148c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CommandBufferGrabPass::__cordl_internal_get__textureName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureName;
}
constexpr ::StringW const& GlobalNamespace::CommandBufferGrabPass::__cordl_internal_get__textureName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureName;
}
constexpr void GlobalNamespace::CommandBufferGrabPass::__cordl_internal_set__textureName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textureName = value;
}
constexpr ::UnityEngine::Rendering::CameraEvent& GlobalNamespace::CommandBufferGrabPass::__cordl_internal_get__cameraEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& GlobalNamespace::CommandBufferGrabPass::__cordl_internal_get__cameraEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraEvent;
}
constexpr void GlobalNamespace::CommandBufferGrabPass::__cordl_internal_set__cameraEvent(::UnityEngine::Rendering::CameraEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraEvent = value;
}
inline void GlobalNamespace::CommandBufferGrabPass::setStaticF__cameras(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*, "_cameras",
                                    ::GlobalNamespace::CommandBufferGrabPass*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferGrabPass::getStaticF__cameras() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*, "_cameras",
                                           ::GlobalNamespace::CommandBufferGrabPass*>();
}
inline ::UnityEngine::Rendering::CommandBuffer* GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer(::UnityEngine::Camera* camera) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method, camera);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferGrabPass::CamerasDict() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CameraEvent>(this, ___internal_method);
}
inline void GlobalNamespace::CommandBufferGrabPass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGrabPass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CommandBufferGrabPass* GlobalNamespace::CommandBufferGrabPass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CommandBufferGrabPass*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBufferGrabPass::CommandBufferGrabPass() {}
