#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVROverlay.hpp"
#include "OVR/OpenVR/zzzz__IVROverlay_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVROverlay_def.hpp"
#include "OVR/OpenVR/zzzz__CVROverlay_def.hpp"
#include "OVR/OpenVR/zzzz__EColorSpace_def.hpp"
#include "OVR/OpenVR/zzzz__EDualAnalogWhich_def.hpp"
#include "OVR/OpenVR/zzzz__EOverlayDirection_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVROverlayError_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdRect2_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRMessageOverlayResponse_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayFlags_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayInputMethod_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionParams_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionResults_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayTransformType_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e463f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::*)(uint64_t, ::by_ref<::OVR::OpenVR::VREvent_t_Packed>, uint32_t)>(
    &::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e46464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::*)(uint64_t, ::by_ref<::OVR::OpenVR::VREvent_t_Packed>, uint32_t,
                                                                                                                                          ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e46478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::*)(::by_ref<::OVR::OpenVR::VREvent_t_Packed>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4653c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent,
                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t_Packed> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pEvent, result);
}
inline ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked* OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::CVROverlay__PollNextOverlayEventPacked() {}
constexpr ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*& OVR::OpenVR::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_get_pPollNextOverlayEvent() {
  return this->___pPollNextOverlayEvent;
}
constexpr ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* const& OVR::OpenVR::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_get_pPollNextOverlayEvent() const {
  return this->___pPollNextOverlayEvent;
}
constexpr void OVR::OpenVR::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_set_pPollNextOverlayEvent(::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* value) {
  this->___pPollNextOverlayEvent = value;
}
constexpr ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*& OVR::OpenVR::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_get_pPollNextOverlayEventPacked() {
  return this->___pPollNextOverlayEventPacked;
}
constexpr ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked* const& OVR::OpenVR::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_get_pPollNextOverlayEventPacked() const {
  return this->___pPollNextOverlayEventPacked;
}
constexpr void OVR::OpenVR::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_set_pPollNextOverlayEventPacked(::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked* value) {
  this->___pPollNextOverlayEventPacked = value;
}
// Ctor Parameters [CppParam { name: "pPollNextOverlayEvent", ty: "::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "pPollNextOverlayEventPacked", ty: "::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::CVROverlay_PollNextOverlayEventUnion::CVROverlay_PollNextOverlayEventUnion(::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* pPollNextOverlayEvent,
                                                                                                    ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked* pPollNextOverlayEventPacked) noexcept {
  this->pPollNextOverlayEvent = pPollNextOverlayEvent;
  this->pPollNextOverlayEventPacked = pPollNextOverlayEventPacked;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVROverlay_PollNextOverlayEventUnion::CVROverlay_PollNextOverlayEventUnion() {}
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVROverlay::*)(::System::IntPtr)>(&::OVR::OpenVR::CVROverlay::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e45650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.FindOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(::StringW, ::by_ref<uint64_t>)>(&::OVR::OpenVR::CVROverlay::FindOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "FindOverlay", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.CreateOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(::StringW, ::StringW, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::CVROverlay::CreateOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                             { "CreateOverlay", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.DestroyOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::DestroyOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "DestroyOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetHighQualityOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::SetHighQualityOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e457b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetHighQualityOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetHighQualityOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::GetHighQualityOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e457d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetHighQualityOverlay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVROverlayError>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e457f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayKey",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                                   ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVROverlayError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVROverlayError>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayName",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                                   ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVROverlayError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::StringW)>(&::OVR::OpenVR::CVROverlay::SetOverlayName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayName", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayImageData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::System::IntPtr, uint32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayImageData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e45858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayImageData",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(),
                                                                                                   ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayErrorNameFromEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVR::OpenVR::CVROverlay::*)(::OVR::OpenVR::EVROverlayError)>(&::OVR::OpenVR::CVROverlay::GetOverlayErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e45880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayErrorNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVROverlayError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayRenderingPid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, uint32_t)>(&::OVR::OpenVR::CVROverlay::SetOverlayRenderingPid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4590c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayRenderingPid", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayRenderingPid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::GetOverlayRenderingPid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4592c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayRenderingPid", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, bool)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayFlag)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4594c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                             { "SetOverlayFlag", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::VROverlayFlags>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, ::by_ref<bool>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayFlag)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                { "GetOverlayFlag", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::VROverlayFlags>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, float_t, float_t, float_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                { "SetOverlayColor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e459b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                            { "GetOverlayColor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, float_t)>(&::OVR::OpenVR::CVROverlay::SetOverlayAlpha)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e459e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayAlpha", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<float_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayAlpha)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayAlpha", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTexelAspect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, float_t)>(&::OVR::OpenVR::CVROverlay::SetOverlayTexelAspect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayTexelAspect", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTexelAspect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<float_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayTexelAspect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayTexelAspect", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlaySortOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, uint32_t)>(&::OVR::OpenVR::CVROverlay::SetOverlaySortOrder)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlaySortOrder", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlaySortOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<uint32_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlaySortOrder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlaySortOrder", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayWidthInMeters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, float_t)>(&::OVR::OpenVR::CVROverlay::SetOverlayWidthInMeters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayWidthInMeters", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayWidthInMeters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<float_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayWidthInMeters)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayWidthInMeters", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayAutoCurveDistanceRangeInMeters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, float_t, float_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayAutoCurveDistanceRangeInMeters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                { "SetOverlayAutoCurveDistanceRangeInMeters", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayAutoCurveDistanceRangeInMeters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<float_t>, ::by_ref<float_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayAutoCurveDistanceRangeInMeters)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e45b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                            { "GetOverlayAutoCurveDistanceRangeInMeters", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTextureColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::EColorSpace)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTextureColorSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayTextureColorSpace", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EColorSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTextureColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<::OVR::OpenVR::EColorSpace>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTextureColorSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                             { "GetOverlayTextureColorSpace", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EColorSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTextureBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTextureBounds)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                             { "SetOverlayTextureBounds", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRTextureBounds_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTextureBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTextureBounds)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                             { "GetOverlayTextureBounds", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRTextureBounds_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayRenderModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::HmdColor_t>,
                                                                                               ::by_ref<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::CVROverlay::GetOverlayRenderModel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayRenderModel",
                                                                             {},
                                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>(),
                                                                               ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdColor_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVROverlayError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayRenderModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::StringW, ::by_ref<::OVR::OpenVR::HmdColor_t>)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayRenderModel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                { "SetOverlayRenderModel", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdColor_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTransformType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<::OVR::OpenVR::VROverlayTransformType>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTransformType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                             { "GetOverlayTransformType", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VROverlayTransformType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTransformAbsolute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVROverlay::SetOverlayTransformAbsolute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayTransformAbsolute",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(),
                                                                                                                ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTransformAbsolute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayTransformAbsolute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayTransformAbsolute",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin>>(),
                                                                                                   ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTransformTrackedDeviceRelative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, uint32_t, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTransformTrackedDeviceRelative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                            { "SetOverlayTransformTrackedDeviceRelative", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTransformTrackedDeviceRelative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<uint32_t>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTransformTrackedDeviceRelative)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
            { "GetOverlayTransformTrackedDeviceRelative", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTransformTrackedDeviceComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, uint32_t, ::StringW)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTransformTrackedDeviceComponent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                { "SetOverlayTransformTrackedDeviceComponent", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTransformTrackedDeviceComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<uint32_t>, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTransformTrackedDeviceComponent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayTransformTrackedDeviceComponent",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                                                                                ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTransformOverlayRelative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<uint64_t>, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTransformOverlayRelative)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
            { "GetOverlayTransformOverlayRelative", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTransformOverlayRelative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, uint64_t, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTransformOverlayRelative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                            { "SetOverlayTransformOverlayRelative", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ShowOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::ShowOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ShowOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.HideOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::HideOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "HideOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.IsOverlayVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::IsOverlayVisible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "IsOverlayVisible", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetTransformForOverlayCoordinates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::OVR::OpenVR::HmdVector2_t, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVROverlay::GetTransformForOverlayCoordinates)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetTransformForOverlayCoordinates",
                                                                             {},
                                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(),
                                                                               ::i2c::type_of<::OVR::OpenVR::HmdVector2_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.PollNextOverlayEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<::OVR::OpenVR::VREvent_t>, uint32_t)>(&::OVR::OpenVR::CVROverlay::PollNextOverlayEvent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5e45da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                { "PollNextOverlayEvent", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VREvent_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayInputMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<::OVR::OpenVR::VROverlayInputMethod>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayInputMethod)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                             { "GetOverlayInputMethod", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VROverlayInputMethod>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayInputMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::VROverlayInputMethod)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayInputMethod)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayInputMethod", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::VROverlayInputMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayMouseScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<::OVR::OpenVR::HmdVector2_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayMouseScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayMouseScale", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdVector2_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayMouseScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<::OVR::OpenVR::HmdVector2_t>)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayMouseScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayMouseScale", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdVector2_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ComputeOverlayIntersection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t>, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t>)>(&::OVR::OpenVR::CVROverlay::ComputeOverlayIntersection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ComputeOverlayIntersection",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t>>(),
                                                                                                   ::i2c::type_of<::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.IsHoverTargetOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::IsHoverTargetOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "IsHoverTargetOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetGamepadFocusOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::GetGamepadFocusOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetGamepadFocusOverlay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetGamepadFocusOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::SetGamepadFocusOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetGamepadFocusOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayNeighbor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayNeighbor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                { "SetOverlayNeighbor", {}, { ::i2c::type_of<::OVR::OpenVR::EOverlayDirection>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.MoveGamepadFocusToNeighbor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(::OVR::OpenVR::EOverlayDirection, uint64_t)>(
    &::OVR::OpenVR::CVROverlay::MoveGamepadFocusToNeighbor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "MoveGamepadFocusToNeighbor", {}, { ::i2c::type_of<::OVR::OpenVR::EOverlayDirection>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayDualAnalogTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::System::IntPtr, float_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayDualAnalogTransform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                { "SetOverlayDualAnalogTransform",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EDualAnalogWhich>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayDualAnalogTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::by_ref<::OVR::OpenVR::HmdVector2_t>,
                                                                                                                     ::by_ref<float_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayDualAnalogTransform)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e46084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayDualAnalogTransform",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EDualAnalogWhich>(),
                                                                                                   ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdVector2_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<::OVR::OpenVR::Texture_t>)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTexture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e460a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayTexture", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::Texture_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ClearOverlayTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::ClearOverlayTexture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e460c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ClearOverlayTexture", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::System::IntPtr, uint32_t, uint32_t, uint32_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e460e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
            { "SetOverlayRaw", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayFromFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::StringW)>(&::OVR::OpenVR::CVROverlay::SetOverlayFromFile)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayFromFile", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::by_ref<::System::IntPtr>, ::System::IntPtr, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<::OVR::OpenVR::ETextureType>, ::by_ref<::OVR::OpenVR::EColorSpace>,
    ::by_ref<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e46128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                { "GetOverlayTexture",
                                                  {},
                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                    ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::ETextureType>>(),
                                                    ::i2c::type_of<::by_ref<::OVR::OpenVR::EColorSpace>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRTextureBounds_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ReleaseNativeOverlayHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::System::IntPtr)>(
    &::OVR::OpenVR::CVROverlay::ReleaseNativeOverlayHandle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ReleaseNativeOverlayHandle", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTextureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTextureSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e46184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                { "GetOverlayTextureSize", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.CreateDashboardOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(::StringW, ::StringW, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(
    &::OVR::OpenVR::CVROverlay::CreateDashboardOverlay)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e461ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                         { "CreateDashboardOverlay", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.IsDashboardVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::IsDashboardVisible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e461d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "IsDashboardVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.IsActiveDashboardOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::IsActiveDashboardOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e461f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "IsActiveDashboardOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetDashboardOverlaySceneProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::CVROverlay::SetDashboardOverlaySceneProcess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetDashboardOverlaySceneProcess", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetDashboardOverlaySceneProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::CVROverlay::GetDashboardOverlaySceneProcess)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e46234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetDashboardOverlaySceneProcess", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ShowDashboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVROverlay::*)(::StringW)>(&::OVR::OpenVR::CVROverlay::ShowDashboard)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ShowDashboard", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetPrimaryDashboardDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::GetPrimaryDashboardDevice)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetPrimaryDashboardDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ShowKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(
    &::OVR::OpenVR::CVROverlay::ShowKeyboard)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e46298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ShowKeyboard",
                                                                             {},
                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(),
                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ShowKeyboardForOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(
    &::OVR::OpenVR::CVROverlay::ShowKeyboardForOverlay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e462c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ShowKeyboardForOverlay",
                                                                             {},
                                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetKeyboardText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)(::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::CVROverlay::GetKeyboardText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e462f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetKeyboardText", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.HideKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::HideKeyboard)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "HideKeyboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetKeyboardTransformAbsolute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVROverlay::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVROverlay::SetKeyboardTransformAbsolute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                            { "SetKeyboardTransformAbsolute", {}, { ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetKeyboardPositionForOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::HmdRect2_t)>(&::OVR::OpenVR::CVROverlay::SetKeyboardPositionForOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetKeyboardPositionForOverlay", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::HmdRect2_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayIntersectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, uint32_t,
                                                                                                                     uint32_t)>(&::OVR::OpenVR::CVROverlay::SetOverlayIntersectionMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayIntersectionMask",
                                                                                          {},
                                                                                          { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>>(),
                                                                                            ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::by_ref<uint32_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayFlags)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e46394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayFlags", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ShowMessageOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (::OVR::OpenVR::CVROverlay::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::OVR::OpenVR::CVROverlay::ShowMessageOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e463b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ShowMessageOverlay",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                   ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.CloseMessageOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::CloseMessageOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e463d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "CloseMessageOverlay", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVROverlay& OVR::OpenVR::CVROverlay::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVROverlay const& OVR::OpenVR::CVROverlay::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVROverlay::__cordl_internal_set_FnTable(::OVR::OpenVR::IVROverlay value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVROverlay::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::FindOverlay(::StringW pchOverlayKey, ::by_ref<uint64_t> pOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "FindOverlay", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pchOverlayKey, pOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::CreateOverlay(::StringW pchOverlayKey, ::StringW pchOverlayName, ::by_ref<uint64_t> pOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "CreateOverlay", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pchOverlayKey, pchOverlayName, pOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::DestroyOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "DestroyOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetHighQualityOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetHighQualityOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle);
}
inline uint64_t OVR::OpenVR::CVROverlay::GetHighQualityOverlay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetHighQualityOverlay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetOverlayKey(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayKey",
                                                                                               {},
                                                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVROverlayError>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetOverlayName(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayName",
                                                                                               {},
                                                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVROverlayError>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayName(uint64_t ulOverlayHandle, ::StringW pchName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayName", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pchName);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayImageData(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ::by_ref<uint32_t> punWidth,
                                                                                   ::by_ref<uint32_t> punHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayImageData",
                                                                                               {},
                                                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(),
                                                                                                 ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}
inline ::StringW OVR::OpenVR::CVROverlay::GetOverlayErrorNameFromEnum(::OVR::OpenVR::EVROverlayError error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayErrorNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVROverlayError>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, error);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayRenderingPid(uint64_t ulOverlayHandle, uint32_t unPID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayRenderingPid", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, unPID);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetOverlayRenderingPid(uint64_t ulOverlayHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayRenderingPid", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayFlag(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                           { "SetOverlayFlag", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::VROverlayFlags>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, bEnabled);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayFlag(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ::by_ref<bool> pbEnabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                              { "GetOverlayFlag", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::VROverlayFlags>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, pbEnabled);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayColor(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                              { "SetOverlayColor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, fRed, fGreen, fBlue);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayColor(uint64_t ulOverlayHandle, ::by_ref<float_t> pfRed, ::by_ref<float_t> pfGreen, ::by_ref<float_t> pfBlue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                          { "GetOverlayColor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayAlpha(uint64_t ulOverlayHandle, float_t fAlpha) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayAlpha", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, fAlpha);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayAlpha(uint64_t ulOverlayHandle, ::by_ref<float_t> pfAlpha) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayAlpha", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pfAlpha);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTexelAspect(uint64_t ulOverlayHandle, float_t fTexelAspect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayTexelAspect", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, fTexelAspect);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTexelAspect(uint64_t ulOverlayHandle, ::by_ref<float_t> pfTexelAspect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayTexelAspect", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pfTexelAspect);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlaySortOrder(uint64_t ulOverlayHandle, uint32_t unSortOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlaySortOrder", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, unSortOrder);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlaySortOrder(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punSortOrder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlaySortOrder", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, punSortOrder);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayWidthInMeters(uint64_t ulOverlayHandle, float_t fWidthInMeters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayWidthInMeters", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, fWidthInMeters);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayWidthInMeters(uint64_t ulOverlayHandle, ::by_ref<float_t> pfWidthInMeters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayWidthInMeters", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pfWidthInMeters);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                           { "SetOverlayAutoCurveDistanceRangeInMeters", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, ::by_ref<float_t> pfMinDistanceInMeters,
                                                                                                        ::by_ref<float_t> pfMaxDistanceInMeters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                       { "GetOverlayAutoCurveDistanceRangeInMeters", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTextureColorSpace(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayTextureColorSpace", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EColorSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eTextureColorSpace);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTextureColorSpace(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::EColorSpace> peTextureColorSpace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                           { "GetOverlayTextureColorSpace", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EColorSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, peTextureColorSpace);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTextureBounds(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                           { "SetOverlayTextureBounds", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRTextureBounds_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTextureBounds(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                           { "GetOverlayTextureBounds", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRTextureBounds_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetOverlayRenderModel(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor,
                                                               ::by_ref<::OVR::OpenVR::EVROverlayError> pError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayRenderModel",
                                                                           {},
                                                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>(),
                                                                             ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdColor_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVROverlayError>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayRenderModel(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                              { "SetOverlayRenderModel", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdColor_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pchRenderModel, pColor);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTransformType(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayTransformType> peTransformType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                           { "GetOverlayTransformType", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VROverlayTransformType>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, peTransformType);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTransformAbsolute(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                           ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
          { "SetOverlayTransformAbsolute", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTransformAbsolute(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                           ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayTransformAbsolute",
                                                                                               {},
                                                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin>>(),
                                                                                                 ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, uint32_t unTrackedDevice,
                                                                                                        ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                          { "SetOverlayTransformTrackedDeviceRelative", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punTrackedDevice,
                                                                                                        ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
          { "GetOverlayTransformTrackedDeviceRelative", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                              { "SetOverlayTransformTrackedDeviceComponent", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, unDeviceIndex, pchComponentName);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punDeviceIndex,
                                                                                                         ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                              { "GetOverlayTransformTrackedDeviceComponent",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, ::by_ref<uint64_t> ulOverlayHandleParent,
                                                                                                  ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                       { "GetOverlayTransformOverlayRelative", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent,
                                                                                                  ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                          { "SetOverlayTransformOverlayRelative", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::ShowOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ShowOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::HideOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "HideOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle);
}
inline bool OVR::OpenVR::CVROverlay::IsOverlayVisible(uint64_t ulOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "IsOverlayVisible", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetTransformForOverlayCoordinates(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                 ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                                                                                 ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetTransformForOverlayCoordinates",
                                                                           {},
                                                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(),
                                                                             ::i2c::type_of<::OVR::OpenVR::HmdVector2_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}
inline bool OVR::OpenVR::CVROverlay::PollNextOverlayEvent(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                              { "PollNextOverlayEvent", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VREvent_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayInputMethod(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayInputMethod> peInputMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                                           { "GetOverlayInputMethod", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VROverlayInputMethod>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, peInputMethod);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayInputMethod(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayInputMethod", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::VROverlayInputMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eInputMethod);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayMouseScale(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayMouseScale", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdVector2_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pvecMouseScale);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayMouseScale(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayMouseScale", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdVector2_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pvecMouseScale);
}
inline bool OVR::OpenVR::CVROverlay::ComputeOverlayIntersection(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ComputeOverlayIntersection",
                                                                                               {},
                                                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t>>(),
                                                                                                 ::i2c::type_of<::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle, pParams, pResults);
}
inline bool OVR::OpenVR::CVROverlay::IsHoverTargetOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "IsHoverTargetOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle);
}
inline uint64_t OVR::OpenVR::CVROverlay::GetGamepadFocusOverlay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetGamepadFocusOverlay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetGamepadFocusOverlay(uint64_t ulNewFocusOverlay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetGamepadFocusOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulNewFocusOverlay);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayNeighbor(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                              { "SetOverlayNeighbor", {}, { ::i2c::type_of<::OVR::OpenVR::EOverlayDirection>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, eDirection, ulFrom, ulTo);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::MoveGamepadFocusToNeighbor(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "MoveGamepadFocusToNeighbor", {}, { ::i2c::type_of<::OVR::OpenVR::EOverlayDirection>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, eDirection, ulFrom);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayDualAnalogTransform(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter, float_t fRadius) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
          { "SetOverlayDualAnalogTransform", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EDualAnalogWhich>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlay, eWhich, vCenter, fRadius);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayDualAnalogTransform(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvCenter,
                                                                                             ::by_ref<float_t> pfRadius) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayDualAnalogTransform",
                                                                                               {},
                                                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EDualAnalogWhich>(),
                                                                                                 ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdVector2_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlay, eWhich, pvCenter, pfRadius);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTexture(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::Texture_t> pTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayTexture", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::Texture_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pTexture);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::ClearOverlayTexture(uint64_t ulOverlayHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ClearOverlayTexture", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayRaw(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
          { "SetOverlayRaw", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayFromFile(uint64_t ulOverlayHandle, ::StringW pchFilePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayFromFile", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pchFilePath);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTexture(uint64_t ulOverlayHandle, ::by_ref<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef,
                                                                                 ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight, ::by_ref<uint32_t> pNativeFormat,
                                                                                 ::by_ref<::OVR::OpenVR::ETextureType> pAPIType, ::by_ref<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                                                 ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                              { "GetOverlayTexture",
                                                {},
                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                  ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::ETextureType>>(),
                                                  ::i2c::type_of<::by_ref<::OVR::OpenVR::EColorSpace>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRTextureBounds_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat,
                                                                             pAPIType, pColorSpace, pTextureBounds);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::ReleaseNativeOverlayHandle(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ReleaseNativeOverlayHandle", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTextureSize(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                                              { "GetOverlayTextureSize", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pWidth, pHeight);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::CreateDashboardOverlay(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ::by_ref<uint64_t> pMainHandle,
                                                                                      ::by_ref<uint64_t> pThumbnailHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                          { "CreateDashboardOverlay", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}
inline bool OVR::OpenVR::CVROverlay::IsDashboardVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "IsDashboardVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVROverlay::IsActiveDashboardOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "IsActiveDashboardOverlay", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, uint32_t unProcessId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetDashboardOverlaySceneProcess", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, unProcessId);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punProcessId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetDashboardOverlaySceneProcess", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, punProcessId);
}
inline void OVR::OpenVR::CVROverlay::ShowDashboard(::StringW pchOverlayToShow) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ShowDashboard", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchOverlayToShow);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetPrimaryDashboardDevice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetPrimaryDashboardDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::ShowKeyboard(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                                                            bool bUseMinimalMode, uint64_t uUserValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ShowKeyboard",
                                                                                        {},
                                                                                        { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(),
                                                                                          ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode,
                                                                             uUserValue);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::ShowKeyboardForOverlay(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription,
                                                                                      uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ShowKeyboardForOverlay",
                                                                           {},
                                                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText,
                                                                             bUseMinimalMode, uUserValue);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetKeyboardText(::System::Text::StringBuilder* pchText, uint32_t cchText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetKeyboardText", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchText, cchText);
}
inline void OVR::OpenVR::CVROverlay::HideKeyboard() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "HideKeyboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OVR::OpenVR::CVROverlay::SetKeyboardTransformAbsolute(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                  ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(),
                          { "SetKeyboardTransformAbsolute", {}, { ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}
inline void OVR::OpenVR::CVROverlay::SetKeyboardPositionForOverlay(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetKeyboardPositionForOverlay", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::HmdRect2_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ulOverlayHandle, avoidRect);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayIntersectionMask(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                          uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "SetOverlayIntersectionMask",
                                                                                        {},
                                                                                        { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>>(),
                                                                                          ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayFlags(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "GetOverlayFlags", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError>(this, ___internal_method, ulOverlayHandle, pFlags);
}
inline ::OVR::OpenVR::VRMessageOverlayResponse OVR::OpenVR::CVROverlay::ShowMessageOverlay(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text,
                                                                                           ::StringW pchButton2Text, ::StringW pchButton3Text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "ShowMessageOverlay",
                                                                                               {},
                                                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::VRMessageOverlayResponse>(this, ___internal_method, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}
inline void OVR::OpenVR::CVROverlay::CloseMessageOverlay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVROverlay*>(), { "CloseMessageOverlay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OVR::OpenVR::CVROverlay* OVR::OpenVR::CVROverlay::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVROverlay*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVROverlay::CVROverlay() {}
