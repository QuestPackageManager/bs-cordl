#pragma once
// IWYU pragma private; include "GlobalNamespace/VRController.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRController.get_node
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRNode (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_node)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a9034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_node",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.set_node
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::VRController::set_node)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a903c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_node", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_nodeIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_nodeIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a9044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_nodeIndex",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.set_nodeIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(int32_t)>(&::GlobalNamespace::VRController::set_nodeIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a904c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_nodeIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56a9054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_position",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_rotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56a9074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_rotation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_forward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_forward)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56a9094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_forward",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_triggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_triggerValue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56a90b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_triggerValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_thumbstick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_thumbstick)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56a91b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_thumbstick",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_active
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_active)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56a9260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_active",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_viewAnchorTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::VRController::*)()>(
    &::GlobalNamespace::VRController::get_viewAnchorTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a9280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(),
                                                                               "get_viewAnchorTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.add_anchorUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*)>(&::GlobalNamespace::VRController::add_anchorUpdateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56a9288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "add_anchorUpdateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.remove_anchorUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*)>(&::GlobalNamespace::VRController::remove_anchorUpdateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56a9348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "remove_anchorUpdateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_poseFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_poseFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a9408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_poseFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_poseValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_poseValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a9410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_poseValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_mouseMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_mouseMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a9418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_mouseMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.set_mouseMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(bool)>(&::GlobalNamespace::VRController::set_mouseMode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56a9420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_mouseMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(::GlobalNamespace::IVRPlatformHelper*)>(
    &::GlobalNamespace::VRController::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56a9568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56a976c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::OnDisable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56a9a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::Update)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x56a9794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.TryGetControllerOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VRController::*)(::ByRef<::UnityEngine::Pose>)>(
    &::GlobalNamespace::VRController::TryGetControllerOffset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x56a9bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "TryGetControllerOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.TryGetControllerOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::IVRPlatformHelper*, ::GlobalNamespace::VRControllerTransformOffset*, ::ByRef<::UnityEngine::XR::XRNode>, ::ByRef<::UnityEngine::Pose>)>(
        &::GlobalNamespace::VRController::TryGetControllerOffset)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x56a9c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "TryGetControllerOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VRControllerTransformOffset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRNode>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.UpdateAnchorOffsetPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(::UnityEngine::Pose)>(
    &::GlobalNamespace::VRController::UpdateAnchorOffsetPose)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56aa3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "UpdateAnchorOffsetPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.AdjustPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::GlobalNamespace::VRController::AdjustPose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56aa1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "AdjustPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.InvertControllerPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::GlobalNamespace::VRController::InvertControllerPose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56aa1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "InvertControllerPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.SetupVRPlatformHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::SetupVRPlatformHelper)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x56a9574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "SetupVRPlatformHelper",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.UpdatePoseOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::XR::XRNode>, ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Vector3>,
                                                                                           ::ByRef<::UnityEngine::Pose>)>(&::GlobalNamespace::VRController::UpdatePoseOffset)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x56aa27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "UpdatePoseOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRNode>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.UpdateAnchorOffsetPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::UpdateAnchorOffsetPose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56a951c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(),
                                                                               "UpdateAnchorOffsetPose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56aa4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::VRController::__cordl_internal_get__node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::VRController::__cordl_internal_get__node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__node(::UnityEngine::XR::XRNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____node = value;
}
constexpr int32_t& GlobalNamespace::VRController::__cordl_internal_get__nodeIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeIndex;
}
constexpr int32_t const& GlobalNamespace::VRController::__cordl_internal_get__nodeIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeIndex;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__nodeIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeIndex = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRController::__cordl_internal_get__viewAnchorTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewAnchorTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRController::__cordl_internal_get__viewAnchorTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewAnchorTransform;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__viewAnchorTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewAnchorTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::VRControllerTransformOffset>& GlobalNamespace::VRController::__cordl_internal_get__transformOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformOffset;
}
constexpr ::UnityW<::GlobalNamespace::VRControllerTransformOffset> const& GlobalNamespace::VRController::__cordl_internal_get__transformOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformOffset;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__transformOffset(::UnityW<::GlobalNamespace::VRControllerTransformOffset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::VRController::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::VRController::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*& GlobalNamespace::VRController::__cordl_internal_get_anchorUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorUpdateEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* const& GlobalNamespace::VRController::__cordl_internal_get_anchorUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorUpdateEvent;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anchorUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::VRController::__cordl_internal_get_autoPlayActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoPlayActive;
}
constexpr bool const& GlobalNamespace::VRController::__cordl_internal_get_autoPlayActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoPlayActive;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set_autoPlayActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoPlayActive = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRController::__cordl_internal_get__lastTrackedPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTrackedPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRController::__cordl_internal_get__lastTrackedPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTrackedPosition;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__lastTrackedPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastTrackedPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRController::__cordl_internal_get__lastTrackedRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTrackedRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRController::__cordl_internal_get__lastTrackedRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTrackedRotation;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__lastTrackedRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastTrackedRotation = value;
}
constexpr int32_t& GlobalNamespace::VRController::__cordl_internal_get__poseFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseFrame;
}
constexpr int32_t const& GlobalNamespace::VRController::__cordl_internal_get__poseFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseFrame;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__poseFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____poseFrame = value;
}
constexpr bool& GlobalNamespace::VRController::__cordl_internal_get__poseValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseValid;
}
constexpr bool const& GlobalNamespace::VRController::__cordl_internal_get__poseValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseValid;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__poseValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____poseValid = value;
}
constexpr bool& GlobalNamespace::VRController::__cordl_internal_get__mouseMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseMode;
}
constexpr bool const& GlobalNamespace::VRController::__cordl_internal_get__mouseMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseMode;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__mouseMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mouseMode = value;
}
inline void GlobalNamespace::VRController::setStaticF_kLeftControllerDefaultPosition(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kLeftControllerDefaultPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRController::getStaticF_kLeftControllerDefaultPosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kLeftControllerDefaultPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get>();
}
inline void GlobalNamespace::VRController::setStaticF_kRightControllerDefaultPosition(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kRightControllerDefaultPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRController::getStaticF_kRightControllerDefaultPosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kRightControllerDefaultPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get>();
}
inline ::UnityEngine::XR::XRNode GlobalNamespace::VRController::get_node() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_node",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::set_node(::UnityEngine::XR::XRNode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_node", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::VRController::get_nodeIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_nodeIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::set_nodeIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_nodeIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRController::get_position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_position",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::VRController::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_rotation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRController::get_forward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_forward",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::VRController::get_triggerValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_triggerValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::VRController::get_thumbstick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_thumbstick",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline bool GlobalNamespace::VRController::get_active() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_active",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::VRController::get_viewAnchorTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_viewAnchorTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::add_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "add_anchorUpdateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::VRController::remove_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "remove_anchorUpdateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::VRController::get_poseFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_poseFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::VRController::get_poseValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_poseValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::VRController::get_mouseMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_mouseMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::set_mouseMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_mouseMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::VRController::Init(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vrPlatformHelper);
}
inline void GlobalNamespace::VRController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::VRController::TryGetControllerOffset(::ByRef<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "TryGetControllerOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, poseOffset);
}
inline bool GlobalNamespace::VRController::TryGetControllerOffset(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper, ::GlobalNamespace::VRControllerTransformOffset* transformOffset,
                                                                  ::ByRef<::UnityEngine::XR::XRNode> node, ::ByRef<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "TryGetControllerOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VRControllerTransformOffset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRNode>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, vrPlatformHelper, transformOffset, node, poseOffset);
}
inline void GlobalNamespace::VRController::UpdateAnchorOffsetPose(::UnityEngine::Pose poseOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "UpdateAnchorOffsetPose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, poseOffset);
}
inline ::UnityEngine::Pose GlobalNamespace::VRController::AdjustPose(::UnityEngine::Pose originalPose, ::UnityEngine::Pose adjustment) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "AdjustPose", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(nullptr, ___internal_method, originalPose, adjustment);
}
inline ::UnityEngine::Pose GlobalNamespace::VRController::InvertControllerPose(::UnityEngine::Pose finalPose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "InvertControllerPose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(nullptr, ___internal_method, finalPose);
}
inline void GlobalNamespace::VRController::SetupVRPlatformHelper() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "SetupVRPlatformHelper",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::UpdatePoseOffset(::ByRef<::UnityEngine::XR::XRNode> node, ::ByRef<::UnityEngine::Vector3> customPositionOffset,
                                                            ::ByRef<::UnityEngine::Vector3> customRotationOffset, ::ByRef<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "UpdatePoseOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRNode>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, node, customPositionOffset, customRotationOffset, poseOffset);
}
inline void GlobalNamespace::VRController::UpdateAnchorOffsetPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "UpdateAnchorOffsetPose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VRController* GlobalNamespace::VRController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::VRController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRController::VRController() {}
