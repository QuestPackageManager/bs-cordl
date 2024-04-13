#pragma once
#include "GlobalNamespace/zzzz__OVRSkeleton_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboardHands_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboardHands_def.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "LeftHandTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "LeftPresenceTransform", ty:
// "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "RightHandTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "RightPresenceTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "BoneName", ty:
// "::GlobalNamespace::__OVRSkeleton__BoneId", modifiers: "", def_value: Some("{}") }, CppParam { name: "HandPresenceLeftBoneName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "HandPresenceRightBoneName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping::__OVRTrackedKeyboardHands__HandBoneMapping(
    ::UnityW<::UnityEngine::Transform> LeftHandTransform, ::UnityW<::UnityEngine::Transform> LeftPresenceTransform, ::UnityW<::UnityEngine::Transform> RightHandTransform,
    ::UnityW<::UnityEngine::Transform> RightPresenceTransform, ::GlobalNamespace::__OVRSkeleton__BoneId BoneName, ::StringW HandPresenceLeftBoneName, ::StringW HandPresenceRightBoneName) noexcept {
  this->LeftHandTransform = LeftHandTransform;
  this->LeftPresenceTransform = LeftPresenceTransform;
  this->RightHandTransform = RightHandTransform;
  this->RightPresenceTransform = RightPresenceTransform;
  this->BoneName = BoneName;
  this->HandPresenceLeftBoneName = HandPresenceLeftBoneName;
  this->HandPresenceRightBoneName = HandPresenceRightBoneName;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping::__OVRTrackedKeyboardHands__HandBoneMapping() {}
// Ctor Parameters [CppParam { name: "leftVisible", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightVisible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent(bool leftVisible,
                                                                                                                                                                          bool rightVisible) noexcept {
  this->leftVisible = leftVisible;
  this->rightVisible = rightVisible;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.get_RightHandOverKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboardHands::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::get_RightHandOverKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6f57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(),
                                                                               "get_RightHandOverKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.set_RightHandOverKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)(bool)>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::set_RightHandOverKeyboard)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6f584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "set_RightHandOverKeyboard",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.get_LeftHandOverKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboardHands::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::get_LeftHandOverKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6f590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(),
                                                                               "get_LeftHandOverKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.set_LeftHandOverKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)(bool)>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::set_LeftHandOverKeyboard)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6f598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "set_LeftHandOverKeyboard",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&::GlobalNamespace::OVRTrackedKeyboardHands::Awake)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2a6f5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&::GlobalNamespace::OVRTrackedKeyboardHands::Start)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2a6f788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.get_AreControllersActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboardHands::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::get_AreControllersActive)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a6fbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(),
                                                                               "get_AreControllersActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&::GlobalNamespace::OVRTrackedKeyboardHands::LateUpdate)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x2a6fc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.ShouldEnablePassthrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboardHands::*)(float_t)>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::ShouldEnablePassthrough)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a707d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "ShouldEnablePassthrough",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.ShouldEnableModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboardHands::*)(float_t)>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::ShouldEnableModel)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a7083c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "ShouldEnableModel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.GetHandDistanceToKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboardHands::*)(::GlobalNamespace::OVRSkeleton*)>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::GetHandDistanceToKeyboard)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2a70500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "GetHandDistanceToKeyboard", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.ComputeOpacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboardHands::*)(float_t, float_t, float_t)>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::ComputeOpacity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a70ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "ComputeOpacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.SetHandModelsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)(bool, bool)>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::SetHandModelsEnabled)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2a708a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "SetHandModelsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.RetargetHandTrackingToHandPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::RetargetHandTrackingToHandPresence)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2a6fa8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "RetargetHandTrackingToHandPresence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.StopHandPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::StopHandPresence)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a70ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(),
                                                                               "StopHandPresence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.DisableHandObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboardHands::DisableHandObjects)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2a70414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(),
                                                                               "DisableHandObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.TrackedKeyboardActiveUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)(
    ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent)>(&::GlobalNamespace::OVRTrackedKeyboardHands::TrackedKeyboardActiveUpdated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a70b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "TrackedKeyboardActiveUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands.TrackedKeyboardVisibilityChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)(
    ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent)>(&::GlobalNamespace::OVRTrackedKeyboardHands::TrackedKeyboardVisibilityChanged)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2a70b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "TrackedKeyboardVisibilityChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboardHands._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&::GlobalNamespace::OVRTrackedKeyboardHands::_ctor)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x2a70cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_LeftHandPresence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LeftHandPresence;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_LeftHandPresence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LeftHandPresence;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_LeftHandPresence(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LeftHandPresence)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_RightHandPresence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightHandPresence;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_RightHandPresence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightHandPresence;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_RightHandPresence(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RightHandPresence)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_handPresenceInitialized_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handPresenceInitialized_;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_handPresenceInitialized_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handPresenceInitialized_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_handPresenceInitialized_(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handPresenceInitialized_ = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandRoot_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandRoot_;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandRoot_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandRoot_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_leftHandRoot_(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHandRoot_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandRoot_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandRoot_;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandRoot_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandRoot_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_rightHandRoot_(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHandRoot_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_KeyboardTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyboardTracker;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_KeyboardTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyboardTracker;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_KeyboardTracker(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyboardTracker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_cameraRig_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig_;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_cameraRig_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_cameraRig_(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraRig_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRHand>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHand_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand_;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHand_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_leftHand_(::UnityW<::GlobalNamespace::OVRHand> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHand_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandSkeleton_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandSkeleton_;
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandSkeleton_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandSkeleton_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_leftHandSkeleton_(::UnityW<::GlobalNamespace::OVRSkeleton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHandSkeleton_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeletonRenderer>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandSkeletonRenderer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandSkeletonRenderer_;
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeletonRenderer> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandSkeletonRenderer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandSkeletonRenderer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_leftHandSkeletonRenderer_(::UnityW<::GlobalNamespace::OVRSkeletonRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHandSkeletonRenderer_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandSkeletonRendererGO_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandSkeletonRendererGO_;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandSkeletonRendererGO_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandSkeletonRendererGO_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_leftHandSkeletonRendererGO_(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHandSkeletonRendererGO_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandSkinnedMeshRenderer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandSkinnedMeshRenderer_;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandSkinnedMeshRenderer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandSkinnedMeshRenderer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_leftHandSkinnedMeshRenderer_(::UnityW<::UnityEngine::SkinnedMeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHandSkinnedMeshRenderer_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRMeshRenderer>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandMeshRenderer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandMeshRenderer_;
}
constexpr ::UnityW<::GlobalNamespace::OVRMeshRenderer> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_leftHandMeshRenderer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandMeshRenderer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_leftHandMeshRenderer_(::UnityW<::GlobalNamespace::OVRMeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHandMeshRenderer_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRHand>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHand_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand_;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHand_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_rightHand_(::UnityW<::GlobalNamespace::OVRHand> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHand_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandSkeleton_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandSkeleton_;
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandSkeleton_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandSkeleton_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_rightHandSkeleton_(::UnityW<::GlobalNamespace::OVRSkeleton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHandSkeleton_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeletonRenderer>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandSkeletonRenderer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandSkeletonRenderer_;
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeletonRenderer> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandSkeletonRenderer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandSkeletonRenderer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_rightHandSkeletonRenderer_(::UnityW<::GlobalNamespace::OVRSkeletonRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHandSkeletonRenderer_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandSkeletonRendererGO_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandSkeletonRendererGO_;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandSkeletonRendererGO_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandSkeletonRendererGO_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_rightHandSkeletonRendererGO_(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHandSkeletonRendererGO_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRMeshRenderer>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandMeshRenderer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandMeshRenderer_;
}
constexpr ::UnityW<::GlobalNamespace::OVRMeshRenderer> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandMeshRenderer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandMeshRenderer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_rightHandMeshRenderer_(::UnityW<::GlobalNamespace::OVRMeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHandMeshRenderer_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandSkinnedMeshRenderer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandSkinnedMeshRenderer_;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_rightHandSkinnedMeshRenderer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandSkinnedMeshRenderer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_rightHandSkinnedMeshRenderer_(::UnityW<::UnityEngine::SkinnedMeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHandSkinnedMeshRenderer_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get__RightHandOverKeyboard_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RightHandOverKeyboard_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get__RightHandOverKeyboard_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RightHandOverKeyboard_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set__RightHandOverKeyboard_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RightHandOverKeyboard_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get__LeftHandOverKeyboard_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LeftHandOverKeyboard_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get__LeftHandOverKeyboard_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LeftHandOverKeyboard_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set__LeftHandOverKeyboard_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LeftHandOverKeyboard_k__BackingField = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent>&
GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_lastVisibilityEvent_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastVisibilityEvent_;
}
constexpr ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> const&
GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_lastVisibilityEvent_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastVisibilityEvent_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_lastVisibilityEvent_(
    ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastVisibilityEvent_ = value;
}
constexpr ::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*>&
GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_boneMappings_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boneMappings_;
}
constexpr ::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*> const&
GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_boneMappings_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boneMappings_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_boneMappings_(
    ::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___boneMappings_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_HandsMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandsMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_HandsMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandsMaterial;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_HandsMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HandsMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_keyboardPositionID_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardPositionID_;
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_keyboardPositionID_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardPositionID_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_keyboardPositionID_(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyboardPositionID_ = value;
}
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_keyboardRotationID_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardRotationID_;
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_keyboardRotationID_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardRotationID_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_keyboardRotationID_(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyboardRotationID_ = value;
}
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_keyboardScaleID_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardScaleID_;
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_get_keyboardScaleID_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardScaleID_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__cordl_internal_set_keyboardScaleID_(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyboardScaleID_ = value;
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::setStaticF_handInnerAlphaThreshold_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "handInnerAlphaThreshold_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboardHands::getStaticF_handInnerAlphaThreshold_() {
  return ::cordl_internals::getStaticField<float_t, "handInnerAlphaThreshold_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::setStaticF_handOuterAlphaThreshold_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "handOuterAlphaThreshold_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboardHands::getStaticF_handOuterAlphaThreshold_() {
  return ::cordl_internals::getStaticField<float_t, "handOuterAlphaThreshold_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::setStaticF_maximumPassthroughHandsDistance_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "maximumPassthroughHandsDistance_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboardHands::getStaticF_maximumPassthroughHandsDistance_() {
  return ::cordl_internals::getStaticField<float_t, "maximumPassthroughHandsDistance_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::setStaticF_minimumModelHandsDistance_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "minimumModelHandsDistance_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboardHands::getStaticF_minimumModelHandsDistance_() {
  return ::cordl_internals::getStaticField<float_t, "minimumModelHandsDistance_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get>();
}
inline bool GlobalNamespace::OVRTrackedKeyboardHands::get_RightHandOverKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(),
                                                                             "get_RightHandOverKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::set_RightHandOverKeyboard(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "set_RightHandOverKeyboard",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboardHands::get_LeftHandOverKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(),
                                                                             "get_LeftHandOverKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::set_LeftHandOverKeyboard(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "set_LeftHandOverKeyboard",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboardHands::get_AreControllersActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(),
                                                                             "get_AreControllersActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboardHands::ShouldEnablePassthrough(float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "ShouldEnablePassthrough",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, distance);
}
inline bool GlobalNamespace::OVRTrackedKeyboardHands::ShouldEnableModel(float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "ShouldEnableModel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, distance);
}
inline float_t GlobalNamespace::OVRTrackedKeyboardHands::GetHandDistanceToKeyboard(::GlobalNamespace::OVRSkeleton* handSkeleton) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "GetHandDistanceToKeyboard", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeleton*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, handSkeleton);
}
inline float_t GlobalNamespace::OVRTrackedKeyboardHands::ComputeOpacity(float_t distance, float_t innerThreshold, float_t outerThreshold) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "ComputeOpacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, distance, innerThreshold, outerThreshold);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::SetHandModelsEnabled(bool enableLeftModel, bool enableRightModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "SetHandModelsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enableLeftModel, enableRightModel);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::RetargetHandTrackingToHandPresence() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "RetargetHandTrackingToHandPresence",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::StopHandPresence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(),
                                                                             "StopHandPresence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::DisableHandObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(),
                                                                             "DisableHandObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::TrackedKeyboardActiveUpdated(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "TrackedKeyboardActiveUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::TrackedKeyboardVisibilityChanged(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), "TrackedKeyboardVisibilityChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::GlobalNamespace::OVRTrackedKeyboardHands* GlobalNamespace::OVRTrackedKeyboardHands::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTrackedKeyboardHands*>());
}
inline void GlobalNamespace::OVRTrackedKeyboardHands::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboardHands*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboardHands::OVRTrackedKeyboardHands() {}
