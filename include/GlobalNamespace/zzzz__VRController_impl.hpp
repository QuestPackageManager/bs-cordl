#pragma once
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRController.get_node
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRNode (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_node)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_node",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.set_node
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::VRController::set_node)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_node", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_nodeIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_nodeIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_nodeIdx",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.set_nodeIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(int32_t)>(&::GlobalNamespace::VRController::set_nodeIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_nodeIdx", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20ff374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_position",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_rotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20ff394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_rotation",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_forward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_forward)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20ff3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_forward",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_triggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_triggerValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x20ff3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_triggerValue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_thumbstick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_thumbstick)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x20ff4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_thumbstick",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_active
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_active)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20ff55c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_active",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_viewAnchorTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::GlobalNamespace::VRController::*)()>(
    &::GlobalNamespace::VRController::get_viewAnchorTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(),
                                                                               "get_viewAnchorTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.add_anchorUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::VRController::*)(::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>*)>(&::GlobalNamespace::VRController::add_anchorUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20ff584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "add_anchorUpdateEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.remove_anchorUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::VRController::*)(::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>*)>(&::GlobalNamespace::VRController::remove_anchorUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20ff634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "remove_anchorUpdateEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_mouseMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_mouseMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_mouseMode",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.set_mouseMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(bool)>(&::GlobalNamespace::VRController::set_mouseMode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x20ff6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_mouseMode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(::GlobalNamespace::IVRPlatformHelper*)>(
    &::GlobalNamespace::VRController::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20ff82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20ff9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::OnDisable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x20ff9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.SetupVRPlatformHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::SetupVRPlatformHelper)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x20ff838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "SetupVRPlatformHelper",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.TryGetControllerOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VRController::*)(ByRef<::UnityEngine::Pose>)>(
    &::GlobalNamespace::VRController::TryGetControllerOffset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x20ffb00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "TryGetControllerOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.TryGetControllerOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::IVRPlatformHelper*, ::GlobalNamespace::VRControllerTransformOffset*, ::UnityEngine::XR::XRNode, ByRef<::UnityEngine::Pose>)>(
        &::GlobalNamespace::VRController::TryGetControllerOffset)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x20ffb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "TryGetControllerOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VRControllerTransformOffset*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.UpdateAnchorOffsetPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)(::UnityEngine::Pose)>(
    &::GlobalNamespace::VRController::UpdateAnchorOffsetPose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x20ffee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "UpdateAnchorOffsetPose", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.AdjustPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::GlobalNamespace::VRController::AdjustPose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x20ffe48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "AdjustPose", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.InvertControllerPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::GlobalNamespace::VRController::InvertControllerPose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x20ffe98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "InvertControllerPose", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.UpdateAnchorOffsetPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::UpdateAnchorOffsetPose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x20ff7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(),
                                                                               "UpdateAnchorOffsetPose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::Update)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x20ffffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21002b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::VRController::__get__node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::VRController::__get__node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr void GlobalNamespace::VRController::__set__node(::UnityEngine::XR::XRNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____node = value;
}
constexpr int32_t& GlobalNamespace::VRController::__get__nodeIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeIdx;
}
constexpr int32_t const& GlobalNamespace::VRController::__get__nodeIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeIdx;
}
constexpr void GlobalNamespace::VRController::__set__nodeIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeIdx = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::VRController::__get__viewAnchorTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewAnchorTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::VRController::__get__viewAnchorTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewAnchorTransform;
}
constexpr void GlobalNamespace::VRController::__set__viewAnchorTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewAnchorTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::VRControllerTransformOffset*& GlobalNamespace::VRController::__get__transformOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformOffset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRControllerTransformOffset*> const& GlobalNamespace::VRController::__get__transformOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformOffset;
}
constexpr void GlobalNamespace::VRController::__set__transformOffset(::GlobalNamespace::VRControllerTransformOffset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::VRController::__get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::VRController::__get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::VRController::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>*& GlobalNamespace::VRController::__get_anchorUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorUpdateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>*> const& GlobalNamespace::VRController::__get_anchorUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorUpdateEvent;
}
constexpr void GlobalNamespace::VRController::__set_anchorUpdateEvent(::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anchorUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRController::__get__lastTrackedPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTrackedPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRController::__get__lastTrackedPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTrackedPosition;
}
constexpr void GlobalNamespace::VRController::__set__lastTrackedPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastTrackedPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRController::__get__lastTrackedRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTrackedRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRController::__get__lastTrackedRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTrackedRotation;
}
constexpr void GlobalNamespace::VRController::__set__lastTrackedRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastTrackedRotation = value;
}
constexpr bool& GlobalNamespace::VRController::__get__mouseMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseMode;
}
constexpr bool const& GlobalNamespace::VRController::__get__mouseMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseMode;
}
constexpr void GlobalNamespace::VRController::__set__mouseMode(bool value) {
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
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::set_node(::UnityEngine::XR::XRNode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_node", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::VRController::get_nodeIdx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_nodeIdx",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::set_nodeIdx(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_nodeIdx", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRController::get_position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_position",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::VRController::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_rotation",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRController::get_forward() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_forward",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::VRController::get_triggerValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_triggerValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::VRController::get_thumbstick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_thumbstick",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline bool GlobalNamespace::VRController::get_active() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_active",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Transform* GlobalNamespace::VRController::get_viewAnchorTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_viewAnchorTransform",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::add_anchorUpdateEvent(::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "add_anchorUpdateEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::VRController::remove_anchorUpdateEvent(::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "remove_anchorUpdateEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::VRController::get_mouseMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "get_mouseMode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::set_mouseMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "set_mouseMode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::VRController::Init(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vrPlatformHelper);
}
inline void GlobalNamespace::VRController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::SetupVRPlatformHelper() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "SetupVRPlatformHelper",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::VRController::TryGetControllerOffset(ByRef<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "TryGetControllerOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, poseOffset);
}
inline bool GlobalNamespace::VRController::TryGetControllerOffset(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper, ::GlobalNamespace::VRControllerTransformOffset* transformOffset,
                                                                  ::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "TryGetControllerOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VRControllerTransformOffset*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, vrPlatformHelper, transformOffset, node, poseOffset);
}
inline void GlobalNamespace::VRController::UpdateAnchorOffsetPose(::UnityEngine::Pose poseOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "UpdateAnchorOffsetPose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, poseOffset);
}
inline ::UnityEngine::Pose GlobalNamespace::VRController::AdjustPose(::UnityEngine::Pose originalPose, ::UnityEngine::Pose adjustment) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "AdjustPose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(nullptr, ___internal_method, originalPose, adjustment);
}
inline ::UnityEngine::Pose GlobalNamespace::VRController::InvertControllerPose(::UnityEngine::Pose finalPose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "InvertControllerPose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(nullptr, ___internal_method, finalPose);
}
inline void GlobalNamespace::VRController::UpdateAnchorOffsetPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "UpdateAnchorOffsetPose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VRController* GlobalNamespace::VRController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::VRController*>());
}
inline void GlobalNamespace::VRController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRController::VRController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
