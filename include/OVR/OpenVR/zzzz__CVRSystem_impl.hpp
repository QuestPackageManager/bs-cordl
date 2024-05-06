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
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___PollNextEventPacked._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__CVRSystem___PollNextEventPacked::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__CVRSystem___PollNextEventPacked::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bc57d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___PollNextEventPacked.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__CVRSystem___PollNextEventPacked::*)(ByRef<::OVR::OpenVR::VREvent_t_Packed>, uint32_t)>(
    &::OVR::OpenVR::__CVRSystem___PollNextEventPacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc58a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___PollNextEventPacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__CVRSystem___PollNextEventPacked::*)(ByRef<::OVR::OpenVR::VREvent_t_Packed>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__CVRSystem___PollNextEventPacked::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2bc58bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___PollNextEventPacked.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__CVRSystem___PollNextEventPacked::*)(
    ByRef<::OVR::OpenVR::VREvent_t_Packed>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__CVRSystem___PollNextEventPacked::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc5974;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__CVRSystem___PollNextEventPacked* OVR::OpenVR::__CVRSystem___PollNextEventPacked::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>(object, method));
}
inline void OVR::OpenVR::__CVRSystem___PollNextEventPacked::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__CVRSystem___PollNextEventPacked::Invoke(ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::__CVRSystem___PollNextEventPacked::BeginInvoke(ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::__CVRSystem___PollNextEventPacked::EndInvoke(ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__CVRSystem___PollNextEventPacked::__CVRSystem___PollNextEventPacked() {}
constexpr ::OVR::OpenVR::__IVRSystem___PollNextEvent*& OVR::OpenVR::__CVRSystem__PollNextEventUnion::__cordl_internal_get_pPollNextEvent() {
  return this->___pPollNextEvent;
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSystem___PollNextEvent*> const& OVR::OpenVR::__CVRSystem__PollNextEventUnion::__cordl_internal_get_pPollNextEvent() const {
  return this->___pPollNextEvent;
}
constexpr void OVR::OpenVR::__CVRSystem__PollNextEventUnion::__cordl_internal_set_pPollNextEvent(::OVR::OpenVR::__IVRSystem___PollNextEvent* value) {
  this->___pPollNextEvent = value;
}
constexpr ::OVR::OpenVR::__CVRSystem___PollNextEventPacked*& OVR::OpenVR::__CVRSystem__PollNextEventUnion::__cordl_internal_get_pPollNextEventPacked() {
  return this->___pPollNextEventPacked;
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__CVRSystem___PollNextEventPacked*> const&
OVR::OpenVR::__CVRSystem__PollNextEventUnion::__cordl_internal_get_pPollNextEventPacked() const {
  return this->___pPollNextEventPacked;
}
constexpr void OVR::OpenVR::__CVRSystem__PollNextEventUnion::__cordl_internal_set_pPollNextEventPacked(::OVR::OpenVR::__CVRSystem___PollNextEventPacked* value) {
  this->___pPollNextEventPacked = value;
}
// Ctor Parameters [CppParam { name: "pPollNextEvent", ty: "::OVR::OpenVR::__IVRSystem___PollNextEvent*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "pPollNextEventPacked", ty:
// "::OVR::OpenVR::__CVRSystem___PollNextEventPacked*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::__CVRSystem__PollNextEventUnion::__CVRSystem__PollNextEventUnion(::OVR::OpenVR::__IVRSystem___PollNextEvent* pPollNextEvent,
                                                                                          ::OVR::OpenVR::__CVRSystem___PollNextEventPacked* pPollNextEventPacked) noexcept {
  this->pPollNextEvent = pPollNextEvent;
  this->pPollNextEventPacked = pPollNextEventPacked;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__CVRSystem__PollNextEventUnion::__CVRSystem__PollNextEventUnion() {}
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__CVRSystem___GetControllerStatePacked::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__CVRSystem___GetControllerStatePacked::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc59a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__CVRSystem___GetControllerStatePacked::*)(
    uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t)>(&::OVR::OpenVR::__CVRSystem___GetControllerStatePacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc5a64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked::*)(uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__CVRSystem___GetControllerStatePacked::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2bc5a78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__CVRSystem___GetControllerStatePacked::*)(
    ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__CVRSystem___GetControllerStatePacked::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc5b44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked* OVR::OpenVR::__CVRSystem___GetControllerStatePacked::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>(object, method));
}
inline void OVR::OpenVR::__CVRSystem___GetControllerStatePacked::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__CVRSystem___GetControllerStatePacked::Invoke(uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                        uint32_t unControllerStateSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__CVRSystem___GetControllerStatePacked::BeginInvoke(uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                                uint32_t unControllerStateSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object);
}
inline bool OVR::OpenVR::__CVRSystem___GetControllerStatePacked::EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pControllerState, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked::__CVRSystem___GetControllerStatePacked() {}
constexpr ::OVR::OpenVR::__IVRSystem___GetControllerState*& OVR::OpenVR::__CVRSystem__GetControllerStateUnion::__cordl_internal_get_pGetControllerState() {
  return this->___pGetControllerState;
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSystem___GetControllerState*> const&
OVR::OpenVR::__CVRSystem__GetControllerStateUnion::__cordl_internal_get_pGetControllerState() const {
  return this->___pGetControllerState;
}
constexpr void OVR::OpenVR::__CVRSystem__GetControllerStateUnion::__cordl_internal_set_pGetControllerState(::OVR::OpenVR::__IVRSystem___GetControllerState* value) {
  this->___pGetControllerState = value;
}
constexpr ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*& OVR::OpenVR::__CVRSystem__GetControllerStateUnion::__cordl_internal_get_pGetControllerStatePacked() {
  return this->___pGetControllerStatePacked;
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*> const&
OVR::OpenVR::__CVRSystem__GetControllerStateUnion::__cordl_internal_get_pGetControllerStatePacked() const {
  return this->___pGetControllerStatePacked;
}
constexpr void OVR::OpenVR::__CVRSystem__GetControllerStateUnion::__cordl_internal_set_pGetControllerStatePacked(::OVR::OpenVR::__CVRSystem___GetControllerStatePacked* value) {
  this->___pGetControllerStatePacked = value;
}
// Ctor Parameters [CppParam { name: "pGetControllerState", ty: "::OVR::OpenVR::__IVRSystem___GetControllerState*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "pGetControllerStatePacked", ty: "::OVR::OpenVR::__CVRSystem___GetControllerStatePacked*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::__CVRSystem__GetControllerStateUnion::__CVRSystem__GetControllerStateUnion(::OVR::OpenVR::__IVRSystem___GetControllerState* pGetControllerState,
                                                                                                    ::OVR::OpenVR::__CVRSystem___GetControllerStatePacked* pGetControllerStatePacked) noexcept {
  this->pGetControllerState = pGetControllerState;
  this->pGetControllerStatePacked = pGetControllerStatePacked;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__CVRSystem__GetControllerStateUnion::__CVRSystem__GetControllerStateUnion() {}
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc5b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(
    &::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bc5c34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::*)(::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t,
                                                                      ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::BeginInvoke)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2bc5c48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::*)(
    ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2bc5d7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked* OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>(object, method));
}
inline void OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                                ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize,
                                                                                ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                                                        ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                                        uint32_t unControllerStateSize, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose,
                                                                             callback, object);
}
inline bool OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                   ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pControllerState, pTrackedDevicePose, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked::__CVRSystem___GetControllerStateWithPosePacked() {}
constexpr ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*& OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPose() {
  return this->___pGetControllerStateWithPose;
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*> const&
OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPose() const {
  return this->___pGetControllerStateWithPose;
}
constexpr void OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion::__cordl_internal_set_pGetControllerStateWithPose(::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* value) {
  this->___pGetControllerStateWithPose = value;
}
constexpr ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*& OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPosePacked() {
  return this->___pGetControllerStateWithPosePacked;
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*> const&
OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPosePacked() const {
  return this->___pGetControllerStateWithPosePacked;
}
constexpr void OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion::__cordl_internal_set_pGetControllerStateWithPosePacked(::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked* value) {
  this->___pGetControllerStateWithPosePacked = value;
}
// Ctor Parameters [CppParam { name: "pGetControllerStateWithPose", ty: "::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "pGetControllerStateWithPosePacked", ty: "::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion::__CVRSystem__GetControllerStateWithPoseUnion(
    ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* pGetControllerStateWithPose, ::OVR::OpenVR::__CVRSystem___GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked) noexcept {
  this->pGetControllerStateWithPose = pGetControllerStateWithPose;
  this->pGetControllerStateWithPosePacked = pGetControllerStateWithPosePacked;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__CVRSystem__GetControllerStateWithPoseUnion::__CVRSystem__GetControllerStateWithPoseUnion() {}
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(void*)>(&::OVR::OpenVR::CVRSystem::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2bc488c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetRecommendedRenderTargetSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(ByRef<uint32_t>, ByRef<uint32_t>)>(
    &::OVR::OpenVR::CVRSystem::GetRecommendedRenderTargetSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc49a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(),
                                                                               "GetRecommendedRenderTargetSize", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetProjectionMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix44_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, float_t, float_t)>(
    &::OVR::OpenVR::CVRSystem::GetProjectionMatrix)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bc49cc;

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
    static_cast<void (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&::OVR::OpenVR::CVRSystem::GetProjectionRaw)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2bc4a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetProjectionRaw", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ComputeDistortion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, float_t, float_t, ByRef<::OVR::OpenVR::DistortionCoordinates_t>)>(&::OVR::OpenVR::CVRSystem::ComputeDistortion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ComputeDistortion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::DistortionCoordinates_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetEyeToHeadTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye)>(
    &::OVR::OpenVR::CVRSystem::GetEyeToHeadTransform)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bc4a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetEyeToHeadTransform", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetTimeSinceLastVsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(ByRef<float_t>, ByRef<uint64_t>)>(
    &::OVR::OpenVR::CVRSystem::GetTimeSinceLastVsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bc4ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetTimeSinceLastVsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetD3D9AdapterIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::GetD3D9AdapterIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetD3D9AdapterIndex",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetDXGIOutputInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(ByRef<int32_t>)>(&::OVR::OpenVR::CVRSystem::GetDXGIOutputInfo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc4b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetDXGIOutputInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetOutputDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(ByRef<uint64_t>, ::OVR::OpenVR::ETextureType, void*)>(
    &::OVR::OpenVR::CVRSystem::GetOutputDevice)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bc4b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetOutputDevice", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETextureType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.IsDisplayOnDesktop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::IsDisplayOnDesktop)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4b54;

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
  constexpr static std::size_t addrs = 0x2bc4b78;

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
  constexpr static std::size_t addrs = 0x2bc4ba0;

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
  constexpr static std::size_t addrs = 0x2bc4bcc;

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
  constexpr static std::size_t addrs = 0x2bc4bf0;

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
  constexpr static std::size_t addrs = 0x2bc4c38;

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
  constexpr static std::size_t addrs = 0x2bc4c80;

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
  constexpr static std::size_t addrs = 0x2bc4cb0;

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
    ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVRSystem::ApplyTransform)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ApplyTransform", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetTrackedDeviceIndexForControllerRole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackedControllerRole)>(
    &::OVR::OpenVR::CVRSystem::GetTrackedDeviceIndexForControllerRole)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4cf8;

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
  constexpr static std::size_t addrs = 0x2bc4d1c;

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
  constexpr static std::size_t addrs = 0x2bc4d40;

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
  constexpr static std::size_t addrs = 0x2bc4d64;

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
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetBoolTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetBoolTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetFloatTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetFloatTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetFloatTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetInt32TrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetInt32TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetInt32TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetUint64TrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetUint64TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetUint64TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetMatrix34TrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetMatrix34TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bc4e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetMatrix34TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetArrayTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, void*, uint32_t, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetArrayTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetArrayTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetStringTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(
        &::OVR::OpenVR::CVRSystem::GetStringTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc4e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetStringTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetPropErrorNameFromEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackedPropertyError)>(
    &::OVR::OpenVR::CVRSystem::GetPropErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc4ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetPropErrorNameFromEnum", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedPropertyError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.PollNextEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(ByRef<::OVR::OpenVR::VREvent_t>, uint32_t)>(
    &::OVR::OpenVR::CVRSystem::PollNextEvent)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2bc4f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "PollNextEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.PollNextEventWithPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::CVRSystem::PollNextEventWithPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc50c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "PollNextEventWithPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetEventTypeNameFromEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREventType)>(
    &::OVR::OpenVR::CVRSystem::GetEventTypeNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc50e4;

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
  constexpr static std::size_t addrs = 0x2bc5168;

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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t)>(
    &::OVR::OpenVR::CVRSystem::GetControllerState)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2bc518c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRControllerState_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetControllerStateWithPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ByRef<::OVR::OpenVR::VRControllerState_t>, uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(
        &::OVR::OpenVR::CVRSystem::GetControllerStateWithPose)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2bc53b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerStateWithPose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(uint32_t, uint32_t, uint16_t)>(&::OVR::OpenVR::CVRSystem::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bc5584;

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
  constexpr static std::size_t addrs = 0x2bc55a8;

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
  constexpr static std::size_t addrs = 0x2bc562c;

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
  constexpr static std::size_t addrs = 0x2bc56b0;

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
  constexpr static std::size_t addrs = 0x2bc56d4;

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
  constexpr static std::size_t addrs = 0x2bc56f8;

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
  constexpr static std::size_t addrs = 0x2bc571c;

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
  constexpr static std::size_t addrs = 0x2bc5740;

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
  constexpr static std::size_t addrs = 0x2bc5764;

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
  constexpr static std::size_t addrs = 0x2bc5788;

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
  constexpr static std::size_t addrs = 0x2bc57ac;

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
inline ::OVR::OpenVR::CVRSystem* OVR::OpenVR::CVRSystem::New_ctor(void* pInterface) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRSystem*>(pInterface));
}
inline void OVR::OpenVR::CVRSystem::_ctor(void* pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline void OVR::OpenVR::CVRSystem::GetRecommendedRenderTargetSize(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetRecommendedRenderTargetSize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnWidth, pnHeight);
}
inline ::OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::CVRSystem::GetProjectionMatrix(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetProjectionMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix44_t, false>(this, ___internal_method, eEye, fNearZ, fFarZ);
}
inline void OVR::OpenVR::CVRSystem::GetProjectionRaw(::OVR::OpenVR::EVREye eEye, ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetProjectionRaw", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eEye, pfLeft, pfRight, pfTop, pfBottom);
}
inline bool OVR::OpenVR::CVRSystem::ComputeDistortion(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ComputeDistortion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::DistortionCoordinates_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eEye, fU, fV, pDistortionCoordinates);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetEyeToHeadTransform(::OVR::OpenVR::EVREye eEye) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetEyeToHeadTransform", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, eEye);
}
inline bool OVR::OpenVR::CVRSystem::GetTimeSinceLastVsync(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetTimeSinceLastVsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter);
}
inline int32_t OVR::OpenVR::CVRSystem::GetD3D9AdapterIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetD3D9AdapterIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRSystem::GetDXGIOutputInfo(ByRef<int32_t> pnAdapterIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetDXGIOutputInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnAdapterIndex);
}
inline void OVR::OpenVR::CVRSystem::GetOutputDevice(ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, void* pInstance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetOutputDevice", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETextureType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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
inline void OVR::OpenVR::CVRSystem::ApplyTransform(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                   ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "ApplyTransform", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
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
inline bool OVR::OpenVR::CVRSystem::GetBoolTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetBoolTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline float_t OVR::OpenVR::CVRSystem::GetFloatTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetFloatTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline int32_t OVR::OpenVR::CVRSystem::GetInt32TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetInt32TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline uint64_t OVR::OpenVR::CVRSystem::GetUint64TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetUint64TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetMatrix34TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                             ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetMatrix34TrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t, false>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline uint32_t OVR::OpenVR::CVRSystem::GetArrayTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, void* pBuffer, uint32_t unBufferSize,
                                                                      ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetArrayTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
}
inline uint32_t OVR::OpenVR::CVRSystem::GetStringTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue,
                                                                       uint32_t unBufferSize, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetStringTrackedDeviceProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::ETrackedPropertyError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}
inline ::StringW OVR::OpenVR::CVRSystem::GetPropErrorNameFromEnum(::OVR::OpenVR::ETrackedPropertyError error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetPropErrorNameFromEnum", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedPropertyError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, error);
}
inline bool OVR::OpenVR::CVRSystem::PollNextEvent(ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "PollNextEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, uncbVREvent);
}
inline bool OVR::OpenVR::CVRSystem::PollNextEventWithPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                                          ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "PollNextEventWithPose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get() })));
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
inline bool OVR::OpenVR::CVRSystem::GetControllerState(uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerState", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRControllerState_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
inline bool OVR::OpenVR::CVRSystem::GetControllerStateWithPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                               ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                                               ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRSystem*>::get(), "GetControllerStateWithPose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get() })));
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
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSystem::CVRSystem() {}
