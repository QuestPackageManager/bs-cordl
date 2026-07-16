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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem__PollNextEventPacked::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRSystem__PollNextEventPacked::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e41698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__PollNextEventPacked.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem__PollNextEventPacked::*)(::by_ref<::OVR::OpenVR::VREvent_t_Packed>, uint32_t)>(
    &::OVR::OpenVR::CVRSystem__PollNextEventPacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e41718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(), { ::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__PollNextEventPacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::CVRSystem__PollNextEventPacked::*)(::by_ref<::OVR::OpenVR::VREvent_t_Packed>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::CVRSystem__PollNextEventPacked::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e4172c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(), { ::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__PollNextEventPacked.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem__PollNextEventPacked::*)(::by_ref<::OVR::OpenVR::VREvent_t_Packed>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::CVRSystem__PollNextEventPacked::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e417d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(), { ::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::CVRSystem__PollNextEventPacked::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::CVRSystem__PollNextEventPacked::Invoke(::by_ref<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::CVRSystem__PollNextEventPacked::BeginInvoke(::by_ref<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::CVRSystem__PollNextEventPacked::EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t_Packed> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pEvent, result);
}
inline ::OVR::OpenVR::CVRSystem__PollNextEventPacked* OVR::OpenVR::CVRSystem__PollNextEventPacked::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRSystem__PollNextEventPacked*>(object, method));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem__GetControllerStatePacked::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStatePacked::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e417fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStatePacked.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem__GetControllerStatePacked::*)(uint32_t, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStatePacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e41868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(), { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStatePacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::CVRSystem__GetControllerStatePacked::*)(uint32_t, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>,
                                                                                                                                       uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStatePacked::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e4187c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(), { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStatePacked.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem__GetControllerStatePacked::*)(::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStatePacked::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4193c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(), { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::CVRSystem__GetControllerStatePacked::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::CVRSystem__GetControllerStatePacked::Invoke(uint32_t unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                     uint32_t unControllerStateSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::CVRSystem__GetControllerStatePacked::BeginInvoke(uint32_t unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                             uint32_t unControllerStateSize, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object);
}
inline bool OVR::OpenVR::CVRSystem__GetControllerStatePacked::EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pControllerState, result);
}
inline ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* OVR::OpenVR::CVRSystem__GetControllerStatePacked::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRSystem__GetControllerStatePacked*>(object, method));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e41960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e419cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::*)(::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>, uint32_t,
                                                                   ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e419e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::*)(::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>,
                                                                                                                            ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e41b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                             ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize,
                                                                             ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                                                                     ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                                     uint32_t unControllerStateSize, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose, callback,
                                                                      object);
}
inline bool OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pControllerState, pTrackedDevicePose, result);
}
inline ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*>(object, method));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRSystem::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e407e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetRecommendedRenderTargetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::OVR::OpenVR::CVRSystem::GetRecommendedRenderTargetSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e408e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetRecommendedRenderTargetSize", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix44_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, float_t, float_t)>(
    &::OVR::OpenVR::CVRSystem::GetProjectionMatrix)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e4090c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                                             { "GetProjectionMatrix", {}, { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetProjectionRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(
    &::OVR::OpenVR::CVRSystem::GetProjectionRaw)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e40954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetProjectionRaw",
                                                                            {},
                                                                            { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(),
                                                                              ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ComputeDistortion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, float_t, float_t, ::by_ref<::OVR::OpenVR::DistortionCoordinates_t>)>(
    &::OVR::OpenVR::CVRSystem::ComputeDistortion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "ComputeDistortion",
                                                                                                {},
                                                                                                { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                  ::i2c::type_of<::by_ref<::OVR::OpenVR::DistortionCoordinates_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetEyeToHeadTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye)>(&::OVR::OpenVR::CVRSystem::GetEyeToHeadTransform)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e409a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetEyeToHeadTransform", {}, { ::i2c::type_of<::OVR::OpenVR::EVREye>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetTimeSinceLastVsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(::by_ref<float_t>, ::by_ref<uint64_t>)>(&::OVR::OpenVR::CVRSystem::GetTimeSinceLastVsync)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e409ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetTimeSinceLastVsync", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetD3D9AdapterIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::GetD3D9AdapterIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetD3D9AdapterIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetDXGIOutputInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::by_ref<int32_t>)>(&::OVR::OpenVR::CVRSystem::GetDXGIOutputInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e40a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetDXGIOutputInfo", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetOutputDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::by_ref<uint64_t>, ::OVR::OpenVR::ETextureType, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRSystem::GetOutputDevice)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e40a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                         { "GetOutputDevice", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::OVR::OpenVR::ETextureType>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.IsDisplayOnDesktop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::IsDisplayOnDesktop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "IsDisplayOnDesktop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.SetDisplayVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(bool)>(&::OVR::OpenVR::CVRSystem::SetDisplayVisibility)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e40a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "SetDisplayVisibility", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetDeviceToAbsoluteTrackingPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackingUniverseOrigin, float_t, ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>)>(
    &::OVR::OpenVR::CVRSystem::GetDeviceToAbsoluteTrackingPose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e40ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetDeviceToAbsoluteTrackingPose",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ResetSeatedZeroPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::ResetSeatedZeroPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "ResetSeatedZeroPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetSeatedZeroPoseToStandingAbsoluteTrackingPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::GetSeatedZeroPoseToStandingAbsoluteTrackingPose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e40b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetSeatedZeroPoseToStandingAbsoluteTrackingPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetRawZeroPoseToStandingAbsoluteTrackingPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::GetRawZeroPoseToStandingAbsoluteTrackingPose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e40b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetRawZeroPoseToStandingAbsoluteTrackingPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetSortedTrackedDeviceIndicesOfClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackedDeviceClass, ::ArrayW<uint32_t>, uint32_t)>(
    &::OVR::OpenVR::CVRSystem::GetSortedTrackedDeviceIndicesOfClass)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e40b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                         { "GetSortedTrackedDeviceIndicesOfClass", {}, { ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceClass>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetTrackedDeviceActivityLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EDeviceActivityLevel (::OVR::OpenVR::CVRSystem::*)(uint32_t)>(&::OVR::OpenVR::CVRSystem::GetTrackedDeviceActivityLevel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetTrackedDeviceActivityLevel", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ApplyTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>,
                                                                                          ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVRSystem::ApplyTransform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                                             { "ApplyTransform",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>(),
                                                                 ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetTrackedDeviceIndexForControllerRole
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackedControllerRole)>(
    &::OVR::OpenVR::CVRSystem::GetTrackedDeviceIndexForControllerRole)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetTrackedDeviceIndexForControllerRole", {}, { ::i2c::type_of<::OVR::OpenVR::ETrackedControllerRole>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetControllerRoleForTrackedDeviceIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ETrackedControllerRole (::OVR::OpenVR::CVRSystem::*)(uint32_t)>(
    &::OVR::OpenVR::CVRSystem::GetControllerRoleForTrackedDeviceIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetControllerRoleForTrackedDeviceIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetTrackedDeviceClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ETrackedDeviceClass (::OVR::OpenVR::CVRSystem::*)(uint32_t)>(&::OVR::OpenVR::CVRSystem::GetTrackedDeviceClass)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetTrackedDeviceClass", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.IsTrackedDeviceConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(uint32_t)>(&::OVR::OpenVR::CVRSystem::IsTrackedDeviceConnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "IsTrackedDeviceConnected", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetBoolTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::CVRSystem::GetBoolTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetBoolTrackedDeviceProperty",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(),
                                                                                                               ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetFloatTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::CVRSystem::GetFloatTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetFloatTrackedDeviceProperty",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(),
                                                                                                               ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetInt32TrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::CVRSystem::GetInt32TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetInt32TrackedDeviceProperty",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(),
                                                                                                               ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetUint64TrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(
    &::OVR::OpenVR::CVRSystem::GetUint64TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetUint64TrackedDeviceProperty",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(),
                                                                                                               ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetMatrix34TrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetMatrix34TrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e40d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetMatrix34TrackedDeviceProperty",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(),
                                                                                                               ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetArrayTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(
    uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, uint32_t, ::System::IntPtr, uint32_t, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(&::OVR::OpenVR::CVRSystem::GetArrayTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                                { "GetArrayTrackedDeviceProperty",
                                                  {},
                                                  { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(),
                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetStringTrackedDeviceProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::OVR::OpenVR::ETrackedDeviceProperty, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>)>(
        &::OVR::OpenVR::CVRSystem::GetStringTrackedDeviceProperty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                                             { "GetStringTrackedDeviceProperty",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetPropErrorNameFromEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackedPropertyError)>(&::OVR::OpenVR::CVRSystem::GetPropErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e40d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetPropErrorNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::ETrackedPropertyError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.PollNextEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(::by_ref<::OVR::OpenVR::VREvent_t>, uint32_t)>(&::OVR::OpenVR::CVRSystem::PollNextEvent)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5e40e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "PollNextEvent", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::VREvent_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.PollNextEventWithPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::VREvent_t>, uint32_t,
                                                                                          ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::CVRSystem::PollNextEventWithPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "PollNextEventWithPose",
                                                                            {},
                                                                            { ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VREvent_t>>(),
                                                                              ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetEventTypeNameFromEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREventType)>(&::OVR::OpenVR::CVRSystem::GetEventTypeNameFromEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e40fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetEventTypeNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVREventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetHiddenAreaMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HiddenAreaMesh_t (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVREye, ::OVR::OpenVR::EHiddenAreaMeshType)>(
    &::OVR::OpenVR::CVRSystem::GetHiddenAreaMesh)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                                             { "GetHiddenAreaMesh", {}, { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::OVR::OpenVR::EHiddenAreaMeshType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetControllerState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::by_ref<::OVR::OpenVR::VRControllerState_t>, uint32_t)>(
    &::OVR::OpenVR::CVRSystem::GetControllerState)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5e41074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                         { "GetControllerState", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRControllerState_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetControllerStateWithPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::ETrackingUniverseOrigin, uint32_t, ::by_ref<::OVR::OpenVR::VRControllerState_t>, uint32_t,
                                                                                          ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::CVRSystem::GetControllerStateWithPose)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5e41298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                         { "GetControllerStateWithPose",
                                           {},
                                           { ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRControllerState_t>>(),
                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)(uint32_t, uint32_t, uint16_t)>(&::OVR::OpenVR::CVRSystem::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "TriggerHapticPulse", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetButtonIdNameFromEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVRButtonId)>(&::OVR::OpenVR::CVRSystem::GetButtonIdNameFromEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e41480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetButtonIdNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVRButtonId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.GetControllerAxisTypeNameFromEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVR::OpenVR::CVRSystem::*)(::OVR::OpenVR::EVRControllerAxisType)>(&::OVR::OpenVR::CVRSystem::GetControllerAxisTypeNameFromEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e4150c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetControllerAxisTypeNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVRControllerAxisType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.IsInputAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::IsInputAvailable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "IsInputAvailable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.IsSteamVRDrawingControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::IsSteamVRDrawingControllers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e415b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "IsSteamVRDrawingControllers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ShouldApplicationPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::ShouldApplicationPause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e415d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "ShouldApplicationPause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.ShouldApplicationReduceRenderingWork
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::ShouldApplicationReduceRenderingWork)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e415f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "ShouldApplicationReduceRenderingWork", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.DriverDebugRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRSystem::*)(uint32_t, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRSystem::DriverDebugRequest)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                            { "DriverDebugRequest", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.PerformFirmwareUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRFirmwareError (::OVR::OpenVR::CVRSystem::*)(uint32_t)>(&::OVR::OpenVR::CVRSystem::PerformFirmwareUpdate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "PerformFirmwareUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.AcknowledgeQuit_Exiting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::AcknowledgeQuit_Exiting)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "AcknowledgeQuit_Exiting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSystem.AcknowledgeQuit_UserPrompt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSystem::*)()>(&::OVR::OpenVR::CVRSystem::AcknowledgeQuit_UserPrompt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e41678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "AcknowledgeQuit_UserPrompt", {}, {} })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline void OVR::OpenVR::CVRSystem::GetRecommendedRenderTargetSize(::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetRecommendedRenderTargetSize", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnWidth, pnHeight);
}
inline ::OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::CVRSystem::GetProjectionMatrix(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                                           { "GetProjectionMatrix", {}, { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix44_t>(this, ___internal_method, eEye, fNearZ, fFarZ);
}
inline void OVR::OpenVR::CVRSystem::GetProjectionRaw(::OVR::OpenVR::EVREye eEye, ::by_ref<float_t> pfLeft, ::by_ref<float_t> pfRight, ::by_ref<float_t> pfTop, ::by_ref<float_t> pfBottom) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetProjectionRaw",
                                                                          {},
                                                                          { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(),
                                                                            ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eEye, pfLeft, pfRight, pfTop, pfBottom);
}
inline bool OVR::OpenVR::CVRSystem::ComputeDistortion(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ::by_ref<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "ComputeDistortion",
                                                                                              {},
                                                                                              { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                ::i2c::type_of<::by_ref<::OVR::OpenVR::DistortionCoordinates_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eEye, fU, fV, pDistortionCoordinates);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetEyeToHeadTransform(::OVR::OpenVR::EVREye eEye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetEyeToHeadTransform", {}, { ::i2c::type_of<::OVR::OpenVR::EVREye>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method, eEye);
}
inline bool OVR::OpenVR::CVRSystem::GetTimeSinceLastVsync(::by_ref<float_t> pfSecondsSinceLastVsync, ::by_ref<uint64_t> pulFrameCounter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetTimeSinceLastVsync", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pfSecondsSinceLastVsync, pulFrameCounter);
}
inline int32_t OVR::OpenVR::CVRSystem::GetD3D9AdapterIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetD3D9AdapterIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRSystem::GetDXGIOutputInfo(::by_ref<int32_t> pnAdapterIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetDXGIOutputInfo", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnAdapterIndex);
}
inline void OVR::OpenVR::CVRSystem::GetOutputDevice(::by_ref<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                              { "GetOutputDevice", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::OVR::OpenVR::ETextureType>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnDevice, textureType, pInstance);
}
inline bool OVR::OpenVR::CVRSystem::IsDisplayOnDesktop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "IsDisplayOnDesktop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRSystem::SetDisplayVisibility(bool bIsVisibleOnDesktop) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "SetDisplayVisibility", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bIsVisibleOnDesktop);
}
inline void OVR::OpenVR::CVRSystem::GetDeviceToAbsoluteTrackingPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                                                    ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePoseArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetDeviceToAbsoluteTrackingPose",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray);
}
inline void OVR::OpenVR::CVRSystem::ResetSeatedZeroPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "ResetSeatedZeroPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetSeatedZeroPoseToStandingAbsoluteTrackingPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetSeatedZeroPoseToStandingAbsoluteTrackingPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetRawZeroPoseToStandingAbsoluteTrackingPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetRawZeroPoseToStandingAbsoluteTrackingPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVRSystem::GetSortedTrackedDeviceIndicesOfClass(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::ArrayW<uint32_t> punTrackedDeviceIndexArray,
                                                                             uint32_t unRelativeToTrackedDeviceIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                          { "GetSortedTrackedDeviceIndicesOfClass", {}, { ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceClass>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, eTrackedDeviceClass, punTrackedDeviceIndexArray, unRelativeToTrackedDeviceIndex);
}
inline ::OVR::OpenVR::EDeviceActivityLevel OVR::OpenVR::CVRSystem::GetTrackedDeviceActivityLevel(uint32_t unDeviceId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetTrackedDeviceActivityLevel", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EDeviceActivityLevel>(this, ___internal_method, unDeviceId);
}
inline void OVR::OpenVR::CVRSystem::ApplyTransform(::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                                   ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pTransform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                                           { "ApplyTransform",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>(),
                                                               ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pOutputPose, pTrackedDevicePose, pTransform);
}
inline uint32_t OVR::OpenVR::CVRSystem::GetTrackedDeviceIndexForControllerRole(::OVR::OpenVR::ETrackedControllerRole unDeviceType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetTrackedDeviceIndexForControllerRole", {}, { ::i2c::type_of<::OVR::OpenVR::ETrackedControllerRole>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unDeviceType);
}
inline ::OVR::OpenVR::ETrackedControllerRole OVR::OpenVR::CVRSystem::GetControllerRoleForTrackedDeviceIndex(uint32_t unDeviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetControllerRoleForTrackedDeviceIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedControllerRole>(this, ___internal_method, unDeviceIndex);
}
inline ::OVR::OpenVR::ETrackedDeviceClass OVR::OpenVR::CVRSystem::GetTrackedDeviceClass(uint32_t unDeviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetTrackedDeviceClass", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackedDeviceClass>(this, ___internal_method, unDeviceIndex);
}
inline bool OVR::OpenVR::CVRSystem::IsTrackedDeviceConnected(uint32_t unDeviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "IsTrackedDeviceConnected", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unDeviceIndex);
}
inline bool OVR::OpenVR::CVRSystem::GetBoolTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetBoolTrackedDeviceProperty",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(),
                                                                                                             ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline float_t OVR::OpenVR::CVRSystem::GetFloatTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetFloatTrackedDeviceProperty",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(),
                                                                                                             ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline int32_t OVR::OpenVR::CVRSystem::GetInt32TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetInt32TrackedDeviceProperty",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(),
                                                                                                             ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline uint64_t OVR::OpenVR::CVRSystem::GetUint64TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetUint64TrackedDeviceProperty",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(),
                                                                                                             ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline ::OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::CVRSystem::GetMatrix34TrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop,
                                                                                             ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetMatrix34TrackedDeviceProperty",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(),
                                                                                                             ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(this, ___internal_method, unDeviceIndex, prop, pError);
}
inline uint32_t OVR::OpenVR::CVRSystem::GetArrayTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer,
                                                                      uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                                           { "GetArrayTrackedDeviceProperty",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
}
inline uint32_t OVR::OpenVR::CVRSystem::GetStringTrackedDeviceProperty(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue,
                                                                       uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                                           { "GetStringTrackedDeviceProperty",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackedPropertyError>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}
inline ::StringW OVR::OpenVR::CVRSystem::GetPropErrorNameFromEnum(::OVR::OpenVR::ETrackedPropertyError error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetPropErrorNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::ETrackedPropertyError>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, error);
}
inline bool OVR::OpenVR::CVRSystem::PollNextEvent(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "PollNextEvent", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::VREvent_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pEvent, uncbVREvent);
}
inline bool OVR::OpenVR::CVRSystem::PollNextEventWithPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                                          ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "PollNextEventWithPose",
                                                                                       {},
                                                                                       { ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VREvent_t>>(),
                                                                                         ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}
inline ::StringW OVR::OpenVR::CVRSystem::GetEventTypeNameFromEnum(::OVR::OpenVR::EVREventType eType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetEventTypeNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVREventType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, eType);
}
inline ::OVR::OpenVR::HiddenAreaMesh_t OVR::OpenVR::CVRSystem::GetHiddenAreaMesh(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                                           { "GetHiddenAreaMesh", {}, { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::OVR::OpenVR::EHiddenAreaMeshType>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HiddenAreaMesh_t>(this, ___internal_method, eEye, type);
}
inline bool OVR::OpenVR::CVRSystem::GetControllerState(uint32_t unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                                       { "GetControllerState", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRControllerState_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}
inline bool OVR::OpenVR::CVRSystem::GetControllerStateWithPose(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex,
                                                               ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                                               ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetControllerStateWithPose",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<uint32_t>(),
                                                                                                             ::i2c::type_of<::by_ref<::OVR::OpenVR::VRControllerState_t>>(), ::i2c::type_of<uint32_t>(),
                                                                                                             ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}
inline void OVR::OpenVR::CVRSystem::TriggerHapticPulse(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "TriggerHapticPulse", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}
inline ::StringW OVR::OpenVR::CVRSystem::GetButtonIdNameFromEnum(::OVR::OpenVR::EVRButtonId eButtonId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetButtonIdNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVRButtonId>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, eButtonId);
}
inline ::StringW OVR::OpenVR::CVRSystem::GetControllerAxisTypeNameFromEnum(::OVR::OpenVR::EVRControllerAxisType eAxisType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "GetControllerAxisTypeNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVRControllerAxisType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, eAxisType);
}
inline bool OVR::OpenVR::CVRSystem::IsInputAvailable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "IsInputAvailable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRSystem::IsSteamVRDrawingControllers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "IsSteamVRDrawingControllers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRSystem::ShouldApplicationPause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "ShouldApplicationPause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRSystem::ShouldApplicationReduceRenderingWork() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "ShouldApplicationReduceRenderingWork", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVRSystem::DriverDebugRequest(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(),
                          { "DriverDebugRequest", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}
inline ::OVR::OpenVR::EVRFirmwareError OVR::OpenVR::CVRSystem::PerformFirmwareUpdate(uint32_t unDeviceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "PerformFirmwareUpdate", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRFirmwareError>(this, ___internal_method, unDeviceIndex);
}
inline void OVR::OpenVR::CVRSystem::AcknowledgeQuit_Exiting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "AcknowledgeQuit_Exiting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRSystem::AcknowledgeQuit_UserPrompt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSystem*>(), { "AcknowledgeQuit_UserPrompt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OVR::OpenVR::CVRSystem* OVR::OpenVR::CVRSystem::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRSystem*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSystem::CVRSystem() {}
