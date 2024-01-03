#pragma once
#include "GlobalNamespace/zzzz__OVRHand_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRHand__Hand::__OVRHand__Hand(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRHand__Hand::__OVRHand__Hand() {}
constexpr ::GlobalNamespace::__OVRHand__Hand GlobalNamespace::__OVRHand__Hand::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::__OVRHand__Hand GlobalNamespace::__OVRHand__Hand::HandLeft{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRHand__Hand GlobalNamespace::__OVRHand__Hand::HandRight{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRHand__HandFinger::__OVRHand__HandFinger(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRHand__HandFinger::__OVRHand__HandFinger() {}
constexpr ::GlobalNamespace::__OVRHand__HandFinger GlobalNamespace::__OVRHand__HandFinger::Thumb{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRHand__HandFinger GlobalNamespace::__OVRHand__HandFinger::Index{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRHand__HandFinger GlobalNamespace::__OVRHand__HandFinger::Middle{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRHand__HandFinger GlobalNamespace::__OVRHand__HandFinger::Ring{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRHand__HandFinger GlobalNamespace::__OVRHand__HandFinger::Pinky{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRHand__HandFinger GlobalNamespace::__OVRHand__HandFinger::Max{ static_cast<int32_t>(0x5) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRHand__TrackingConfidence::__OVRHand__TrackingConfidence(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRHand__TrackingConfidence::__OVRHand__TrackingConfidence() {}
constexpr ::GlobalNamespace::__OVRHand__TrackingConfidence GlobalNamespace::__OVRHand__TrackingConfidence::Low{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRHand__TrackingConfidence GlobalNamespace::__OVRHand__TrackingConfidence::High{ static_cast<int32_t>(0x3f800000) };
//  Writing Method size for method: ::GlobalNamespace::OVRHand.SetHandType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::__OVRHand__Hand)>(&::GlobalNamespace::OVRHand::SetHandType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aeb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "SetHandType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRHand__Hand>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aeb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDataValid",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsDataValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27aeb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDataValid", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aeb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDataHighConfidence",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27aeb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDataHighConfidence", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aeb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsTracked",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsTracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27aeb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsTracked", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsSystemGestureInProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsSystemGestureInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aeb94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                               "get_IsSystemGestureInProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsSystemGestureInProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsSystemGestureInProgress)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27aeb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsSystemGestureInProgress",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsPointerPoseValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsPointerPoseValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aeba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsPointerPoseValid",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsPointerPoseValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsPointerPoseValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27aebb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsPointerPoseValid", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_PointerPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_PointerPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aebbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_PointerPose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_PointerPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRHand::set_PointerPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aebc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_PointerPose", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_HandScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_HandScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aebcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_HandScale",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_HandScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(float_t)>(&::GlobalNamespace::OVRHand::set_HandScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aebd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_HandScale", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_HandConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRHand__TrackingConfidence (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::get_HandConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aebdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_HandConfidence",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_HandConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::__OVRHand__TrackingConfidence)>(
    &::GlobalNamespace::OVRHand::set_HandConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aebe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_HandConfidence", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRHand__TrackingConfidence>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.get_IsDominantHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::get_IsDominantHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aebec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDominantHand",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.set_IsDominantHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(bool)>(&::GlobalNamespace::OVRHand::set_IsDominantHand)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27aebf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDominantHand", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::Awake)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27aec00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::Update)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aef2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::FixedUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27aef34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "FixedUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetHandState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::__OVRPlugin__Step)>(
    &::GlobalNamespace::OVRHand::GetHandState)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x27aeccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetHandState", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Step>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetFingerIsPinching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::__OVRHand__HandFinger)>(
    &::GlobalNamespace::OVRHand::GetFingerIsPinching)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27aefa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerIsPinching", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRHand__HandFinger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetFingerPinchStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::__OVRHand__HandFinger)>(
    &::GlobalNamespace::OVRHand::GetFingerPinchStrength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27aefd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerPinchStrength", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRHand__HandFinger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.GetFingerConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__OVRHand__TrackingConfidence (::GlobalNamespace::OVRHand::*)(::GlobalNamespace::__OVRHand__HandFinger)>(&::GlobalNamespace::OVRHand::GetFingerConfidence)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27af010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerConfidence", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRHand__HandFinger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSkeleton__SkeletonType (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27af054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSkeleton__SkeletonPoseData (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27af06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27af0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                 "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRMesh_IOVRMeshDataProvider_GetMeshType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRMesh__MeshType (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRMesh_IOVRMeshDataProvider_GetMeshType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27af124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                               "OVRMesh.IOVRMeshDataProvider.GetMeshType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRMeshRenderer__MeshRendererData (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27af13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                 "OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHand::*)()>(&::GlobalNamespace::OVRHand::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27af18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHand.OVRSkeleton_IOVRSkeletonDataProvider_get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHand::*)()>(
    &::GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27af1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                               "OVRSkeleton.IOVRSkeletonDataProvider.get_enabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider"
constexpr GlobalNamespace::OVRHand::operator ::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::__OVRHand__Hand& GlobalNamespace::OVRHand::__get_HandType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandType;
}
constexpr ::GlobalNamespace::__OVRHand__Hand const& GlobalNamespace::OVRHand::__get_HandType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandType;
}
constexpr void GlobalNamespace::OVRHand::__set_HandType(::GlobalNamespace::__OVRHand__Hand value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HandType = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::OVRHand::__get__pointerPoseRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseRoot;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::OVRHand::__get__pointerPoseRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseRoot;
}
constexpr void GlobalNamespace::OVRHand::__set__pointerPoseRoot(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointerPoseRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState& GlobalNamespace::OVRHand::__get_m_showState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_showState;
}
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState const& GlobalNamespace::OVRHand::__get_m_showState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_showState;
}
constexpr void GlobalNamespace::OVRHand::__set_m_showState(::GlobalNamespace::__OVRInput__InputDeviceShowState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_showState = value;
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::OVRHand::__get__pointerPoseGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseGO;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::OVRHand::__get__pointerPoseGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerPoseGO;
}
constexpr void GlobalNamespace::OVRHand::__set__pointerPoseGO(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointerPoseGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRPlugin__HandState& GlobalNamespace::OVRHand::__get__handState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handState;
}
constexpr ::GlobalNamespace::__OVRPlugin__HandState const& GlobalNamespace::OVRHand::__get__handState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handState;
}
constexpr void GlobalNamespace::OVRHand::__set__handState(::GlobalNamespace::__OVRPlugin__HandState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handState = value;
}
constexpr bool& GlobalNamespace::OVRHand::__get__IsDataValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__get__IsDataValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__set__IsDataValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataValid_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__get__IsDataHighConfidence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__get__IsDataHighConfidence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__set__IsDataHighConfidence_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataHighConfidence_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__get__IsTracked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsTracked_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__get__IsTracked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsTracked_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__set__IsTracked_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsTracked_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__get__IsSystemGestureInProgress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSystemGestureInProgress_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__get__IsSystemGestureInProgress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSystemGestureInProgress_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__set__IsSystemGestureInProgress_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsSystemGestureInProgress_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__get__IsPointerPoseValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsPointerPoseValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__get__IsPointerPoseValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsPointerPoseValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__set__IsPointerPoseValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsPointerPoseValid_k__BackingField = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::OVRHand::__get__PointerPose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PointerPose_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::OVRHand::__get__PointerPose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PointerPose_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__set__PointerPose_k__BackingField(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PointerPose_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRHand::__get__HandScale_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandScale_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRHand::__get__HandScale_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandScale_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__set__HandScale_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HandScale_k__BackingField = value;
}
constexpr ::GlobalNamespace::__OVRHand__TrackingConfidence& GlobalNamespace::OVRHand::__get__HandConfidence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandConfidence_k__BackingField;
}
constexpr ::GlobalNamespace::__OVRHand__TrackingConfidence const& GlobalNamespace::OVRHand::__get__HandConfidence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HandConfidence_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__set__HandConfidence_k__BackingField(::GlobalNamespace::__OVRHand__TrackingConfidence value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HandConfidence_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRHand::__get__IsDominantHand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDominantHand_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRHand::__get__IsDominantHand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDominantHand_k__BackingField;
}
constexpr void GlobalNamespace::OVRHand::__set__IsDominantHand_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDominantHand_k__BackingField = value;
}
inline void GlobalNamespace::OVRHand::SetHandType(::GlobalNamespace::__OVRHand__Hand type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "SetHandType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRHand__Hand>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline bool GlobalNamespace::OVRHand::get_IsDataValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDataValid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsDataValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDataValid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsDataHighConfidence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDataHighConfidence",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsDataHighConfidence(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDataHighConfidence", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsTracked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsTracked",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsTracked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsTracked", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsSystemGestureInProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                             "get_IsSystemGestureInProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsSystemGestureInProgress(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsSystemGestureInProgress", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsPointerPoseValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsPointerPoseValid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsPointerPoseValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsPointerPoseValid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Transform* GlobalNamespace::OVRHand::get_PointerPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_PointerPose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_PointerPose(::UnityEngine::Transform* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_PointerPose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRHand::get_HandScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_HandScale",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_HandScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_HandScale", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRHand__TrackingConfidence GlobalNamespace::OVRHand::get_HandConfidence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_HandConfidence",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRHand__TrackingConfidence, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_HandConfidence(::GlobalNamespace::__OVRHand__TrackingConfidence value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_HandConfidence", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRHand__TrackingConfidence>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRHand::get_IsDominantHand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "get_IsDominantHand",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::set_IsDominantHand(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "set_IsDominantHand", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRHand::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "FixedUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHand::GetHandState(::GlobalNamespace::__OVRPlugin__Step step) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetHandState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Step>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, step);
}
inline bool GlobalNamespace::OVRHand::GetFingerIsPinching(::GlobalNamespace::__OVRHand__HandFinger finger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerIsPinching", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRHand__HandFinger>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, finger);
}
inline float_t GlobalNamespace::OVRHand::GetFingerPinchStrength(::GlobalNamespace::__OVRHand__HandFinger finger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerPinchStrength", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRHand__HandFinger>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, finger);
}
inline ::GlobalNamespace::__OVRHand__TrackingConfidence GlobalNamespace::OVRHand::GetFingerConfidence(::GlobalNamespace::__OVRHand__HandFinger finger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "GetFingerConfidence", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRHand__HandFinger>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRHand__TrackingConfidence, false>(this, ___internal_method, finger);
}
inline ::GlobalNamespace::__OVRSkeleton__SkeletonType GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                             "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSkeleton__SkeletonType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSkeleton__SkeletonPoseData GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSkeleton__SkeletonPoseData, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData GlobalNamespace::OVRHand::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                               "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRMesh__MeshType GlobalNamespace::OVRHand::OVRMesh_IOVRMeshDataProvider_GetMeshType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                             "OVRMesh.IOVRMeshDataProvider.GetMeshType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRMesh__MeshType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRMeshRenderer__MeshRendererData GlobalNamespace::OVRHand::OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                               "OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRMeshRenderer__MeshRendererData, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRHand* GlobalNamespace::OVRHand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRHand*>());
}
inline void GlobalNamespace::OVRHand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHand::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHand*>::get(),
                                                                             "OVRSkeleton.IOVRSkeletonDataProvider.get_enabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand::OVRHand() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
