#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarHeadOffset.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarHeadOffset_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__MultiplayerAvatarPoseController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)()>(&::BeatSaber::AvatarCore::AvatarHeadOffset::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x221e344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)()>(&::BeatSaber::AvatarCore::AvatarHeadOffset::OnDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x221e480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset.HandleMultiplayerAvatarPoseControllerDidUpdatePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::AvatarCore::AvatarHeadOffset::HandleMultiplayerAvatarPoseControllerDidUpdatePose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x221e5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(), "HandleMultiplayerAvatarPoseControllerDidUpdatePose",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)()>(&::BeatSaber::AvatarCore::AvatarHeadOffset::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x221e650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr void BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_set__positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionOffset = value;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController>& BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_get__avatarPoseController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseController;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController> const& BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_get__avatarPoseController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseController;
}
constexpr void BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_set__avatarPoseController(::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarPoseController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::HandleMultiplayerAvatarPoseControllerDidUpdatePose(::UnityEngine::Vector3 headLocalPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(), "HandleMultiplayerAvatarPoseControllerDidUpdatePose",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headLocalPosition);
}
inline ::BeatSaber::AvatarCore::AvatarHeadOffset* BeatSaber::AvatarCore::AvatarHeadOffset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::AvatarHeadOffset*>());
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarHeadOffset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarHeadOffset::AvatarHeadOffset() {}
