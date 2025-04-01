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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CommandBuffer* (
    ::GlobalNamespace::CommandBufferBlurryScreenGrab::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::CommandBufferBlurryScreenGrab::CreateCommandBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x407bffc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferBlurryScreenGrab.CamerasDict
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* (::GlobalNamespace::CommandBufferBlurryScreenGrab::*)()>(
        &::GlobalNamespace::CommandBufferBlurryScreenGrab::CamerasDict)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x407c0f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferBlurryScreenGrab.CommandBufferCameraEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CameraEvent (::GlobalNamespace::CommandBufferBlurryScreenGrab::*)()>(
    &::GlobalNamespace::CommandBufferBlurryScreenGrab::CommandBufferCameraEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x407c150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferBlurryScreenGrab._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CommandBufferBlurryScreenGrab::*)()>(
    &::GlobalNamespace::CommandBufferBlurryScreenGrab::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x407c158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kawaseBlurRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferBlurryScreenGrab::getStaticF__cameras() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*, "_cameras",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get>();
}
inline ::UnityEngine::Rendering::CommandBuffer* GlobalNamespace::CommandBufferBlurryScreenGrab::CreateCommandBuffer(::UnityEngine::Camera* camera) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*, false>(this, ___internal_method, camera);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferBlurryScreenGrab::CamerasDict() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferBlurryScreenGrab::CommandBufferCameraEvent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CameraEvent, false>(this, ___internal_method);
}
inline void GlobalNamespace::CommandBufferBlurryScreenGrab::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferBlurryScreenGrab*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CommandBufferBlurryScreenGrab* GlobalNamespace::CommandBufferBlurryScreenGrab::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CommandBufferBlurryScreenGrab*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBufferBlurryScreenGrab::CommandBufferBlurryScreenGrab() {}
