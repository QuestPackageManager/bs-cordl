#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVROverlay.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4070348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::VREvent_t_Packed>, uint32_t)>(&::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40703d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::*)(uint64_t, ::ByRef<::OVR::OpenVR::VREvent_t_Packed>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x40703e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::*)(
    ::ByRef<::OVR::OpenVR::VREvent_t_Packed>, ::System::IAsyncResult*)>(&::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40704d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::Invoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::BeginInvoke(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent,
                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::EndInvoke(::ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, result);
}
inline ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked* OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*>(object, method));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVROverlay::*)(::System::IntPtr)>(&::OVR::OpenVR::CVROverlay::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x406f460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.FindOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(::StringW, ::ByRef<uint64_t>)>(
    &::OVR::OpenVR::CVROverlay::FindOverlay)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406f574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "FindOverlay", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.CreateOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(::StringW, ::StringW, ::ByRef<uint64_t>)>(
    &::OVR::OpenVR::CVROverlay::CreateOverlay)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406f59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "CreateOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.DestroyOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(
    &::OVR::OpenVR::CVROverlay::DestroyOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "DestroyOverlay", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetHighQualityOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(
    &::OVR::OpenVR::CVROverlay::SetHighQualityOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetHighQualityOverlay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetHighQualityOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::GetHighQualityOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetHighQualityOverlay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::CVROverlay::GetOverlayKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayKey", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVROverlayError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::CVROverlay::GetOverlayName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVROverlayError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::StringW)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayImageData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::System::IntPtr, uint32_t, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayImageData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406f69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayImageData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayErrorNameFromEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVR::OpenVR::CVROverlay::*)(::OVR::OpenVR::EVROverlayError)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x406f6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayErrorNameFromEnum", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVROverlayError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayRenderingPid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayRenderingPid)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayRenderingPid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayRenderingPid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::GetOverlayRenderingPid)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayRenderingPid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, bool)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayFlag)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406f794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayFlag", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, ::ByRef<bool>)>(&::OVR::OpenVR::CVROverlay::GetOverlayFlag)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406f7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayFlag", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, float_t, float_t, float_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<float_t>, ::ByRef<float_t>, ::ByRef<float_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayColor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x406f808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayAlpha)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayAlpha", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<float_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayAlpha)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406f85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayAlpha", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTexelAspect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTexelAspect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTexelAspect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTexelAspect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<float_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTexelAspect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406f8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTexelAspect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlaySortOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlaySortOrder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlaySortOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlaySortOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlaySortOrder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406f8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlaySortOrder", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayWidthInMeters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayWidthInMeters)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayWidthInMeters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayWidthInMeters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<float_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayWidthInMeters)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406f940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayWidthInMeters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayAutoCurveDistanceRangeInMeters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, float_t, float_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayAutoCurveDistanceRangeInMeters)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayAutoCurveDistanceRangeInMeters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayAutoCurveDistanceRangeInMeters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<float_t>, ::ByRef<float_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayAutoCurveDistanceRangeInMeters)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406f98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayAutoCurveDistanceRangeInMeters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTextureColorSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::EColorSpace)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTextureColorSpace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTextureColorSpace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EColorSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTextureColorSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<::OVR::OpenVR::EColorSpace>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTextureColorSpace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406f9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTextureColorSpace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EColorSpace>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTextureBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTextureBounds)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fa00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTextureBounds", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTextureBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTextureBounds)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fa24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTextureBounds", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayRenderModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::HmdColor_t>, ::ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::CVROverlay::GetOverlayRenderModel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fa48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayRenderModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdColor_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVROverlayError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayRenderModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::StringW, ::ByRef<::OVR::OpenVR::HmdColor_t>)>(&::OVR::OpenVR::CVROverlay::SetOverlayRenderModel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fa6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayRenderModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdColor_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTransformType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<::OVR::OpenVR::VROverlayTransformType>)>(&::OVR::OpenVR::CVROverlay::GetOverlayTransformType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fa90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTransformType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VROverlayTransformType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTransformAbsolute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVROverlay::SetOverlayTransformAbsolute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTransformAbsolute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTransformAbsolute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayTransformAbsolute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTransformAbsolute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTransformTrackedDeviceRelative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, uint32_t, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVROverlay::SetOverlayTransformTrackedDeviceRelative)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTransformTrackedDeviceRelative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTransformTrackedDeviceRelative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayTransformTrackedDeviceRelative)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406fb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTransformTrackedDeviceRelative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTransformTrackedDeviceComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, uint32_t, ::StringW)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTransformTrackedDeviceComponent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTransformTrackedDeviceComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTransformTrackedDeviceComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::ByRef<uint32_t>, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::CVROverlay::GetOverlayTransformTrackedDeviceComponent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406fb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTransformTrackedDeviceComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTransformOverlayRelative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::ByRef<uint64_t>, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayTransformOverlayRelative)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406fb94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTransformOverlayRelative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTransformOverlayRelative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, uint64_t, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVROverlay::SetOverlayTransformOverlayRelative)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fbbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTransformOverlayRelative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ShowOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::ShowOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ShowOverlay", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.HideOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::HideOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "HideOverlay", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.IsOverlayVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::IsOverlayVisible)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "IsOverlayVisible", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetTransformForOverlayCoordinates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::OVR::OpenVR::HmdVector2_t, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::CVROverlay::GetTransformForOverlayCoordinates)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetTransformForOverlayCoordinates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::HmdVector2_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.PollNextOverlayEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<::OVR::OpenVR::VREvent_t>, uint32_t)>(
    &::OVR::OpenVR::CVROverlay::PollNextOverlayEvent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x406fc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "PollNextOverlayEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VREvent_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayInputMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<::OVR::OpenVR::VROverlayInputMethod>)>(&::OVR::OpenVR::CVROverlay::GetOverlayInputMethod)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayInputMethod", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VROverlayInputMethod>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayInputMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::VROverlayInputMethod)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayInputMethod)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fe14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayInputMethod", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayInputMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayMouseScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<::OVR::OpenVR::HmdVector2_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayMouseScale)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fe38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayMouseScale", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdVector2_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayMouseScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<::OVR::OpenVR::HmdVector2_t>)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayMouseScale)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fe5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayMouseScale", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdVector2_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ComputeOverlayIntersection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ::ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>)>(&::OVR::OpenVR::CVROverlay::ComputeOverlayIntersection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fe80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ComputeOverlayIntersection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.IsHoverTargetOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::IsHoverTargetOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "IsHoverTargetOverlay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetGamepadFocusOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::GetGamepadFocusOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406fec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetGamepadFocusOverlay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetGamepadFocusOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(
    &::OVR::OpenVR::CVROverlay::SetGamepadFocusOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406feec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetGamepadFocusOverlay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayNeighbor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayNeighbor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406ff10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayNeighbor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EOverlayDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.MoveGamepadFocusToNeighbor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(::OVR::OpenVR::EOverlayDirection, uint64_t)>(
    &::OVR::OpenVR::CVROverlay::MoveGamepadFocusToNeighbor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406ff34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "MoveGamepadFocusToNeighbor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EOverlayDirection>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayDualAnalogTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::System::IntPtr, float_t)>(&::OVR::OpenVR::CVROverlay::SetOverlayDualAnalogTransform)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406ff58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayDualAnalogTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EDualAnalogWhich>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayDualAnalogTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::ByRef<::OVR::OpenVR::HmdVector2_t>, ::ByRef<float_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayDualAnalogTransform)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406ff7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayDualAnalogTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EDualAnalogWhich>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<::OVR::OpenVR::Texture_t>)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayTexture)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406ffa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::Texture_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ClearOverlayTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(
    &::OVR::OpenVR::CVROverlay::ClearOverlayTexture)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406ffc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ClearOverlayTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::System::IntPtr, uint32_t, uint32_t, uint32_t)>(&::OVR::OpenVR::CVROverlay::SetOverlayRaw)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406ffec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayRaw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayFromFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::StringW)>(
    &::OVR::OpenVR::CVROverlay::SetOverlayFromFile)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4070010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayFromFile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::ByRef<::System::IntPtr>, ::System::IntPtr, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<::OVR::OpenVR::ETextureType>, ::ByRef<::OVR::OpenVR::EColorSpace>,
    ::ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::CVROverlay::GetOverlayTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4070034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTexture", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 9>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETextureType>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EColorSpace>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ReleaseNativeOverlayHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::System::IntPtr)>(
    &::OVR::OpenVR::CVROverlay::ReleaseNativeOverlayHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4070070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ReleaseNativeOverlayHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayTextureSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayTextureSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4070094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTextureSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.CreateDashboardOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(::StringW, ::StringW, ::ByRef<uint64_t>, ::ByRef<uint64_t>)>(&::OVR::OpenVR::CVROverlay::CreateDashboardOverlay)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40700c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "CreateDashboardOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.IsDashboardVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::IsDashboardVisible)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40700ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "IsDashboardVisible",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.IsActiveDashboardOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVROverlay::*)(uint64_t)>(&::OVR::OpenVR::CVROverlay::IsActiveDashboardOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4070110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "IsActiveDashboardOverlay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetDashboardOverlaySceneProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::CVROverlay::SetDashboardOverlaySceneProcess)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4070134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetDashboardOverlaySceneProcess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetDashboardOverlaySceneProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::CVROverlay::GetDashboardOverlaySceneProcess)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4070158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(),
                                                                               "GetDashboardOverlaySceneProcess", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ShowDashboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVROverlay::*)(::StringW)>(&::OVR::OpenVR::CVROverlay::ShowDashboard)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4070180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ShowDashboard", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetPrimaryDashboardDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::GetPrimaryDashboardDevice)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40701a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetPrimaryDashboardDevice",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ShowKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(&::OVR::OpenVR::CVROverlay::ShowKeyboard)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40701c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ShowKeyboard", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ShowKeyboardForOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(&::OVR::OpenVR::CVROverlay::ShowKeyboardForOverlay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x40701f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ShowKeyboardForOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetKeyboardText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVROverlay::*)(::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVROverlay::GetKeyboardText)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4070224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetKeyboardText", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.HideKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::HideKeyboard)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4070248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "HideKeyboard",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetKeyboardTransformAbsolute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVROverlay::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVROverlay::SetKeyboardTransformAbsolute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407026c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetKeyboardTransformAbsolute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetKeyboardPositionForOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::OVR::OpenVR::HmdRect2_t)>(
    &::OVR::OpenVR::CVROverlay::SetKeyboardPositionForOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4070290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetKeyboardPositionForOverlay", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::HmdRect2_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.SetOverlayIntersectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(
    uint64_t, ::ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, uint32_t, uint32_t)>(&::OVR::OpenVR::CVROverlay::SetOverlayIntersectionMask)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40702b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayIntersectionMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.GetOverlayFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::CVROverlay::*)(uint64_t, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::CVROverlay::GetOverlayFlags)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40702d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayFlags", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.ShowMessageOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (::OVR::OpenVR::CVROverlay::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::OVR::OpenVR::CVROverlay::ShowMessageOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4070300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ShowMessageOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVROverlay.CloseMessageOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVROverlay::*)()>(&::OVR::OpenVR::CVROverlay::CloseMessageOverlay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4070324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "CloseMessageOverlay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::FindOverlay(::StringW pchOverlayKey, ::ByRef<uint64_t> pOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "FindOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pchOverlayKey, pOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::CreateOverlay(::StringW pchOverlayKey, ::StringW pchOverlayName, ::ByRef<uint64_t> pOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "CreateOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pchOverlayKey, pchOverlayName, pOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::DestroyOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "DestroyOverlay", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetHighQualityOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetHighQualityOverlay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline uint64_t OVR::OpenVR::CVROverlay::GetHighQualityOverlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetHighQualityOverlay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetOverlayKey(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::ByRef<::OVR::OpenVR::EVROverlayError> pError) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVROverlayError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetOverlayName(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::ByRef<::OVR::OpenVR::EVROverlayError> pError) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVROverlayError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayName(uint64_t ulOverlayHandle, ::StringW pchName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pchName);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayImageData(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ::ByRef<uint32_t> punWidth,
                                                                                   ::ByRef<uint32_t> punHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayImageData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}
inline ::StringW OVR::OpenVR::CVROverlay::GetOverlayErrorNameFromEnum(::OVR::OpenVR::EVROverlayError error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayErrorNameFromEnum", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVROverlayError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, error);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayRenderingPid(uint64_t ulOverlayHandle, uint32_t unPID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayRenderingPid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unPID);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetOverlayRenderingPid(uint64_t ulOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayRenderingPid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayFlag(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayFlag", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, bEnabled);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayFlag(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ::ByRef<bool> pbEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayFlag", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, pbEnabled);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayColor(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fRed, fGreen, fBlue);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayColor(uint64_t ulOverlayHandle, ::ByRef<float_t> pfRed, ::ByRef<float_t> pfGreen, ::ByRef<float_t> pfBlue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayAlpha(uint64_t ulOverlayHandle, float_t fAlpha) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayAlpha", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fAlpha);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayAlpha(uint64_t ulOverlayHandle, ::ByRef<float_t> pfAlpha) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayAlpha", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfAlpha);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTexelAspect(uint64_t ulOverlayHandle, float_t fTexelAspect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTexelAspect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fTexelAspect);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTexelAspect(uint64_t ulOverlayHandle, ::ByRef<float_t> pfTexelAspect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTexelAspect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfTexelAspect);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlaySortOrder(uint64_t ulOverlayHandle, uint32_t unSortOrder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlaySortOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unSortOrder);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlaySortOrder(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punSortOrder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlaySortOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punSortOrder);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayWidthInMeters(uint64_t ulOverlayHandle, float_t fWidthInMeters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayWidthInMeters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fWidthInMeters);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayWidthInMeters(uint64_t ulOverlayHandle, ::ByRef<float_t> pfWidthInMeters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayWidthInMeters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfWidthInMeters);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayAutoCurveDistanceRangeInMeters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, ::ByRef<float_t> pfMinDistanceInMeters,
                                                                                                        ::ByRef<float_t> pfMaxDistanceInMeters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayAutoCurveDistanceRangeInMeters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTextureColorSpace(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTextureColorSpace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EColorSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eTextureColorSpace);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTextureColorSpace(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTextureColorSpace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EColorSpace>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peTextureColorSpace);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTextureBounds(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTextureBounds", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTextureBounds(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTextureBounds", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetOverlayRenderModel(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::ByRef<::OVR::OpenVR::HmdColor_t> pColor,
                                                               ::ByRef<::OVR::OpenVR::EVROverlayError> pError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayRenderModel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdColor_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVROverlayError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayRenderModel(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ::ByRef<::OVR::OpenVR::HmdColor_t> pColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayRenderModel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdColor_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pchRenderModel, pColor);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTransformType(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTransformType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VROverlayTransformType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peTransformType);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTransformAbsolute(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                           ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTransformAbsolute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTransformAbsolute(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                           ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTransformAbsolute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, uint32_t unTrackedDevice,
                                                                                                        ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTransformTrackedDeviceRelative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punTrackedDevice,
                                                                                                        ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTransformTrackedDeviceRelative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTransformTrackedDeviceComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unDeviceIndex, pchComponentName);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punDeviceIndex,
                                                                                                         ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTransformTrackedDeviceComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, ::ByRef<uint64_t> ulOverlayHandleParent,
                                                                                                  ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTransformOverlayRelative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent,
                                                                                                  ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTransformOverlayRelative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::ShowOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ShowOverlay", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::HideOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "HideOverlay", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline bool OVR::OpenVR::CVROverlay::IsOverlayVisible(uint64_t ulOverlayHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "IsOverlayVisible", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetTransformForOverlayCoordinates(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                 ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                                                                                 ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetTransformForOverlayCoordinates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::HmdVector2_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}
inline bool OVR::OpenVR::CVROverlay::PollNextOverlayEvent(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "PollNextOverlayEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VREvent_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayInputMethod(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayInputMethod", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VROverlayInputMethod>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peInputMethod);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayInputMethod(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayInputMethod", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VROverlayInputMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eInputMethod);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayMouseScale(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayMouseScale", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdVector2_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvecMouseScale);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayMouseScale(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayMouseScale", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdVector2_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvecMouseScale);
}
inline bool OVR::OpenVR::CVROverlay::ComputeOverlayIntersection(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                ::ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ComputeOverlayIntersection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle, pParams, pResults);
}
inline bool OVR::OpenVR::CVROverlay::IsHoverTargetOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "IsHoverTargetOverlay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle);
}
inline uint64_t OVR::OpenVR::CVROverlay::GetGamepadFocusOverlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetGamepadFocusOverlay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetGamepadFocusOverlay(uint64_t ulNewFocusOverlay) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetGamepadFocusOverlay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulNewFocusOverlay);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayNeighbor(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayNeighbor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EOverlayDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, eDirection, ulFrom, ulTo);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::MoveGamepadFocusToNeighbor(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "MoveGamepadFocusToNeighbor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EOverlayDirection>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, eDirection, ulFrom);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayDualAnalogTransform(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter, float_t fRadius) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayDualAnalogTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EDualAnalogWhich>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlay, eWhich, vCenter, fRadius);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayDualAnalogTransform(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter,
                                                                                             ::ByRef<float_t> pfRadius) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayDualAnalogTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EDualAnalogWhich>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlay, eWhich, pvCenter, pfRadius);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayTexture(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::Texture_t> pTexture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::Texture_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pTexture);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::ClearOverlayTexture(uint64_t ulOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ClearOverlayTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayRaw(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayRaw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayFromFile(uint64_t ulOverlayHandle, ::StringW pchFilePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayFromFile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pchFilePath);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTexture(uint64_t ulOverlayHandle, ::ByRef<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef,
                                                                                 ::ByRef<uint32_t> pWidth, ::ByRef<uint32_t> pHeight, ::ByRef<uint32_t> pNativeFormat,
                                                                                 ::ByRef<::OVR::OpenVR::ETextureType> pAPIType, ::ByRef<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                                                 ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTexture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 9>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::ETextureType>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EColorSpace>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat,
                                                                                    pAPIType, pColorSpace, pTextureBounds);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::ReleaseNativeOverlayHandle(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ReleaseNativeOverlayHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayTextureSize(uint64_t ulOverlayHandle, ::ByRef<uint32_t> pWidth, ::ByRef<uint32_t> pHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayTextureSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pWidth, pHeight);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::CreateDashboardOverlay(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ::ByRef<uint64_t> pMainHandle,
                                                                                      ::ByRef<uint64_t> pThumbnailHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "CreateDashboardOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}
inline bool OVR::OpenVR::CVROverlay::IsDashboardVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "IsDashboardVisible",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVROverlay::IsActiveDashboardOverlay(uint64_t ulOverlayHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "IsActiveDashboardOverlay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, uint32_t unProcessId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetDashboardOverlaySceneProcess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unProcessId);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, ::ByRef<uint32_t> punProcessId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetDashboardOverlaySceneProcess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punProcessId);
}
inline void OVR::OpenVR::CVROverlay::ShowDashboard(::StringW pchOverlayToShow) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ShowDashboard", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pchOverlayToShow);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetPrimaryDashboardDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetPrimaryDashboardDevice",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::ShowKeyboard(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                                                            bool bUseMinimalMode, uint64_t uUserValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ShowKeyboard", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode,
                                                                                    uUserValue);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::ShowKeyboardForOverlay(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription,
                                                                                      uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ShowKeyboardForOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText,
                                                                                    bUseMinimalMode, uUserValue);
}
inline uint32_t OVR::OpenVR::CVROverlay::GetKeyboardText(::System::Text::StringBuilder* pchText, uint32_t cchText) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetKeyboardText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchText, cchText);
}
inline void OVR::OpenVR::CVROverlay::HideKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "HideKeyboard",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OVR::OpenVR::CVROverlay::SetKeyboardTransformAbsolute(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetKeyboardTransformAbsolute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}
inline void OVR::OpenVR::CVROverlay::SetKeyboardPositionForOverlay(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetKeyboardPositionForOverlay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::HmdRect2_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ulOverlayHandle, avoidRect);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::SetOverlayIntersectionMask(uint64_t ulOverlayHandle, ::ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                          uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "SetOverlayIntersectionMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::CVROverlay::GetOverlayFlags(uint64_t ulOverlayHandle, ::ByRef<uint32_t> pFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "GetOverlayFlags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pFlags);
}
inline ::OVR::OpenVR::VRMessageOverlayResponse OVR::OpenVR::CVROverlay::ShowMessageOverlay(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text,
                                                                                           ::StringW pchButton2Text, ::StringW pchButton3Text) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "ShowMessageOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::VRMessageOverlayResponse, false>(this, ___internal_method, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text,
                                                                                             pchButton3Text);
}
inline void OVR::OpenVR::CVROverlay::CloseMessageOverlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVROverlay*>::get(), "CloseMessageOverlay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVR::OpenVR::CVROverlay* OVR::OpenVR::CVROverlay::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVROverlay*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVROverlay::CVROverlay() {}
