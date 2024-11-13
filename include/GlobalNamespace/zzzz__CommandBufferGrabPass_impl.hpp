#pragma once
// IWYU pragma private; include "GlobalNamespace/CommandBufferGrabPass.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::GlobalNamespace::CommandBufferGrabPass::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x401e478;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass.CamerasDict
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* (::GlobalNamespace::CommandBufferGrabPass::*)()>(
        &::GlobalNamespace::CommandBufferGrabPass::CamerasDict)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x401e664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass.CommandBufferCameraEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CameraEvent (::GlobalNamespace::CommandBufferGrabPass::*)()>(
    &::GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401e6bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CommandBufferGrabPass::*)()>(&::GlobalNamespace::CommandBufferGrabPass::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x401e6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textureName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferGrabPass::getStaticF__cameras() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*, "_cameras",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get>();
}
inline ::UnityEngine::Rendering::CommandBuffer* GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer(::UnityEngine::Camera* camera) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*, false>(this, ___internal_method, camera);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferGrabPass::CamerasDict() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CameraEvent, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CommandBufferGrabPass* GlobalNamespace::CommandBufferGrabPass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CommandBufferGrabPass*>());
}
inline void GlobalNamespace::CommandBufferGrabPass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBufferGrabPass::CommandBufferGrabPass() {}
