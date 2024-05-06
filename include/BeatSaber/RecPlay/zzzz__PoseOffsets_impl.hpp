#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseOffsets.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseOffsets_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseOffsets.AdjustHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::RecPlay::PoseOffsets::*)(ByRef<::UnityEngine::Pose>)>(
    &::BeatSaber::RecPlay::PoseOffsets::AdjustHead)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x10689d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get(), "AdjustHead", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseOffsets.AdjustLeftHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::RecPlay::PoseOffsets::*)(ByRef<::UnityEngine::Pose>)>(
    &::BeatSaber::RecPlay::PoseOffsets::AdjustLeftHand)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x10688f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get(), "AdjustLeftHand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseOffsets.AdjustRightHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::RecPlay::PoseOffsets::*)(ByRef<::UnityEngine::Pose>)>(
    &::BeatSaber::RecPlay::PoseOffsets::AdjustRightHand)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1068964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get(), "AdjustRightHand", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseOffsets.AdjustPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Pose>, ByRef<::UnityEngine::Pose>, ByRef<::UnityEngine::Pose>)>(
    &::BeatSaber::RecPlay::PoseOffsets::AdjustPose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1068cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get(), "AdjustPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::RecPlay::PoseOffsets::setStaticF_kDefault(::BeatSaber::RecPlay::PoseOffsets value) {
  ::cordl_internals::setStaticField<::BeatSaber::RecPlay::PoseOffsets, "kDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get>(
      std::forward<::BeatSaber::RecPlay::PoseOffsets>(value));
}
inline ::BeatSaber::RecPlay::PoseOffsets BeatSaber::RecPlay::PoseOffsets::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::BeatSaber::RecPlay::PoseOffsets, "kDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get>();
}
inline void BeatSaber::RecPlay::PoseOffsets::AdjustHead(ByRef<::UnityEngine::Pose> pose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get(), "AdjustHead", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pose);
}
inline void BeatSaber::RecPlay::PoseOffsets::AdjustLeftHand(ByRef<::UnityEngine::Pose> pose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get(), "AdjustLeftHand", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pose);
}
inline void BeatSaber::RecPlay::PoseOffsets::AdjustRightHand(ByRef<::UnityEngine::Pose> pose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get(), "AdjustRightHand", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pose);
}
inline void BeatSaber::RecPlay::PoseOffsets::AdjustPose(ByRef<::UnityEngine::Pose> pose, ByRef<::UnityEngine::Pose> room, ByRef<::UnityEngine::Pose> controller) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get(), "AdjustPose", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pose, room, controller);
}
// Ctor Parameters [CppParam { name: "room", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftController", ty: "::UnityEngine::Pose", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "rightController", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::RecPlay::PoseOffsets::PoseOffsets(::UnityEngine::Pose room, ::UnityEngine::Pose leftController, ::UnityEngine::Pose rightController) noexcept {
  this->room = room;
  this->leftController = leftController;
  this->rightController = rightController;
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PoseOffsets::PoseOffsets() {}
