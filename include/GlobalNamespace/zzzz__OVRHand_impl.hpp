#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHand.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshRenderer_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMesh_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRHand_Hand::OVRHand_Hand(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand_Hand::OVRHand_Hand() {}
constexpr ::GlobalNamespace::OVRHand_Hand GlobalNamespace::OVRHand_Hand::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRHand_Hand GlobalNamespace::OVRHand_Hand::HandLeft{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRHand_Hand GlobalNamespace::OVRHand_Hand::HandRight{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRHand_HandFinger::OVRHand_HandFinger(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand_HandFinger::OVRHand_HandFinger() {}
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Thumb{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Index{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Middle{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Ring{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Pinky{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRHand_HandFinger GlobalNamespace::OVRHand_HandFinger::Max{ static_cast<int32_t>(0x5) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence::OVRHand_TrackingConfidence(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence::OVRHand_TrackingConfidence() {}
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence GlobalNamespace::OVRHand_TrackingConfidence::Low{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence GlobalNamespace::OVRHand_TrackingConfidence::High{ static_cast<int32_t>(0x3f800000) };
//  Writing Method size for method: ::GlobalNamespace::OVRHand.SetHandType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand_Hand)>(&::GlobalNamespace::OVRHand::SetHandType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4035844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "SetHandType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_Hand>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403584c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDataValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsDataValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4035854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDataValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4035860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDataHighConfidence",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4035868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDataHighConfidence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4035874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsTracked",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsTracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x403587c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsTracked", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsSystemGestureInProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsSystemGestureInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4035888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                               "get_IsSystemGestureInProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsSystemGestureInProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsSystemGestureInProgress)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4035890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsSystemGestureInProgress",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsPointerPoseValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsPointerPoseValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x403589c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsPointerPoseValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsPointerPoseValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsPointerPoseValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40358a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsPointerPoseValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_PointerPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_PointerPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40358b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_PointerPose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_PointerPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRHand::set_PointerPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40358b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_PointerPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_HandScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_HandScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40358c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_HandScale",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_HandScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(float_t)>(&::GlobalNamespace::OVRHand::set_HandScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40358c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_HandScale", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_HandConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRHand_TrackingConfidence (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::get_HandConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40358d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_HandConfidence",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_HandConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand_TrackingConfidence)>(
    &::GlobalNamespace::OVRHand::set_HandConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40358d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_HandConfidence", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_TrackingConfidence>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsDominantHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsDominantHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40358e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDominantHand",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsDominantHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsDominantHand)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40358e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDominantHand",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::Awake)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x40358f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::Update)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4035c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::FixedUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4035c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "FixedUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetHandState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRPlugin_Step)>(&::GlobalNamespace::OVRHand::GetHandState)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x40359c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetHandState", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Step>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetFingerIsPinching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand_HandFinger)>(
    &::GlobalNamespace::OVRHand::GetFingerIsPinching)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4035ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerIsPinching", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_HandFinger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetFingerPinchStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand_HandFinger)>(
    &::GlobalNamespace::OVRHand::GetFingerPinchStrength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4035cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerPinchStrength", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_HandFinger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetFingerConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRHand_TrackingConfidence (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::OVRHand_HandFinger)>(
    &::GlobalNamespace::OVRHand::GetFingerConfidence)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4035d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerConfidence", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_HandFinger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4035d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonPoseData (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4035d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4035e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                               "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRMesh_IOVRMeshDataProvider_GetMeshType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMesh_MeshType (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRMesh_IOVRMeshDataProvider_GetMeshType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4035e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRMesh.IOVRMeshDataProvider.GetMeshType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMeshRenderer_MeshRendererData (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4035e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4035ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeleton_IOVRSkeletonDataProvider_get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4035eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRSkeleton.IOVRSkeletonDataProvider.get_enabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRHand_Hand& GlobalNamespace::OVRHand::__cordl_internal_get_HandType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandType;
}
constexpr ::GlobalNamespace::OVRHand_Hand const& GlobalNamespace::OVRHand::__cordl_internal_get_HandType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandType;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set_HandType(::GlobalNamespace::OVRHand_Hand value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HandType = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRHand::__cordl_internal_get__pointerPoseRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRHand::__cordl_internal_get__pointerPoseRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseRoot;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__pointerPoseRoot(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointerPoseRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState& GlobalNamespace::OVRHand::__cordl_internal_get_m_showState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_showState;
}
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState const& GlobalNamespace::OVRHand::__cordl_internal_get_m_showState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_showState;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set_m_showState(::GlobalNamespace::OVRInput_InputDeviceShowState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_showState = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRHand::__cordl_internal_get__pointerPoseGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRHand::__cordl_internal_get__pointerPoseGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseGO;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__pointerPoseGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointerPoseGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPlugin_HandState& GlobalNamespace::OVRHand::__cordl_internal_get__handState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handState;
}
constexpr ::GlobalNamespace::OVRPlugin_HandState const& GlobalNamespace::OVRHand::__cordl_internal_get__handState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handState;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__handState(::GlobalNamespace::OVRPlugin_HandState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handState = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsDataValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsDataValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsDataValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataValid_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsDataHighConfidence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsDataHighConfidence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataHighConfidence_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsTracked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsTracked_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsTracked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsTracked_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsTracked_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsTracked_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsSystemGestureInProgress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSystemGestureInProgress_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsSystemGestureInProgress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSystemGestureInProgress_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsSystemGestureInProgress_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsSystemGestureInProgress_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsPointerPoseValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsPointerPoseValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsPointerPoseValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsPointerPoseValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsPointerPoseValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsPointerPoseValid_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRHand::__cordl_internal_get__PointerPose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PointerPose_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRHand::__cordl_internal_get__PointerPose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PointerPose_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__PointerPose_k__BackingField(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PointerPose_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRHand::__cordl_internal_get__HandScale_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandScale_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRHand::__cordl_internal_get__HandScale_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandScale_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__HandScale_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HandScale_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence& GlobalNamespace::OVRHand::__cordl_internal_get__HandConfidence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandConfidence_k__BackingField;
}
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence const& GlobalNamespace::OVRHand::__cordl_internal_get__HandConfidence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandConfidence_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__HandConfidence_k__BackingField(::GlobalNamespace::OVRHand_TrackingConfidence value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HandConfidence_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__cordl_internal_get__IsDominantHand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDominantHand_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__cordl_internal_get__IsDominantHand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDominantHand_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__cordl_internal_set__IsDominantHand_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDominantHand_k__BackingField = value;
}
inline void GlobalNamespace::OVRHand::SetHandType(::GlobalNamespace::OVRHand_Hand type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "SetHandType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_Hand>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline bool GlobalNamespace::OVRHand::get_IsDataValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDataValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsDataValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDataValid", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsDataHighConfidence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDataHighConfidence",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsDataHighConfidence(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDataHighConfidence",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsTracked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsTracked",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsTracked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsTracked", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsSystemGestureInProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                             "get_IsSystemGestureInProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsSystemGestureInProgress(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsSystemGestureInProgress",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsPointerPoseValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsPointerPoseValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsPointerPoseValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsPointerPoseValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRHand::get_PointerPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_PointerPose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_PointerPose(::UnityEngine::Transform* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_PointerPose", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRHand::get_HandScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_HandScale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_HandScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_HandScale", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRHand_TrackingConfidence GlobalNamespace::OVRHand::get_HandConfidence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_HandConfidence",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHand_TrackingConfidence, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_HandConfidence(::GlobalNamespace::OVRHand_TrackingConfidence value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_HandConfidence", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_TrackingConfidence>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsDominantHand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDominantHand",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsDominantHand(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDominantHand",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRHand::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "FixedUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::GetHandState(::GlobalNamespace::OVRPlugin_Step step) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetHandState", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Step>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, step);
}
inline bool GlobalNamespace::OVRHand::GetFingerIsPinching(::GlobalNamespace::OVRHand_HandFinger finger) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerIsPinching", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_HandFinger>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, finger);
}
inline float_t GlobalNamespace::OVRHand::GetFingerPinchStrength(::GlobalNamespace::OVRHand_HandFinger finger) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerPinchStrength", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_HandFinger>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, finger);
}
inline ::GlobalNamespace::OVRHand_TrackingConfidence GlobalNamespace::OVRHand::GetFingerConfidence(::GlobalNamespace::OVRHand_HandFinger finger) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerConfidence", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRHand_HandFinger>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHand_TrackingConfidence, false>(this, ___internal_method, finger);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonPoseData, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData GlobalNamespace::OVRHand::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                             "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVRHand::OVRMesh_IOVRMeshDataProvider_GetMeshType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRMesh.IOVRMeshDataProvider.GetMeshType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMesh_MeshType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMeshRenderer_MeshRendererData GlobalNamespace::OVRHand::OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMeshRenderer_MeshRendererData, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRSkeleton.IOVRSkeletonDataProvider.get_enabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRHand* GlobalNamespace::OVRHand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRHand*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* GlobalNamespace::OVRHand::i___GlobalNamespace__OVRSkeleton_IOVRSkeletonDataProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
constexpr ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* GlobalNamespace::OVRHand::i___GlobalNamespace__OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRMesh_IOVRMeshDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRMesh_IOVRMeshDataProvider"
constexpr ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* GlobalNamespace::OVRHand::i___GlobalNamespace__OVRMesh_IOVRMeshDataProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider"
constexpr ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider* GlobalNamespace::OVRHand::i___GlobalNamespace__OVRMeshRenderer_IOVRMeshRendererDataProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand::OVRHand() {}
