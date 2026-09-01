#pragma once
// IWYU pragma private; include "GlobalNamespace\VRController.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__IXRSystemState_def.hpp"
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_def.hpp"
#include "GlobalNamespace/zzzz__XRSystemEventType_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRController.get_node
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRNode (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_node)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585bae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_node", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.set_node
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::VRController::set_node)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585baf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "set_node", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_nodeIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_nodeIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585baf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_nodeIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.set_nodeIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)(int32_t)>(&::GlobalNamespace::VRController::set_nodeIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585bb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "set_nodeIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x585bb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_rotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x585bb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_forward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_forward)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x585bb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_forward", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_triggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_triggerValue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x585bb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_triggerValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_thumbstick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_thumbstick)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x585bc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_thumbstick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_active)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x585bd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_viewAnchorTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_viewAnchorTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585bd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_viewAnchorTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.add_anchorUpdateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*)>(
    &::GlobalNamespace::VRController::add_anchorUpdateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x585bd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(),
                                                { "add_anchorUpdateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.remove_anchorUpdateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*)>(
    &::GlobalNamespace::VRController::remove_anchorUpdateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x585bdfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(),
                                                { "remove_anchorUpdateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_poseFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_poseFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585bebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_poseFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_poseValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_poseValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585bec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_poseValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.get_mouseMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::get_mouseMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585becc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_mouseMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.set_mouseMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)(bool)>(&::GlobalNamespace::VRController::set_mouseMode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x585bed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "set_mouseMode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)(::GlobalNamespace::IVRPlatformHelper*, ::GlobalNamespace::IXRSystemState*)>(
    &::GlobalNamespace::VRController::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x585c01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(),
                                                             { "Init", {}, { ::i2c::type_of<::GlobalNamespace::IVRPlatformHelper*>(), ::i2c::type_of<::GlobalNamespace::IXRSystemState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x585c294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::OnDisable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x585c5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::Update)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x585c2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.TryGetControllerOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRController::*)(::by_ref<::UnityEngine::Pose>)>(&::GlobalNamespace::VRController::TryGetControllerOffset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x585c6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "TryGetControllerOffset", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.TryGetControllerOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IVRPlatformHelper*, ::GlobalNamespace::VRControllerTransformOffset*, ::UnityEngine::XR::XRNode,
                                                                ::by_ref<::UnityEngine::Pose>)>(&::GlobalNamespace::VRController::TryGetControllerOffset)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x585c770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(),
                                                             { "TryGetControllerOffset",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IVRPlatformHelper*>(), ::i2c::type_of<::GlobalNamespace::VRControllerTransformOffset*>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.UpdateAnchorOffsetPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)(::UnityEngine::Pose)>(&::GlobalNamespace::VRController::UpdateAnchorOffsetPose)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x585cf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "UpdateAnchorOffsetPose", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.AdjustPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::GlobalNamespace::VRController::AdjustPose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x585cd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "AdjustPose", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.InvertControllerPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::GlobalNamespace::VRController::InvertControllerPose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x585ccd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "InvertControllerPose", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.SetupVRPlatformHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::SetupVRPlatformHelper)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x585c028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "SetupVRPlatformHelper", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.UpdatePoseOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::XR::XRNode>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                ::by_ref<::UnityEngine::Pose>)>(&::GlobalNamespace::VRController::UpdatePoseOffset)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x585cda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "UpdatePoseOffset",
                                                                                   {},
                                                                                   { ::i2c::type_of<::by_ref<::UnityEngine::XR::XRNode>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                     ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.UpdateAnchorOffsetPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::UpdateAnchorOffsetPose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x585bfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "UpdateAnchorOffsetPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController.HandleSystemStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)(::GlobalNamespace::XRSystemEventType)>(&::GlobalNamespace::VRController::HandleSystemStateChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x585d010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "HandleSystemStateChange", {}, { ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRController::*)()>(&::GlobalNamespace::VRController::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x585d020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { ".ctor", {}, {} })));
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
  this->____viewAnchorTransform = value;
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
  this->____transformOffset = value;
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
  this->____vrPlatformHelper = value;
}
constexpr ::GlobalNamespace::IXRSystemState*& GlobalNamespace::VRController::__cordl_internal_get__xrSystemState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr ::GlobalNamespace::IXRSystemState* const& GlobalNamespace::VRController::__cordl_internal_get__xrSystemState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr void GlobalNamespace::VRController::__cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xrSystemState = value;
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
  this->___anchorUpdateEvent = value;
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
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kLeftControllerDefaultPosition", ::GlobalNamespace::VRController*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRController::getStaticF_kLeftControllerDefaultPosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kLeftControllerDefaultPosition", ::GlobalNamespace::VRController*>();
}
inline void GlobalNamespace::VRController::setStaticF_kRightControllerDefaultPosition(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kRightControllerDefaultPosition", ::GlobalNamespace::VRController*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRController::getStaticF_kRightControllerDefaultPosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kRightControllerDefaultPosition", ::GlobalNamespace::VRController*>();
}
inline ::UnityEngine::XR::XRNode GlobalNamespace::VRController::get_node() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_node", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::set_node(::UnityEngine::XR::XRNode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "set_node", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::VRController::get_nodeIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_nodeIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::set_nodeIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "set_nodeIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRController::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::VRController::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRController::get_forward() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_forward", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::VRController::get_triggerValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_triggerValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::VRController::get_thumbstick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_thumbstick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool GlobalNamespace::VRController::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::VRController::get_viewAnchorTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_viewAnchorTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::add_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(),
                                              { "add_anchorUpdateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VRController::remove_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(),
                                              { "remove_anchorUpdateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::VRController::get_poseFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_poseFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::VRController::get_poseValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_poseValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::VRController::get_mouseMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "get_mouseMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::set_mouseMode(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "set_mouseMode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VRController::Init(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper, ::GlobalNamespace::IXRSystemState* xrSystemState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(),
                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::IVRPlatformHelper*>(), ::i2c::type_of<::GlobalNamespace::IXRSystemState*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrPlatformHelper, xrSystemState);
}
inline void GlobalNamespace::VRController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VRController::TryGetControllerOffset(::by_ref<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "TryGetControllerOffset", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, poseOffset);
}
inline bool GlobalNamespace::VRController::TryGetControllerOffset(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper, ::GlobalNamespace::VRControllerTransformOffset* transformOffset,
                                                                  ::UnityEngine::XR::XRNode node, ::by_ref<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(),
                                                           { "TryGetControllerOffset",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IVRPlatformHelper*>(), ::i2c::type_of<::GlobalNamespace::VRControllerTransformOffset*>(),
                                                               ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vrPlatformHelper, transformOffset, node, poseOffset);
}
inline void GlobalNamespace::VRController::UpdateAnchorOffsetPose(::UnityEngine::Pose poseOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "UpdateAnchorOffsetPose", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseOffset);
}
inline ::UnityEngine::Pose GlobalNamespace::VRController::AdjustPose(::UnityEngine::Pose originalPose, ::UnityEngine::Pose adjustment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "AdjustPose", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, originalPose, adjustment);
}
inline ::UnityEngine::Pose GlobalNamespace::VRController::InvertControllerPose(::UnityEngine::Pose finalPose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "InvertControllerPose", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, finalPose);
}
inline void GlobalNamespace::VRController::SetupVRPlatformHelper() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "SetupVRPlatformHelper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::UpdatePoseOffset(::by_ref<::UnityEngine::XR::XRNode> node, ::by_ref<::UnityEngine::Vector3> customPositionOffset,
                                                            ::by_ref<::UnityEngine::Vector3> customRotationOffset, ::by_ref<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(),
                                                                                         { "UpdatePoseOffset",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::XR::XRNode>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, customPositionOffset, customRotationOffset, poseOffset);
}
inline void GlobalNamespace::VRController::UpdateAnchorOffsetPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "UpdateAnchorOffsetPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRController::HandleSystemStateChange(::GlobalNamespace::XRSystemEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { "HandleSystemStateChange", {}, { ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType);
}
inline void GlobalNamespace::VRController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRController* GlobalNamespace::VRController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRController::VRController() {}
