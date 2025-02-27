#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSystem.hpp"
#include "OVR/OpenVR/zzzz__IVRSystem_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__CVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__DistortionCoordinates_t_def.hpp"
#include "OVR/OpenVR/zzzz__EDeviceActivityLevel_def.hpp"
#include "OVR/OpenVR/zzzz__EHiddenAreaMeshType_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedControllerRole_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceClass_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedPropertyError_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRButtonId_def.hpp"
#include "OVR/OpenVR/zzzz__EVRControllerAxisType_def.hpp"
#include "OVR/OpenVR/zzzz__EVREventType_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__EVRFirmwareError_def.hpp"
#include "OVR/OpenVR/zzzz__HiddenAreaMesh_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__PollNextEventPacked._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem__PollNextEventPacked::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRSystem__PollNextEventPacked::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x407f878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__PollNextEventPacked.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem__PollNextEventPacked::*)(::ByRef<::OVR::OpenVR::VREvent_t_Packed>, uint32_t)>(
    &::OVR::OpenVR::CVRSystem__PollNextEventPacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x407f918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__PollNextEventPacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::CVRSystem__PollNextEventPacked::*)(::ByRef<::OVR::OpenVR::VREvent_t_Packed>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::CVRSystem__PollNextEventPacked::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x407f92c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__PollNextEventPacked.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem__PollNextEventPacked::*)(
    ::ByRef<::OVR::OpenVR::VREvent_t_Packed>, ::System::IAsyncResult*)>(&::OVR::OpenVR::CVRSystem__PollNextEventPacked::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x407f9e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::CVRSystem__PollNextEventPacked::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::CVRSystem__PollNextEventPacked::Invoke(::ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::CVRSystem__PollNextEventPacked::BeginInvoke(::ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::CVRSystem__PollNextEventPacked::EndInvoke(::ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, result);
}
inline ::OVR::OpenVR::CVRSystem__PollNextEventPacked* OVR::OpenVR::CVRSystem__PollNextEventPacked::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSystem__PollNextEventPacked::CVRSystem__PollNextEventPacked() {}
constexpr ::OVR::OpenVR::IVRSystem__PollNextEvent*& OVR::OpenVR::CVRSystem_PollNextEventUnion::__cordl_internal_get_pPollNextEvent() {
  return this->___pPollNextEvent;
}
constexpr ::OVR::OpenVR::IVRSystem__PollNextEvent* const& OVR::OpenVR::CVRSystem_PollNextEventUnion::__cordl_internal_get_pPollNextEvent() const {
  return this->___pPollNextEvent;
}
constexpr void OVR::OpenVR::CVRSystem_PollNextEventUnion::__cordl_internal_set_pPollNextEvent(::OVR::OpenVR::IVRSystem__PollNextEvent* value) {
  this->___pPollNextEvent = value;
}
constexpr ::OVR::OpenVR::CVRSystem__PollNextEventPacked*& OVR::OpenVR::CVRSystem_PollNextEventUnion::__cordl_internal_get_pPollNextEventPacked() {
  return this->___pPollNextEventPacked;
}
constexpr ::OVR::OpenVR::CVRSystem__PollNextEventPacked* const& OVR::OpenVR::CVRSystem_PollNextEventUnion::__cordl_internal_get_pPollNextEventPacked() const {
  return this->___pPollNextEventPacked;
}
constexpr void OVR::OpenVR::CVRSystem_PollNextEventUnion::__cordl_internal_set_pPollNextEventPacked(::OVR::OpenVR::CVRSystem__PollNextEventPacked* value) {
  this->___pPollNextEventPacked = value;
}
// Ctor Parameters [CppParam { name: "pPollNextEvent", ty: "::OVR::OpenVR::IVRSystem__PollNextEvent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "pPollNextEventPacked", ty:
// "::OVR::OpenVR::CVRSystem__PollNextEventPacked*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::CVRSystem_PollNextEventUnion::CVRSystem_PollNextEventUnion(::OVR::OpenVR::IVRSystem__PollNextEvent* pPollNextEvent,
                                                                                    ::OVR::OpenVR::CVRSystem__PollNextEventPacked* pPollNextEventPacked) noexcept {
  this->pPollNextEvent = pPollNextEvent;
  this->pPollNextEventPacked = pPollNextEventPacked;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSystem_PollNextEventUnion::CVRSystem_PollNextEventUnion() {}
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStatePacked._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem__GetControllerStatePacked::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStatePacked::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x407fa10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStatePacked.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem__GetControllerStatePacked::*)(
    uint32_t, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t)>(&::OVR::OpenVR::CVRSystem__GetControllerStatePacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x407fa9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStatePacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::CVRSystem__GetControllerStatePacked::*)(uint32_t, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStatePacked::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x407fab0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStatePacked.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem__GetControllerStatePacked::*)(
    ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ::System::IAsyncResult*)>(&::OVR::OpenVR::CVRSystem__GetControllerStatePacked::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x407fb80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::CVRSystem__GetControllerStatePacked::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::CVRSystem__GetControllerStatePacked::Invoke(uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                     uint32_t unControllerStateSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::CVRSystem__GetControllerStatePacked::BeginInvoke(uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                             uint32_t unControllerStateSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object);
}
inline bool OVR::OpenVR::CVRSystem__GetControllerStatePacked::EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pControllerState, result);
}
inline ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* OVR::OpenVR::CVRSystem__GetControllerStatePacked::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSystem__GetControllerStatePacked::CVRSystem__GetControllerStatePacked() {}
constexpr ::OVR::OpenVR::IVRSystem__GetControllerState*& OVR::OpenVR::CVRSystem_GetControllerStateUnion::__cordl_internal_get_pGetControllerState() {
  return this->___pGetControllerState;
}
constexpr ::OVR::OpenVR::IVRSystem__GetControllerState* const& OVR::OpenVR::CVRSystem_GetControllerStateUnion::__cordl_internal_get_pGetControllerState() const {
  return this->___pGetControllerState;
}
constexpr void OVR::OpenVR::CVRSystem_GetControllerStateUnion::__cordl_internal_set_pGetControllerState(::OVR::OpenVR::IVRSystem__GetControllerState* value) {
  this->___pGetControllerState = value;
}
constexpr ::OVR::OpenVR::CVRSystem__GetControllerStatePacked*& OVR::OpenVR::CVRSystem_GetControllerStateUnion::__cordl_internal_get_pGetControllerStatePacked() {
  return this->___pGetControllerStatePacked;
}
constexpr ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* const& OVR::OpenVR::CVRSystem_GetControllerStateUnion::__cordl_internal_get_pGetControllerStatePacked() const {
  return this->___pGetControllerStatePacked;
}
constexpr void OVR::OpenVR::CVRSystem_GetControllerStateUnion::__cordl_internal_set_pGetControllerStatePacked(::OVR::OpenVR::CVRSystem__GetControllerStatePacked* value) {
  this->___pGetControllerStatePacked = value;
}
// Ctor Parameters [CppParam { name: "pGetControllerState", ty: "::OVR::OpenVR::IVRSystem__GetControllerState*", modifiers: "", def_value: Some("{}") }, CppParam { name: "pGetControllerStatePacked",
// ty: "::OVR::OpenVR::CVRSystem__GetControllerStatePacked*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::CVRSystem_GetControllerStateUnion::CVRSystem_GetControllerStateUnion(::OVR::OpenVR::IVRSystem__GetControllerState* pGetControllerState,
                                                                                              ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* pGetControllerStatePacked) noexcept {
  this->pGetControllerState = pGetControllerState;
  this->pGetControllerStatePacked = pGetControllerStatePacked;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSystem_GetControllerStateUnion::CVRSystem_GetControllerStateUnion() {}
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x407fbac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x407fc38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::*)(::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t,
                                                                   ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::BeginInvoke)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x407fc4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::*)(
    ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x407fd88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                             ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize,
                                                                             ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                                                     ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                                     uint32_t unControllerStateSize, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose,
                                                                             callback, object);
}
inline bool OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pControllerState, pTrackedDevicePose, result);
}
inline ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::CVRSystem__GetControllerStateWithPosePacked() {}
constexpr ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*& OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPose() {
  return this->___pGetControllerStateWithPose;
}
constexpr ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* const& OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPose() const {
  return this->___pGetControllerStateWithPose;
}
constexpr void OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_set_pGetControllerStateWithPose(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* value) {
  this->___pGetControllerStateWithPose = value;
}
constexpr ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*& OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPosePacked() {
  return this->___pGetControllerStateWithPosePacked;
}
constexpr ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* const& OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPosePacked() const {
  return this->___pGetControllerStateWithPosePacked;
}
constexpr void OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_set_pGetControllerStateWithPosePacked(::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* value) {
  this->___pGetControllerStateWithPosePacked = value;
}
// Ctor Parameters [CppParam { name: "pGetControllerStateWithPose", ty: "::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "pGetControllerStateWithPosePacked", ty: "::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion::CVRSystem_GetControllerStateWithPoseUnion(
    ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* pGetControllerStateWithPose, ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked) noexcept {
  this->pGetControllerStateWithPose = pGetControllerStateWithPose;
  this->pGetControllerStateWithPosePacked = pGetControllerStateWithPosePacked;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSystem_GetControllerStateWithPoseUnion::CVRSystem_GetControllerStateWithPoseUnion() {}
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRSystem::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x407e934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetRecommendedRenderTargetSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::ByRef<uint32_t>, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::CVRSystem::GetRecommendedRenderTargetSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x407ea48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(),
                                                                               "GetRecommendedRenderTargetSize", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetProjectionMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix44_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, float_t, float_t)>(
    &::OVR::OpenVR::CVRSystem::GetProjectionMatrix)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x407ea74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetProjectionMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetProjectionRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>)>(&::OVR::OpenVR::CVRSystem::GetProjectionRaw)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x407eabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetProjectionRaw", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ComputeDistortion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, float_t, float_t, ::ByRef<::OVR::OpenVR::DistortionCoordinates_t>)>(&::OVR::OpenVR::CVRSystem::ComputeDistortion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407eaf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ComputeDistortion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::DistortionCoordinates_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetEyeToHeadTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye)>(
    &::OVR::OpenVR::CVRSystem::GetEyeToHeadTransform)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x407eb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetEyeToHeadTransform", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetTimeSinceLastVsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(::ByRef<float_t>, ::ByRef<uint64_t>)>(
    &::OVR::OpenVR::CVRSystem::GetTimeSinceLastVsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x407eb5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetTimeSinceLastVsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetD3D9AdapterIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::GetD3D9AdapterIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407eb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetD3D9AdapterIndex",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetDXGIOutputInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::ByRef<int32_t>)>(&::OVR::OpenVR::CVRSystem::GetDXGIOutputInfo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x407ebac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetDXGIOutputInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetOutputDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::ByRef<uint64_t>, ::OVR::OpenVR::ETextureType, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRSystem::GetOutputDevice)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x407ebd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetOutputDevice", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETextureType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.IsDisplayOnDesktop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::IsDisplayOnDesktop)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ebfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "IsDisplayOnDesktop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.SetDisplayVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(bool)>(&::OVR::OpenVR::CVRSystem::SetDisplayVisibility)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x407ec20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "SetDisplayVisibility",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetDeviceToAbsoluteTrackingPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>)>(
        &::OVR::OpenVR::CVRSystem::GetDeviceToAbsoluteTrackingPose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x407ec48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetDeviceToAbsoluteTrackingPose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ResetSeatedZeroPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::ResetSeatedZeroPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ec74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ResetSeatedZeroPose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetSeatedZeroPoseToStandingAbsoluteTrackingPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::CVRSystem::*)()>(
    &::OVR::OpenVR::CVRSystem::GetSeatedZeroPoseToStandingAbsoluteTrackingPose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x407ec98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetSeatedZeroPoseToStandingAbsoluteTrackingPose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetRawZeroPoseToStandingAbsoluteTrackingPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::CVRSystem::*)()>(
    &::OVR::OpenVR::CVRSystem::GetRawZeroPoseToStandingAbsoluteTrackingPose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x407ece0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetRawZeroPoseToStandingAbsoluteTrackingPose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetSortedTrackedDeviceIndicesOfClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackedDeviceClass, ::ArrayW<uint32_t, ::Array<uint32_t>*>,
                                                                                                                         uint32_t)>(&::OVR::OpenVR::CVRSystem::GetSortedTrackedDeviceIndicesOfClass)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x407ed28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetSortedTrackedDeviceIndicesOfClass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceClass>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetTrackedDeviceActivityLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EDeviceActivityLevel (::OVR::OpenVR::CVRSystem::*)(uint32_t)>(
    &::OVR::OpenVR::CVRSystem::GetTrackedDeviceActivityLevel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ed58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetTrackedDeviceActivityLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ApplyTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(
    ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVRSystem::ApplyTransform)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ed7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ApplyTransform", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetTrackedDeviceIndexForControllerRole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackedControllerRole)>(
    &::OVR::OpenVR::CVRSystem::GetTrackedDeviceIndexForControllerRole)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407eda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetTrackedDeviceIndexForControllerRole", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedControllerRole>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetControllerRoleForTrackedDeviceIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedControllerRole (::OVR::OpenVR::CVRSystem::*)(uint32_t)>(
    &::OVR::OpenVR::CVRSystem::GetControllerRoleForTrackedDeviceIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407edc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerRoleForTrackedDeviceIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetTrackedDeviceClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedDeviceClass (::OVR::OpenVR::CVRSystem::*)(uint32_t)>(
    &::OVR::OpenVR::CVRSystem::GetTrackedDeviceClass)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ede8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetTrackedDeviceClass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.IsTrackedDeviceConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(uint32_t)>(&::OVR::OpenVR::CVRSystem::IsTrackedDeviceConnected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ee0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "IsTrackedDeviceConnected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetBoolTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetBoolTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ee30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetBoolTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetFloatTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetFloatTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ee54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetFloatTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetInt32TrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetInt32TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ee78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetInt32TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetUint64TrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetUint64TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ee9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetUint64TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetMatrix34TrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetMatrix34TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x407eec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetMatrix34TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetArrayTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, ::System::IntPtr, uint32_t, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetArrayTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ef08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetArrayTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetStringTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(
        &::OVR::OpenVR::CVRSystem::GetStringTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407ef2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetStringTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetPropErrorNameFromEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackedPropertyError)>(
    &::OVR::OpenVR::CVRSystem::GetPropErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x407ef50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetPropErrorNameFromEnum", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedPropertyError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.PollNextEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(::ByRef<::OVR::OpenVR::VREvent_t>, uint32_t)>(
    &::OVR::OpenVR::CVRSystem::PollNextEvent)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x407efd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "PollNextEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VREvent_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.PollNextEventWithPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, ::ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::CVRSystem::PollNextEventWithPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "PollNextEventWithPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VREvent_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetEventTypeNameFromEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREventType)>(
    &::OVR::OpenVR::CVRSystem::GetEventTypeNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x407f18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetEventTypeNameFromEnum", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetHiddenAreaMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::HiddenAreaMesh_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, ::OVR::OpenVR::EHiddenAreaMeshType)>(&::OVR::OpenVR::CVRSystem::GetHiddenAreaMesh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetHiddenAreaMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EHiddenAreaMeshType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetControllerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t)>(
    &::OVR::OpenVR::CVRSystem::GetControllerState)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x407f234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRControllerState_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetControllerStateWithPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ::ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(
    &::OVR::OpenVR::CVRSystem::GetControllerStateWithPose)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x407f460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerStateWithPose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(uint32_t, uint32_t, uint16_t)>(&::OVR::OpenVR::CVRSystem::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "TriggerHapticPulse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetButtonIdNameFromEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVRButtonId)>(
    &::OVR::OpenVR::CVRSystem::GetButtonIdNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x407f650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetButtonIdNameFromEnum", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRButtonId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetControllerAxisTypeNameFromEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVRControllerAxisType)>(
    &::OVR::OpenVR::CVRSystem::GetControllerAxisTypeNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x407f6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerAxisTypeNameFromEnum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRControllerAxisType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.IsInputAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::IsInputAvailable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "IsInputAvailable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.IsSteamVRDrawingControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::IsSteamVRDrawingControllers)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "IsSteamVRDrawingControllers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ShouldApplicationPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::ShouldApplicationPause)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ShouldApplicationPause",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ShouldApplicationReduceRenderingWork
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::ShouldApplicationReduceRenderingWork)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ShouldApplicationReduceRenderingWork",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.DriverDebugRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRSystem::DriverDebugRequest)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "DriverDebugRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.PerformFirmwareUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRFirmwareError (::OVR::OpenVR::CVRSystem::*)(uint32_t)>(
    &::OVR::OpenVR::CVRSystem::PerformFirmwareUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "PerformFirmwareUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.AcknowledgeQuit_Exiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::AcknowledgeQuit_Exiting)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "AcknowledgeQuit_Exiting",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.AcknowledgeQuit_UserPrompt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::AcknowledgeQuit_UserPrompt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407f854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "AcknowledgeQuit_UserPrompt",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRSystem& OVR::OpenVR::CVRSystem::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRSystem const& OVR::OpenVR::CVRSystem::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRSystem::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRSystem value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRSystem::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline void OVR::OpenVR::CVRSystem::GetRecommendedRenderTargetSize(::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetRecommendedRenderTargetSize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnWidth, pnHeight);
}
inline ::OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::CVRSystem::GetProjectionMatrix(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetProjectionMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix44_t, false>(this, ___internal_method, eEye, fNearZ, fFarZ);
}
inline void OVR::OpenVR::CVRSystem::GetProjectionRaw(::OVR::OpenVR::EVREye eEye, ::ByRef<float_t> pfLeft, ::ByRef<float_t> pfRight, ::ByRef<float_t> pfTop, ::ByRef<float_t> pfBottom) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetProjectionRaw", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eEye, pfLeft, pfRight, pfTop, pfBottom);
}
inline bool OVR::OpenVR::CVRSystem::ComputeDistortion(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ::ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ComputeDistortion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::DistortionCoordinates_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eEye, fU, fV, pDistortionCoordinates);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetEyeToHeadTransform(::OVR::OpenVR::EVREye eEye) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetEyeToHeadTransform", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, eEye);
}
inline bool OVR::OpenVR::CVRSystem::GetTimeSinceLastVsync(::ByRef<float_t> pfSecondsSinceLastVsync, ::ByRef<uint64_t> pulFrameCounter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetTimeSinceLastVsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter);
}
inline int32_t OVR::OpenVR::CVRSystem::GetD3D9AdapterIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetD3D9AdapterIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRSystem::GetDXGIOutputInfo(::ByRef<int32_t> pnAdapterIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetDXGIOutputInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnAdapterIndex);
}
inline void OVR::OpenVR::CVRSystem::GetOutputDevice(::ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetOutputDevice", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETextureType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnDevice, textureType, pInstance);
}
inline bool OVR::OpenVR::CVRSystem::IsDisplayOnDesktop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "IsDisplayOnDesktop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRSystem::SetDisplayVisibility(bool bIsVisibleOnDesktop) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "SetDisplayVisibility",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bIsVisibleOnDesktop);
}
inline void OVR::OpenVR::CVRSystem::GetDeviceToAbsoluteTrackingPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                                                    ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pTrackedDevicePoseArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetDeviceToAbsoluteTrackingPose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray);
}
inline void OVR::OpenVR::CVRSystem::ResetSeatedZeroPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ResetSeatedZeroPose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetSeatedZeroPoseToStandingAbsoluteTrackingPose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetSeatedZeroPoseToStandingAbsoluteTrackingPose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetRawZeroPoseToStandingAbsoluteTrackingPose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetRawZeroPoseToStandingAbsoluteTrackingPose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVRSystem::GetSortedTrackedDeviceIndicesOfClass(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::ArrayW<uint32_t, ::Array<uint32_t>*> punTrackedDeviceIndexArray,
                                                                             uint32_t unRelativeToTrackedDeviceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetSortedTrackedDeviceIndicesOfClass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceClass>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, eTrackedDeviceClass, punTrackedDeviceIndexArray, unRelativeToTrackedDeviceIndex);
}
inline ::OVR::OpenVR::EDeviceActivityLevel OVR::OpenVR::CVRSystem::GetTrackedDeviceActivityLevel(uint32_t unDeviceId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetTrackedDeviceActivityLevel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EDeviceActivityLevel, false>(this, ___internal_method, unDeviceId);
}
inline void OVR::OpenVR::CVRSystem::ApplyTransform(::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                   ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ApplyTransform", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform);
}
inline uint32_t OVR::OpenVR::CVRSystem::GetTrackedDeviceIndexForControllerRole(::OVR::OpenVR::ETrackedControllerRole unDeviceType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetTrackedDeviceIndexForControllerRole", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedControllerRole>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceType);
}
inline ::OVR::OpenVR::ETrackedControllerRole OVR::OpenVR::CVRSystem::GetControllerRoleForTrackedDeviceIndex(uint32_t unDeviceIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerRoleForTrackedDeviceIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedControllerRole, false>(this, ___internal_method, unDeviceIndex);
}
inline ::OVR::OpenVR::ETrackedDeviceClass OVR::OpenVR::CVRSystem::GetTrackedDeviceClass(uint32_t unDeviceIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetTrackedDeviceClass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedDeviceClass, false>(this, ___internal_method, unDeviceIndex);
}
inline bool OVR::OpenVR::CVRSystem::IsTrackedDeviceConnected(uint32_t unDeviceIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "IsTrackedDeviceConnected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unDeviceIndex);
}
inline bool OVR::OpenVR::CVRSystem::GetBoolTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetBoolTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline float_t OVR::OpenVR::CVRSystem::GetFloatTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetFloatTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline int32_t OVR::OpenVR::CVRSystem::GetInt32TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetInt32TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline uint64_t OVR::OpenVR::CVRSystem::GetUint64TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetUint64TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetMatrix34TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                             ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetMatrix34TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline uint32_t OVR::OpenVR::CVRSystem::GetArrayTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer,
                                                                      uint32_t unBufferSize, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetArrayTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
}
inline uint32_t OVR::OpenVR::CVRSystem::GetStringTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue,
                                                                       uint32_t unBufferSize, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetStringTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}
inline ::StringW OVR::OpenVR::CVRSystem::GetPropErrorNameFromEnum(::OVR::OpenVR::ETrackedPropertyError error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetPropErrorNameFromEnum", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedPropertyError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, error);
}
inline bool OVR::OpenVR::CVRSystem::PollNextEvent(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "PollNextEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VREvent_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, uncbVREvent);
}
inline bool OVR::OpenVR::CVRSystem::PollNextEventWithPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                                          ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "PollNextEventWithPose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VREvent_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}
inline ::StringW OVR::OpenVR::CVRSystem::GetEventTypeNameFromEnum(::OVR::OpenVR::EVREventType eType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetEventTypeNameFromEnum", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, eType);
}
inline ::OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::CVRSystem::GetHiddenAreaMesh(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetHiddenAreaMesh", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EHiddenAreaMeshType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HiddenAreaMesh_t, false>(this, ___internal_method, eEye, type);
}
inline bool OVR::OpenVR::CVRSystem::GetControllerState(uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerState", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRControllerState_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
inline bool OVR::OpenVR::CVRSystem::GetControllerStateWithPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                               ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                                               ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerStateWithPose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}
inline void OVR::OpenVR::CVRSystem::TriggerHapticPulse(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "TriggerHapticPulse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}
inline ::StringW OVR::OpenVR::CVRSystem::GetButtonIdNameFromEnum(::OVR::OpenVR::EVRButtonId eButtonId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetButtonIdNameFromEnum", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRButtonId>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, eButtonId);
}
inline ::StringW OVR::OpenVR::CVRSystem::GetControllerAxisTypeNameFromEnum(::OVR::OpenVR::EVRControllerAxisType eAxisType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerAxisTypeNameFromEnum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRControllerAxisType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, eAxisType);
}
inline bool OVR::OpenVR::CVRSystem::IsInputAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "IsInputAvailable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRSystem::IsSteamVRDrawingControllers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "IsSteamVRDrawingControllers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRSystem::ShouldApplicationPause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ShouldApplicationPause",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRSystem::ShouldApplicationReduceRenderingWork() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ShouldApplicationReduceRenderingWork",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVRSystem::DriverDebugRequest(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "DriverDebugRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}
inline ::OVR::OpenVR::EVRFirmwareError OVR::OpenVR::CVRSystem::PerformFirmwareUpdate(uint32_t unDeviceIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "PerformFirmwareUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRFirmwareError, false>(this, ___internal_method, unDeviceIndex);
}
inline void OVR::OpenVR::CVRSystem::AcknowledgeQuit_Exiting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "AcknowledgeQuit_Exiting",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRSystem::AcknowledgeQuit_UserPrompt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "AcknowledgeQuit_UserPrompt",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVR::OpenVR::CVRSystem* OVR::OpenVR::CVRSystem::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRSystem*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSystem::CVRSystem() {}
