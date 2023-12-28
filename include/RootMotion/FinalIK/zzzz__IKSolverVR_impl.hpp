#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolverVR_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_impl.hpp"
#include "RootMotion/zzzz__InterpolationMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverVR_def.hpp"
#include "UnityEngine/zzzz__Keyframe_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverVR_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "RootMotion/FinalIK/zzzz__VRIK_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "RootMotion/zzzz__InterpolationMode_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode::__IKSolverVR__Arm__ShoulderRotationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode::__IKSolverVR__Arm__ShoulderRotationMode() {}
constexpr ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode::YawPitch{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode::FromTo{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.OnRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>, bool, bool, bool, bool, bool, int32_t, int32_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::OnRead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.PreSolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::PreSolve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(
    ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>, ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.ApplyOffsets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::ApplyOffsets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.ResetOffsets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::ResetOffsets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.get_sqrMag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::get_sqrMag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x127a2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(),
                                                                               "get_sqrMag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.set_sqrMag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::set_sqrMag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x127a2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "set_sqrMag",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.get_mag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::get_mag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x127a2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "get_mag",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.set_mag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::set_mag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x127a2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "set_mag", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.SetLOD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(int32_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::SetLOD)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x127a2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "SetLOD", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>, bool, bool, bool, bool, bool, int32_t, int32_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::Read)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x126b6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "Read", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.MovePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::MovePosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x127a2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "MovePosition", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.MoveRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::MoveRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x127a37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "MoveRotation", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.Translate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::Translate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x127a414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "Translate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.TranslateRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::TranslateRoot)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x12765bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "TranslateRoot", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.RotateTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(
    ::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::UnityEngine::Quaternion, float_t)>(&::RootMotion::FinalIK::__IKSolverVR__BodyPart::RotateTo)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1279d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "RotateTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.Visualize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)(::UnityEngine::Color)>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::Visualize)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x127a45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "Visualize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart.Visualize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__BodyPart::Visualize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x127a580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(),
                                                                               "Visualize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__BodyPart._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__BodyPart::*)()>(&::RootMotion::FinalIK::__IKSolverVR__BodyPart::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x127a234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get__sqrMag_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sqrMag_k__BackingField;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get__sqrMag_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sqrMag_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__BodyPart::__set__sqrMag_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sqrMag_k__BackingField = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get__mag_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mag_k__BackingField;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get__mag_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mag_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__BodyPart::__set__mag_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mag_k__BackingField = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_bones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bones;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> const&
RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_bones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bones;
}
constexpr void
RootMotion::FinalIK::__IKSolverVR__BodyPart::__set_bones(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_initiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr bool const& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_initiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__BodyPart::__set_initiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initiated = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_rootPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_rootPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootPosition;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__BodyPart::__set_rootPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_rootRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_rootRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__BodyPart::__set_rootRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootRotation = value;
}
constexpr int32_t& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__BodyPart::__set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr int32_t& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_LOD() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LOD;
}
constexpr int32_t const& RootMotion::FinalIK::__IKSolverVR__BodyPart::__get_LOD() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LOD;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__BodyPart::__set_LOD(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LOD = value;
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::OnRead(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                                ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest, bool hasNeck, bool hasShoulders,
                                                                bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "OnRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::PreSolve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "PreSolve",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::Write(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> solvedPositions,
                                                               ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>> solvedRotations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solvedPositions, solvedRotations);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::ApplyOffsets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(),
                                                                             "ApplyOffsets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::ResetOffsets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(),
                                                                             "ResetOffsets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t RootMotion::FinalIK::__IKSolverVR__BodyPart::get_sqrMag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(),
                                                                             "get_sqrMag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::set_sqrMag(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "set_sqrMag", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t RootMotion::FinalIK::__IKSolverVR__BodyPart::get_mag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "get_mag",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::set_mag(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "set_mag", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::SetLOD(int32_t LOD) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "SetLOD", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, LOD);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::Read(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                              ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest, bool hasNeck, bool hasShoulders,
                                                              bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::MovePosition(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "MovePosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::MoveRotation(::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "MoveRotation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotation);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::Translate(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "Translate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::TranslateRoot(::UnityEngine::Vector3 newRootPos, ::UnityEngine::Quaternion newRootRot) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "TranslateRoot", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newRootPos, newRootRot);
}
/// @param weight: float_t (default: 1.0)
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::RotateTo(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* bone, ::UnityEngine::Quaternion rotation, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "RotateTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bone, rotation, weight);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::Visualize(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "Visualize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::Visualize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), "Visualize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__BodyPart* RootMotion::FinalIK::__IKSolverVR__BodyPart::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>());
}
inline void RootMotion::FinalIK::__IKSolverVR__BodyPart::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__BodyPart*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverVR__BodyPart::__IKSolverVR__BodyPart() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1278864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_position",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.set_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1278870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "set_position", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::get_rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x127887c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_rotation",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.set_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)(::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::set_rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1278888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "set_rotation", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.get_shoulder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::get_shoulder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1278894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_shoulder",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.get_upperArm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::get_upperArm)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x12788bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_upperArm",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.get_forearm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::get_forearm)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x12788f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_forearm",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.get_hand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::get_hand)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1278930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_hand",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.OnRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>, bool, bool, bool, bool, bool, int32_t, int32_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::OnRead)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x1278970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.PreSolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Arm::PreSolve)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x12791b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.ApplyOffsets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Arm::ApplyOffsets)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1279460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.Stretching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Arm::Stretching)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1279484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "Stretching",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)(bool)>(&::RootMotion::FinalIK::__IKSolverVR__Arm::Solve)> {
  constexpr static std::size_t size = 0x15e4;
  constexpr static std::size_t addrs = 0x12766e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "Solve", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.ResetOffsets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Arm::ResetOffsets)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1279eb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)(
    ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>, ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>)>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::Write)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x1279f10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.DamperValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__IKSolverVR__Arm::*)(float_t, float_t, float_t, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::DamperValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x12797d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "DamperValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.GetBendNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverVR__Arm::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::GetBendNormal)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x1279854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "GetBendNormal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm.Visualize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)(
    ::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::UnityEngine::Color)>(
    &::RootMotion::FinalIK::__IKSolverVR__Arm::Visualize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x127a11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "Visualize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Arm._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Arm::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Arm::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x12785ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::__IKSolverVR__Arm::__get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_target(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::__IKSolverVR__Arm::__get_bendGoal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendGoal;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_bendGoal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendGoal;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_bendGoal(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bendGoal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Arm::__get_positionWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_positionWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_positionWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Arm::__get_rotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_rotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_rotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationWeight = value;
}
constexpr ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode& RootMotion::FinalIK::__IKSolverVR__Arm::__get_shoulderRotationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shoulderRotationMode;
}
constexpr ::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_shoulderRotationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shoulderRotationMode;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_shoulderRotationMode(::GlobalNamespace::__IKSolverVR__Arm__ShoulderRotationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shoulderRotationMode = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Arm::__get_shoulderRotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shoulderRotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_shoulderRotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shoulderRotationWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_shoulderRotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shoulderRotationWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Arm::__get_shoulderTwistWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shoulderTwistWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_shoulderTwistWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shoulderTwistWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_shoulderTwistWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shoulderTwistWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Arm::__get_bendGoalWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendGoalWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_bendGoalWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendGoalWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_bendGoalWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendGoalWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Arm::__get_swivelOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swivelOffset;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_swivelOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swivelOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_swivelOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___swivelOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get_wristToPalmAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wristToPalmAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_wristToPalmAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wristToPalmAxis;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_wristToPalmAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wristToPalmAxis = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get_palmToThumbAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___palmToThumbAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_palmToThumbAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___palmToThumbAxis;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_palmToThumbAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___palmToThumbAxis = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Arm::__get_armLengthMlp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___armLengthMlp;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_armLengthMlp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___armLengthMlp;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_armLengthMlp(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___armLengthMlp = value;
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::FinalIK::__IKSolverVR__Arm::__get_stretchCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_stretchCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchCurve;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_stretchCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stretchCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get_IKPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_IKPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKPosition;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_IKPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Arm::__get_IKRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_IKRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_IKRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get_bendDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendDirection;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_bendDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendDirection;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_bendDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendDirection = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get_handPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_handPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handPositionOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_handPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get__position_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get__position_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set__position_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position_k__BackingField = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Arm::__get__rotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Arm::__get__rotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set__rotation_k__BackingField(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation_k__BackingField = value;
}
constexpr bool& RootMotion::FinalIK::__IKSolverVR__Arm::__get_hasShoulder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasShoulder;
}
constexpr bool const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_hasShoulder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasShoulder;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_hasShoulder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasShoulder = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get_chestForwardAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestForwardAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_chestForwardAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestForwardAxis;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_chestForwardAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestForwardAxis = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get_chestUpAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestUpAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_chestUpAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestUpAxis;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_chestUpAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestUpAxis = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Arm::__get_chestRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_chestRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_chestRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get_chestForward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestForward;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_chestForward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestForward;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_chestForward(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestForward = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get_chestUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestUp;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_chestUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestUp;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_chestUp(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestUp = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Arm::__get_forearmRelToUpperArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forearmRelToUpperArm;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_forearmRelToUpperArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forearmRelToUpperArm;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_forearmRelToUpperArm(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forearmRelToUpperArm = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Arm::__get_upperArmBendAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upperArmBendAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Arm::__get_upperArmBendAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upperArmBendAxis;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Arm::__set_upperArmBendAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___upperArmBendAxis = value;
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverVR__Arm::get_position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_position",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "set_position", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__IKSolverVR__Arm::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_rotation",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::set_rotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "set_rotation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Arm::get_shoulder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_shoulder",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Arm::get_upperArm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_upperArm",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Arm::get_forearm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_forearm",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Arm::get_hand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "get_hand",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::OnRead(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                           ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest, bool hasNeck, bool hasShoulders,
                                                           bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "OnRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::PreSolve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "PreSolve",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::ApplyOffsets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "ApplyOffsets",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::Stretching() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "Stretching",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::Solve(bool isLeft) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "Solve", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isLeft);
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::ResetOffsets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "ResetOffsets",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::Write(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> solvedPositions,
                                                          ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>> solvedRotations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solvedPositions, solvedRotations);
}
/// @param weight: float_t (default: 1.0)
inline float_t RootMotion::FinalIK::__IKSolverVR__Arm::DamperValue(float_t value, float_t min, float_t max, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "DamperValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value, min, max, weight);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverVR__Arm::GetBendNormal(::UnityEngine::Vector3 dir) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "GetBendNormal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, dir);
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::Visualize(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* bone1, ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* bone2,
                                                              ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* bone3, ::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), "Visualize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bone1, bone2, bone3, color);
}
inline ::RootMotion::FinalIK::__IKSolverVR__Arm* RootMotion::FinalIK::__IKSolverVR__Arm::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__IKSolverVR__Arm*>());
}
inline void RootMotion::FinalIK::__IKSolverVR__Arm::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverVR__Arm::__IKSolverVR__Arm() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Footstep.get_isStepping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__IKSolverVR__Footstep::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Footstep::get_isStepping)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x127a594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(),
                                                                               "get_isStepping", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Footstep.get_stepProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__IKSolverVR__Footstep::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Footstep::get_stepProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x127a5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(),
                                                                               "get_stepProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Footstep.set_stepProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Footstep::*)(float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Footstep::set_stepProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x127a5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "set_stepProgress",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Footstep._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Footstep::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__IKSolverVR__Footstep::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x127a5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Footstep.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Footstep::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::RootMotion::FinalIK::__IKSolverVR__Footstep::Reset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x127a77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Footstep.StepTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Footstep::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Footstep::StepTo)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x127a7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "StepTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Footstep.UpdateStepping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Footstep::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Footstep::UpdateStepping)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x127a9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "UpdateStepping", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Footstep.UpdateStanding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Footstep::*)(::UnityEngine::Quaternion, float_t, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Footstep::UpdateStanding)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x127abf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "UpdateStanding", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Footstep.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Footstep::*)(::RootMotion::InterpolationMode, ::UnityEngine::Events::UnityEvent*)>(&::RootMotion::FinalIK::__IKSolverVR__Footstep::Update)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x127add4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "Update", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::InterpolationMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepSpeed;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepSpeed;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_stepSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stepSpeed = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_characterSpaceOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterSpaceOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_characterSpaceOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterSpaceOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_characterSpaceOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characterSpaceOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_rotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepToRootRot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepToRootRot;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepToRootRot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepToRootRot;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_stepToRootRot(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stepToRootRot = value;
}
constexpr bool& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_isSupportLeg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSupportLeg;
}
constexpr bool const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_isSupportLeg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSupportLeg;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_isSupportLeg(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSupportLeg = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Footstep::__get__stepProgress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepProgress_k__BackingField;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get__stepProgress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepProgress_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set__stepProgress_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stepProgress_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepFrom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepFrom;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepFrom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepFrom;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_stepFrom(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stepFrom = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepTo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepTo;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepTo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepTo;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_stepTo(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stepTo = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepFromRot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepFromRot;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepFromRot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepFromRot;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_stepFromRot(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stepFromRot = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepToRot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepToRot;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_stepToRot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepToRot;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_stepToRot(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stepToRot = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_footRelativeToRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRelativeToRoot;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_footRelativeToRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRelativeToRoot;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_footRelativeToRoot(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footRelativeToRoot = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_supportLegW() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportLegW;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_supportLegW() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportLegW;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_supportLegW(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportLegW = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_supportLegWV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportLegWV;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Footstep::__get_supportLegWV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportLegWV;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Footstep::__set_supportLegWV(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportLegWV = value;
}
inline bool RootMotion::FinalIK::__IKSolverVR__Footstep::get_isStepping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(),
                                                                             "get_isStepping", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t RootMotion::FinalIK::__IKSolverVR__Footstep::get_stepProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(),
                                                                             "get_stepProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Footstep::set_stepProgress(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "set_stepProgress",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::RootMotion::FinalIK::__IKSolverVR__Footstep* RootMotion::FinalIK::__IKSolverVR__Footstep::New_ctor(::UnityEngine::Quaternion rootRotation, ::UnityEngine::Vector3 footPosition,
                                                                                                            ::UnityEngine::Quaternion footRotation, ::UnityEngine::Vector3 characterSpaceOffset) {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__IKSolverVR__Footstep*>(rootRotation, footPosition, footRotation, characterSpaceOffset));
}
inline void RootMotion::FinalIK::__IKSolverVR__Footstep::_ctor(::UnityEngine::Quaternion rootRotation, ::UnityEngine::Vector3 footPosition, ::UnityEngine::Quaternion footRotation,
                                                               ::UnityEngine::Vector3 characterSpaceOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootRotation, footPosition, footRotation, characterSpaceOffset);
}
inline void RootMotion::FinalIK::__IKSolverVR__Footstep::Reset(::UnityEngine::Quaternion rootRotation, ::UnityEngine::Vector3 footPosition, ::UnityEngine::Quaternion footRotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootRotation, footPosition, footRotation);
}
inline void RootMotion::FinalIK::__IKSolverVR__Footstep::StepTo(::UnityEngine::Vector3 p, ::UnityEngine::Quaternion rootRotation, float_t stepThreshold) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "StepTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p, rootRotation, stepThreshold);
}
inline void RootMotion::FinalIK::__IKSolverVR__Footstep::UpdateStepping(::UnityEngine::Vector3 p, ::UnityEngine::Quaternion rootRotation, float_t speed) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "UpdateStepping", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p, rootRotation, speed);
}
inline void RootMotion::FinalIK::__IKSolverVR__Footstep::UpdateStanding(::UnityEngine::Quaternion rootRotation, float_t minAngle, float_t speed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "UpdateStanding", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootRotation, minAngle, speed);
}
inline void RootMotion::FinalIK::__IKSolverVR__Footstep::Update(::RootMotion::InterpolationMode interpolation, ::UnityEngine::Events::UnityEvent* onStep) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Footstep*>::get(), "Update", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::InterpolationMode>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interpolation, onStep);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverVR__Footstep::__IKSolverVR__Footstep() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x127af48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_position",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.set_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x127af54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "set_position", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::get_rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x127af60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_rotation",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.set_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)(::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::set_rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x127af6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "set_rotation", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.get_hasToes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Leg::get_hasToes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x127af78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_hasToes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.set_hasToes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)(bool)>(&::RootMotion::FinalIK::__IKSolverVR__Leg::set_hasToes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x127af80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "set_hasToes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.get_thigh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::get_thigh)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x127af8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_thigh",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.get_calf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::get_calf)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x127afb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_calf",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.get_foot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::get_foot)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x127afe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_foot",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.get_toes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::get_toes)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x127b00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_toes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.get_lastBone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::get_lastBone)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1276588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_lastBone",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.get_thighRelativeToPelvis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::get_thighRelativeToPelvis)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x127b038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                                                               "get_thighRelativeToPelvis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.set_thighRelativeToPelvis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::set_thighRelativeToPelvis)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x127b044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "set_thighRelativeToPelvis", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.OnRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>, bool, bool, bool, bool, bool, int32_t, int32_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::OnRead)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x127b050;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.PreSolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Leg::PreSolve)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x127b5b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.ApplyOffsets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Leg::ApplyOffsets)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x127bd28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.ApplyPositionOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)(::UnityEngine::Vector3, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::ApplyPositionOffset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x127bcd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "ApplyPositionOffset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.ApplyRotationOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)(::UnityEngine::Quaternion, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::ApplyRotationOffset)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x127ba8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "ApplyRotationOffset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)(bool)>(&::RootMotion::FinalIK::__IKSolverVR__Leg::Solve)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x126b544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "Solve", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.FixTwistRotations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Leg::FixTwistRotations)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x127c5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                                                               "FixTwistRotations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.Stretching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Leg::Stretching)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x127c204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "Stretching",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)(
    ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>, ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>)>(
    &::RootMotion::FinalIK::__IKSolverVR__Leg::Write)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x127ca38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg.ResetOffsets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Leg::ResetOffsets)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x127cc40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Leg._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Leg::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Leg::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x126b940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::__IKSolverVR__Leg::__get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_target(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendGoal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendGoal;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendGoal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendGoal;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_bendGoal(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bendGoal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Leg::__get_positionWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_positionWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_positionWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Leg::__get_rotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_rotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_rotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendGoalWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendGoalWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendGoalWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendGoalWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_bendGoalWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendGoalWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Leg::__get_swivelOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swivelOffset;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_swivelOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swivelOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_swivelOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___swivelOffset = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendToTargetWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendToTargetWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendToTargetWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendToTargetWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_bendToTargetWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendToTargetWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Leg::__get_legLengthMlp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___legLengthMlp;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_legLengthMlp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___legLengthMlp;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_legLengthMlp(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___legLengthMlp = value;
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::FinalIK::__IKSolverVR__Leg::__get_stretchCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_stretchCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchCurve;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_stretchCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stretchCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Leg::__get_IKPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_IKPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKPosition;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_IKPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Leg::__get_IKRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_IKRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_IKRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Leg::__get_footPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_footPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footPositionOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_footPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Leg::__get_heelPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heelPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_heelPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heelPositionOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_heelPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___heelPositionOffset = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Leg::__get_footRotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRotationOffset;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_footRotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRotationOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_footRotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footRotationOffset = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Leg::__get_currentMag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentMag;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_currentMag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentMag;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_currentMag(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentMag = value;
}
constexpr bool& RootMotion::FinalIK::__IKSolverVR__Leg::__get_useAnimatedBendNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAnimatedBendNormal;
}
constexpr bool const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_useAnimatedBendNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAnimatedBendNormal;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_useAnimatedBendNormal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useAnimatedBendNormal = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Leg::__get__position_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Leg::__get__position_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set__position_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position_k__BackingField = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Leg::__get__rotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Leg::__get__rotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set__rotation_k__BackingField(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation_k__BackingField = value;
}
constexpr bool& RootMotion::FinalIK::__IKSolverVR__Leg::__get__hasToes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasToes_k__BackingField;
}
constexpr bool const& RootMotion::FinalIK::__IKSolverVR__Leg::__get__hasToes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasToes_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set__hasToes_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasToes_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Leg::__get__thighRelativeToPelvis_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thighRelativeToPelvis_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Leg::__get__thighRelativeToPelvis_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thighRelativeToPelvis_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set__thighRelativeToPelvis_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thighRelativeToPelvis_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Leg::__get_footPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_footPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footPosition;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_footPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Leg::__get_footRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_footRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_footRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendNormal;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendNormal;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_bendNormal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendNormal = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Leg::__get_calfRelToThigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calfRelToThigh;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_calfRelToThigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calfRelToThigh;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_calfRelToThigh(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calfRelToThigh = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Leg::__get_thighRelToFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thighRelToFoot;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_thighRelToFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thighRelToFoot;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_thighRelToFoot(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thighRelToFoot = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendNormalRelToPelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendNormalRelToPelvis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendNormalRelToPelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendNormalRelToPelvis;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_bendNormalRelToPelvis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendNormalRelToPelvis = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendNormalRelToTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendNormalRelToTarget;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Leg::__get_bendNormalRelToTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendNormalRelToTarget;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Leg::__set_bendNormalRelToTarget(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendNormalRelToTarget = value;
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverVR__Leg::get_position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_position",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "set_position", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__IKSolverVR__Leg::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_rotation",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::set_rotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "set_rotation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool RootMotion::FinalIK::__IKSolverVR__Leg::get_hasToes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_hasToes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::set_hasToes(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "set_hasToes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Leg::get_thigh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_thigh",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Leg::get_calf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_calf",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Leg::get_foot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_foot",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Leg::get_toes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_toes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Leg::get_lastBone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "get_lastBone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverVR__Leg::get_thighRelativeToPelvis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                                                             "get_thighRelativeToPelvis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::set_thighRelativeToPelvis(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "set_thighRelativeToPelvis",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::OnRead(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                           ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest, bool hasNeck, bool hasShoulders,
                                                           bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "OnRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::PreSolve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "PreSolve",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::ApplyOffsets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "ApplyOffsets",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::ApplyPositionOffset(::UnityEngine::Vector3 offset, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "ApplyPositionOffset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset, weight);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::ApplyRotationOffset(::UnityEngine::Quaternion offset, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "ApplyRotationOffset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset, weight);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::Solve(bool stretch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "Solve", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stretch);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::FixTwistRotations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                                                             "FixTwistRotations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::Stretching() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "Stretching",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::Write(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> solvedPositions,
                                                          ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>> solvedRotations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solvedPositions, solvedRotations);
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::ResetOffsets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), "ResetOffsets",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__Leg* RootMotion::FinalIK::__IKSolverVR__Leg::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__IKSolverVR__Leg*>());
}
inline void RootMotion::FinalIK::__IKSolverVR__Leg::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverVR__Leg::__IKSolverVR__Leg() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.get_centerOfMass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::get_centerOfMass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x127cd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                               "get_centerOfMass", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.set_centerOfMass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::set_centerOfMass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x127cd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "set_centerOfMass", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>, bool)>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::Initiate)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x1274ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "Initiate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>)>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::Reset)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x12729c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "Reset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.AddDeltaRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::AddDeltaRotation)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x1271e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "AddDeltaRotation", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.AddDeltaPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::AddDeltaPosition)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1271dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "AddDeltaPosition", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)(
    ::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::RootMotion::FinalIK::__IKSolverVR__Spine*, ::RootMotion::FinalIK::__IKSolverVR__Leg*, ::RootMotion::FinalIK::__IKSolverVR__Leg*,
    ::RootMotion::FinalIK::__IKSolverVR__Arm*, ::RootMotion::FinalIK::__IKSolverVR__Arm*, int32_t, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>,
    ByRef<::UnityEngine::Quaternion>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&::RootMotion::FinalIK::__IKSolverVR__Locomotion::Solve)> {
  constexpr static std::size_t size = 0x13d0;
  constexpr static std::size_t addrs = 0x12751b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "Solve", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.get_leftFootstepPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::get_leftFootstepPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x127d108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                               "get_leftFootstepPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.get_rightFootstepPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::get_rightFootstepPosition)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x127d13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                               "get_rightFootstepPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.get_leftFootstepRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::get_leftFootstepRotation)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x127d174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                               "get_leftFootstepRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.get_rightFootstepRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::get_rightFootstepRotation)> {
  constexpr static std::size_t size = 0x1038;
  constexpr static std::size_t addrs = 0x127d1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                               "get_rightFootstepRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.StepBlocked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__IKSolverVR__Locomotion::StepBlocked)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x127cd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "StepBlocked", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.CanStep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::CanStep)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x127ceec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                               "CanStep", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion.GetLineSphereCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::GetLineSphereCollision)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x127cf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "GetLineSphereCollision", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Locomotion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Locomotion::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Locomotion::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1278778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_footDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footDistance;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_footDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footDistance;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_footDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footDistance = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_stepThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepThreshold;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_stepThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepThreshold;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_stepThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stepThreshold = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_angleThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleThreshold;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_angleThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleThreshold;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_angleThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___angleThreshold = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_comAngleMlp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comAngleMlp;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_comAngleMlp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comAngleMlp;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_comAngleMlp(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comAngleMlp = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_maxVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxVelocity;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_maxVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxVelocity;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_maxVelocity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxVelocity = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_velocityFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocityFactor;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_velocityFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocityFactor;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_velocityFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___velocityFactor = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_maxLegStretch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxLegStretch;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_maxLegStretch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxLegStretch;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_maxLegStretch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxLegStretch = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_rootSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSpeed;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_rootSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSpeed;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_rootSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootSpeed = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_stepSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepSpeed;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_stepSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepSpeed;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_stepSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stepSpeed = value;
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_stepHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepHeight;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_stepHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepHeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_stepHeight(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stepHeight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_heelHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heelHeight;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_heelHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heelHeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_heelHeight(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___heelHeight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_relaxLegTwistMinAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relaxLegTwistMinAngle;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_relaxLegTwistMinAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relaxLegTwistMinAngle;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_relaxLegTwistMinAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___relaxLegTwistMinAngle = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_relaxLegTwistSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relaxLegTwistSpeed;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_relaxLegTwistSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relaxLegTwistSpeed;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_relaxLegTwistSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___relaxLegTwistSpeed = value;
}
constexpr ::RootMotion::InterpolationMode& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_stepInterpolation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepInterpolation;
}
constexpr ::RootMotion::InterpolationMode const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_stepInterpolation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stepInterpolation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_stepInterpolation(::RootMotion::InterpolationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stepInterpolation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr bool& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_blockingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockingEnabled;
}
constexpr bool const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_blockingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockingEnabled;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_blockingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockingEnabled = value;
}
constexpr ::UnityEngine::LayerMask& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_blockingLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockingLayers;
}
constexpr ::UnityEngine::LayerMask const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_blockingLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockingLayers;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_blockingLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockingLayers = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_raycastRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastRadius;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_raycastRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastRadius;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_raycastRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raycastRadius = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_raycastHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastHeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_raycastHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastHeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_raycastHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raycastHeight = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_onLeftFootstep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onLeftFootstep;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_onLeftFootstep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onLeftFootstep;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_onLeftFootstep(::UnityEngine::Events::UnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onLeftFootstep)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent*& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_onRightFootstep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRightFootstep;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_onRightFootstep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRightFootstep;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_onRightFootstep(::UnityEngine::Events::UnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onRightFootstep)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get__centerOfMass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerOfMass_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get__centerOfMass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerOfMass_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set__centerOfMass_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerOfMass_k__BackingField = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Footstep*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Footstep*>*>& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_footsteps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footsteps;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Footstep*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Footstep*>*> const&
RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_footsteps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footsteps;
}
constexpr void
RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_footsteps(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Footstep*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Footstep*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___footsteps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_lastComPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastComPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_lastComPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastComPosition;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_lastComPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastComPosition = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_comVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comVelocity;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_comVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comVelocity;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_comVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comVelocity = value;
}
constexpr int32_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_leftFootIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftFootIndex;
}
constexpr int32_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_leftFootIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftFootIndex;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_leftFootIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftFootIndex = value;
}
constexpr int32_t& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_rightFootIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightFootIndex;
}
constexpr int32_t const& RootMotion::FinalIK::__IKSolverVR__Locomotion::__get_rightFootIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightFootIndex;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Locomotion::__set_rightFootIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightFootIndex = value;
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverVR__Locomotion::get_centerOfMass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                             "get_centerOfMass", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Locomotion::set_centerOfMass(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "set_centerOfMass",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::FinalIK::__IKSolverVR__Locomotion::Initiate(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                                    ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasToes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "Initiate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, rotations, hasToes);
}
inline void RootMotion::FinalIK::__IKSolverVR__Locomotion::Reset(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                                 ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "Reset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, rotations);
}
inline void RootMotion::FinalIK::__IKSolverVR__Locomotion::AddDeltaRotation(::UnityEngine::Quaternion delta, ::UnityEngine::Vector3 pivot) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "AddDeltaRotation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delta, pivot);
}
inline void RootMotion::FinalIK::__IKSolverVR__Locomotion::AddDeltaPosition(::UnityEngine::Vector3 delta) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "AddDeltaPosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delta);
}
inline void RootMotion::FinalIK::__IKSolverVR__Locomotion::Solve(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* rootBone, ::RootMotion::FinalIK::__IKSolverVR__Spine* spine,
                                                                 ::RootMotion::FinalIK::__IKSolverVR__Leg* leftLeg, ::RootMotion::FinalIK::__IKSolverVR__Leg* rightLeg,
                                                                 ::RootMotion::FinalIK::__IKSolverVR__Arm* leftArm, ::RootMotion::FinalIK::__IKSolverVR__Arm* rightArm, int32_t supportLegIndex,
                                                                 ByRef<::UnityEngine::Vector3> leftFootPosition, ByRef<::UnityEngine::Vector3> rightFootPosition,
                                                                 ByRef<::UnityEngine::Quaternion> leftFootRotation, ByRef<::UnityEngine::Quaternion> rightFootRotation, ByRef<float_t> leftFootOffset,
                                                                 ByRef<float_t> rightFootOffset, ByRef<float_t> leftHeelOffset, ByRef<float_t> rightHeelOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "Solve", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Arm*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootBone, spine, leftLeg, rightLeg, leftArm, rightArm, supportLegIndex, leftFootPosition, rightFootPosition,
                                                          leftFootRotation, rightFootRotation, leftFootOffset, rightFootOffset, leftHeelOffset, rightHeelOffset);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverVR__Locomotion::get_leftFootstepPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                             "get_leftFootstepPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverVR__Locomotion::get_rightFootstepPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                             "get_rightFootstepPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__IKSolverVR__Locomotion::get_leftFootstepRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                             "get_leftFootstepRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__IKSolverVR__Locomotion::get_rightFootstepRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(),
                                                                             "get_rightFootstepRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::__IKSolverVR__Locomotion::StepBlocked(::UnityEngine::Vector3 fromPosition, ::UnityEngine::Vector3 toPosition, ::UnityEngine::Vector3 rootPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "StepBlocked", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fromPosition, toPosition, rootPosition);
}
inline bool RootMotion::FinalIK::__IKSolverVR__Locomotion::CanStep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "CanStep",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::__IKSolverVR__Locomotion::GetLineSphereCollision(::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd, ::UnityEngine::Vector3 sphereCenter,
                                                                                  float_t sphereRadius) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), "GetLineSphereCollision", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lineStart, lineEnd, sphereCenter, sphereRadius);
}
inline ::RootMotion::FinalIK::__IKSolverVR__Locomotion* RootMotion::FinalIK::__IKSolverVR__Locomotion::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>());
}
inline void RootMotion::FinalIK::__IKSolverVR__Locomotion::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Locomotion*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverVR__Locomotion::__IKSolverVR__Locomotion() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.get_pelvis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::get_pelvis)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x127e1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "get_pelvis",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.get_firstSpineBone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::get_firstSpineBone)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x127e214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                               "get_firstSpineBone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.get_chest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::get_chest)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x127e248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "get_chest",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.get_neck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::get_neck)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x127e290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "get_neck",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.get_head
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::get_head)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x127e2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "get_head",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.get_anchorRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::get_anchorRotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x127e2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                               "get_anchorRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.set_anchorRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::set_anchorRotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x127e30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "set_anchorRotation", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.get_anchorRelativeToHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::get_anchorRelativeToHead)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x127e320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                               "get_anchorRelativeToHead", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.set_anchorRelativeToHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::set_anchorRelativeToHead)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x127e334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "set_anchorRelativeToHead", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.OnRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>, bool, bool, bool, bool, bool, int32_t, int32_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::OnRead)> {
  constexpr static std::size_t size = 0xc60;
  constexpr static std::size_t addrs = 0x127e348;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.PreSolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Spine::PreSolve)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x127f038;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.ApplyOffsets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Spine::ApplyOffsets)> {
  constexpr static std::size_t size = 0x794;
  constexpr static std::size_t addrs = 0x127f220;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.CalculateChestTargetRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(
    ::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::CalculateChestTargetRotation)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x127f9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "CalculateChestTargetRotation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(
    ::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>,
    ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>)>(&::RootMotion::FinalIK::__IKSolverVR__Spine::Solve)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x127fff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "Solve", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.FABRIKPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::FABRIKPass)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x128093c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "FABRIKPass", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.SolvePelvis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Spine::SolvePelvis)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x12810e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                               "SolvePelvis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(
    ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>, ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::Write)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1281b24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.ResetOffsets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Spine::ResetOffsets)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1281cf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.AdjustChestByHands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(
    ByRef<::UnityEngine::Quaternion>, ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::AdjustChestByHands)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x127fbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "AdjustChestByHands", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.InverseTranslateToHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(
    ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>, bool, bool, ::UnityEngine::Vector3, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::InverseTranslateToHead)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1280e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "InverseTranslateToHead", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.TranslatePelvis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(
    ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::TranslatePelvis)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x128052c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "TranslatePelvis", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.LimitPelvisPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(
    ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>, ::UnityEngine::Vector3, bool, int32_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::LimitPelvisPosition)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x1281dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "LimitPelvisPosition", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.Bend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(
    ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>, int32_t, int32_t, ::UnityEngine::Quaternion, float_t, bool, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__Spine::Bend)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x1280ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "Bend", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine.Bend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)(
    ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>, int32_t, int32_t, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion,
    float_t, bool, float_t)>(&::RootMotion::FinalIK::__IKSolverVR__Spine::Bend)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1280b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "Bend", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__Spine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__Spine::*)()>(&::RootMotion::FinalIK::__IKSolverVR__Spine::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x12821e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headTarget;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headTarget;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_headTarget(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisTarget;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisTarget;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_pelvisTarget(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pelvisTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_positionWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_positionWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_positionWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_rotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_rotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_rotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisPositionWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisPositionWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisPositionWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisPositionWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_pelvisPositionWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pelvisPositionWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisRotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisRotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisRotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisRotationWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_pelvisRotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pelvisRotationWeight = value;
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestGoal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestGoal;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestGoal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestGoal;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_chestGoal(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chestGoal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestGoalWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestGoalWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestGoalWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestGoalWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_chestGoalWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestGoalWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_minHeadHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minHeadHeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_minHeadHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minHeadHeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_minHeadHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minHeadHeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_bodyPosStiffness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyPosStiffness;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_bodyPosStiffness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyPosStiffness;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_bodyPosStiffness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bodyPosStiffness = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_bodyRotStiffness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyRotStiffness;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_bodyRotStiffness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyRotStiffness;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_bodyRotStiffness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bodyRotStiffness = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_neckStiffness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neckStiffness;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_neckStiffness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neckStiffness;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_neckStiffness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___neckStiffness = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_rotateChestByHands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotateChestByHands;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_rotateChestByHands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotateChestByHands;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_rotateChestByHands(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotateChestByHands = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestClampWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestClampWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestClampWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestClampWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_chestClampWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestClampWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headClampWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headClampWeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headClampWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headClampWeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_headClampWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headClampWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_moveBodyBackWhenCrouching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveBodyBackWhenCrouching;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_moveBodyBackWhenCrouching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveBodyBackWhenCrouching;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_moveBodyBackWhenCrouching(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveBodyBackWhenCrouching = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_maintainPelvisPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainPelvisPosition;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_maintainPelvisPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintainPelvisPosition;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_maintainPelvisPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintainPelvisPosition = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_maxRootAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRootAngle;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_maxRootAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRootAngle;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_maxRootAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxRootAngle = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_rootHeadingOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootHeadingOffset;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_rootHeadingOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootHeadingOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_rootHeadingOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootHeadingOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_IKPositionHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKPositionHead;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_IKPositionHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKPositionHead;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_IKPositionHead(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKPositionHead = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_IKRotationHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotationHead;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_IKRotationHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotationHead;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_IKRotationHead(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKRotationHead = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_IKPositionPelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKPositionPelvis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_IKPositionPelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKPositionPelvis;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_IKPositionPelvis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKPositionPelvis = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_IKRotationPelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotationPelvis;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_IKRotationPelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotationPelvis;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_IKRotationPelvis(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKRotationPelvis = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_goalPositionChest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goalPositionChest;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_goalPositionChest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goalPositionChest;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_goalPositionChest(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goalPositionChest = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisPositionOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_pelvisPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pelvisPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestPositionOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_chestPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPositionOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_headPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headPositionOffset = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisRotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisRotationOffset;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisRotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisRotationOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_pelvisRotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pelvisRotationOffset = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestRotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestRotationOffset;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestRotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestRotationOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_chestRotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestRotationOffset = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headRotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headRotationOffset;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headRotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headRotationOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_headRotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headRotationOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_faceDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___faceDirection;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_faceDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___faceDirection;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_faceDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___faceDirection = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_locomotionHeadPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locomotionHeadPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_locomotionHeadPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locomotionHeadPositionOffset;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_locomotionHeadPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___locomotionHeadPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPosition;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_headPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get__anchorRotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorRotation_k__BackingField;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get__anchorRotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorRotation_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set__anchorRotation_k__BackingField(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____anchorRotation_k__BackingField = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get__anchorRelativeToHead_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorRelativeToHead_k__BackingField;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get__anchorRelativeToHead_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorRelativeToHead_k__BackingField;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set__anchorRelativeToHead_k__BackingField(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____anchorRelativeToHead_k__BackingField = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_headRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_pelvisRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pelvisRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_anchorRelativeToPelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorRelativeToPelvis;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_anchorRelativeToPelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorRelativeToPelvis;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_anchorRelativeToPelvis(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anchorRelativeToPelvis = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisRelativeRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisRelativeRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisRelativeRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisRelativeRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_pelvisRelativeRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pelvisRelativeRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestRelativeRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestRelativeRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestRelativeRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestRelativeRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_chestRelativeRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestRelativeRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headDeltaPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDeltaPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headDeltaPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDeltaPosition;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_headDeltaPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headDeltaPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisDeltaRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisDeltaRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisDeltaRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisDeltaRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_pelvisDeltaRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pelvisDeltaRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestTargetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestTargetRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestTargetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestTargetRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_chestTargetRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestTargetRotation = value;
}
constexpr int32_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisIndex;
}
constexpr int32_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_pelvisIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisIndex;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_pelvisIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pelvisIndex = value;
}
constexpr int32_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_spineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spineIndex;
}
constexpr int32_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_spineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spineIndex;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_spineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spineIndex = value;
}
constexpr int32_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestIndex;
}
constexpr int32_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestIndex;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_chestIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestIndex = value;
}
constexpr int32_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_neckIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neckIndex;
}
constexpr int32_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_neckIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neckIndex;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_neckIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___neckIndex = value;
}
constexpr int32_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headIndex;
}
constexpr int32_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headIndex;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_headIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headIndex = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_length(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___length = value;
}
constexpr bool& RootMotion::FinalIK::__IKSolverVR__Spine::__get_hasChest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasChest;
}
constexpr bool const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_hasChest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasChest;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_hasChest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasChest = value;
}
constexpr bool& RootMotion::FinalIK::__IKSolverVR__Spine::__get_hasNeck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasNeck;
}
constexpr bool const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_hasNeck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasNeck;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_hasNeck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasNeck = value;
}
constexpr bool& RootMotion::FinalIK::__IKSolverVR__Spine::__get_hasLegs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasLegs;
}
constexpr bool const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_hasLegs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasLegs;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_hasLegs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasLegs = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headHeight;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_headHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headHeight;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_headHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headHeight = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__Spine::__get_sizeMlp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeMlp;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_sizeMlp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeMlp;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_sizeMlp(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sizeMlp = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestForward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestForward;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__Spine::__get_chestForward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestForward;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__Spine::__set_chestForward(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestForward = value;
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Spine::get_pelvis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "get_pelvis",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Spine::get_firstSpineBone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                             "get_firstSpineBone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Spine::get_chest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "get_chest",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Spine::get_neck() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "get_neck",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__Spine::get_head() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "get_head",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__IKSolverVR__Spine::get_anchorRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                             "get_anchorRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::set_anchorRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "set_anchorRotation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__IKSolverVR__Spine::get_anchorRelativeToHead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(),
                                                                             "get_anchorRelativeToHead", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::set_anchorRelativeToHead(::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "set_anchorRelativeToHead", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::OnRead(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                             ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest, bool hasNeck, bool hasShoulders,
                                                             bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "OnRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::PreSolve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "PreSolve",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::ApplyOffsets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "ApplyOffsets",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::CalculateChestTargetRotation(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* rootBone,
                                                                                   ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> arms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "CalculateChestTargetRotation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootBone, arms);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::Solve(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* rootBone,
                                                            ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> legs,
                                                            ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> arms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "Solve", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootBone, legs, arms);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::FABRIKPass(::UnityEngine::Vector3 animatedPelvisPos, ::UnityEngine::Vector3 rootUp, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "FABRIKPass", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animatedPelvisPos, rootUp, weight);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::SolvePelvis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "SolvePelvis",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::Write(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> solvedPositions,
                                                            ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>> solvedRotations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solvedPositions, solvedRotations);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::ResetOffsets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "ResetOffsets",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::AdjustChestByHands(ByRef<::UnityEngine::Quaternion> chestTargetRotation,
                                                                         ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> arms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "AdjustChestByHands", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chestTargetRotation, arms);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::InverseTranslateToHead(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> legs,
                                                                             bool limited, bool useCurrentLegMag, ::UnityEngine::Vector3 offset, float_t w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "InverseTranslateToHead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, legs, limited, useCurrentLegMag, offset, w);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::TranslatePelvis(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> legs,
                                                                      ::UnityEngine::Vector3 deltaPosition, ::UnityEngine::Quaternion deltaRotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "TranslatePelvis", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, legs, deltaPosition, deltaRotation);
}
/// @param it: int32_t (default: static_cast<int32_t>(0x2))
inline ::UnityEngine::Vector3
RootMotion::FinalIK::__IKSolverVR__Spine::LimitPelvisPosition(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> legs,
                                                              ::UnityEngine::Vector3 pelvisPosition, bool useCurrentLegMag, int32_t it) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "LimitPelvisPosition", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, legs, pelvisPosition, useCurrentLegMag, it);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::Bend(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones,
                                                           int32_t firstIndex, int32_t lastIndex, ::UnityEngine::Quaternion targetRotation, float_t clampWeight, bool uniformWeight, float_t w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "Bend", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bones, firstIndex, lastIndex, targetRotation, clampWeight, uniformWeight, w);
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::Bend(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones,
                                                           int32_t firstIndex, int32_t lastIndex, ::UnityEngine::Quaternion targetRotation, ::UnityEngine::Quaternion rotationOffset,
                                                           float_t clampWeight, bool uniformWeight, float_t w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), "Bend", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bones, firstIndex, lastIndex, targetRotation, rotationOffset, clampWeight, uniformWeight, w);
}
inline ::RootMotion::FinalIK::__IKSolverVR__Spine* RootMotion::FinalIK::__IKSolverVR__Spine::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__IKSolverVR__Spine*>());
}
inline void RootMotion::FinalIK::__IKSolverVR__Spine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__Spine*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverVR__Spine::__IKSolverVR__Spine() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset::__IKSolverVR__PositionOffset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset::__IKSolverVR__PositionOffset() {}
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset RootMotion::FinalIK::__IKSolverVR__PositionOffset::Pelvis{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset RootMotion::FinalIK::__IKSolverVR__PositionOffset::Chest{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset RootMotion::FinalIK::__IKSolverVR__PositionOffset::Head{ static_cast<int32_t>(0x2) };
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset RootMotion::FinalIK::__IKSolverVR__PositionOffset::LeftHand{ static_cast<int32_t>(0x3) };
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset RootMotion::FinalIK::__IKSolverVR__PositionOffset::RightHand{ static_cast<int32_t>(0x4) };
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset RootMotion::FinalIK::__IKSolverVR__PositionOffset::LeftFoot{ static_cast<int32_t>(0x5) };
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset RootMotion::FinalIK::__IKSolverVR__PositionOffset::RightFoot{ static_cast<int32_t>(0x6) };
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset RootMotion::FinalIK::__IKSolverVR__PositionOffset::LeftHeel{ static_cast<int32_t>(0x7) };
constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset RootMotion::FinalIK::__IKSolverVR__PositionOffset::RightHeel{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__IKSolverVR__RotationOffset::__IKSolverVR__RotationOffset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverVR__RotationOffset::__IKSolverVR__RotationOffset() {}
constexpr ::RootMotion::FinalIK::__IKSolverVR__RotationOffset RootMotion::FinalIK::__IKSolverVR__RotationOffset::Pelvis{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::FinalIK::__IKSolverVR__RotationOffset RootMotion::FinalIK::__IKSolverVR__RotationOffset::Chest{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::FinalIK::__IKSolverVR__RotationOffset RootMotion::FinalIK::__IKSolverVR__RotationOffset::Head{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__VirtualBone::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__VirtualBone::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x127efa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverVR__VirtualBone::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__VirtualBone::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x127f018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "Read", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.SwingRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>, int32_t, ::UnityEngine::Vector3, float_t)>(
        &::RootMotion::FinalIK::__IKSolverVR__VirtualBone::SwingRotation)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x12822fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "SwingRotation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.PreSolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(
    ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>)>(&::RootMotion::FinalIK::__IKSolverVR__VirtualBone::PreSolve)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x12824fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "PreSolve", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.RotateAroundPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::__IKSolverVR__VirtualBone::RotateAroundPoint)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1282070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "RotateAroundPoint", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.RotateBy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>, int32_t, ::UnityEngine::Quaternion)>(
        &::RootMotion::FinalIK::__IKSolverVR__VirtualBone::RotateBy)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x128265c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "RotateBy", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.RotateBy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>, ::UnityEngine::Quaternion)>(
        &::RootMotion::FinalIK::__IKSolverVR__VirtualBone::RotateBy)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1282804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "RotateBy", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.RotateTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>, int32_t, ::UnityEngine::Quaternion)>(
        &::RootMotion::FinalIK::__IKSolverVR__VirtualBone::RotateTo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x128298c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "RotateTo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.SolveTrigonometric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>, int32_t, int32_t, int32_t, ::UnityEngine::Vector3,
                         ::UnityEngine::Vector3, float_t)>(&::RootMotion::FinalIK::__IKSolverVR__VirtualBone::SolveTrigonometric)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x1281740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "SolveTrigonometric", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.GetDirectionToBendPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__VirtualBone::GetDirectionToBendPoint)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1282a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "GetDirectionToBendPoint", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.SolveFABRIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, float_t, int32_t, float_t, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__IKSolverVR__VirtualBone::SolveFABRIK)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x1281374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "SolveFABRIK", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.SolveFABRIKJoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::RootMotion::FinalIK::__IKSolverVR__VirtualBone::SolveFABRIKJoint)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1282b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "SolveFABRIKJoint", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverVR__VirtualBone.SolveCCD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>, ::UnityEngine::Vector3, float_t, int32_t)>(
        &::RootMotion::FinalIK::__IKSolverVR__VirtualBone::SolveCCD)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1282c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "SolveCCD", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_readPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_readPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readPosition;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__VirtualBone::__set_readPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_readRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_readRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__VirtualBone::__set_readRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_solverPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solverPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_solverPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solverPosition;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__VirtualBone::__set_solverPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___solverPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_solverRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solverRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_solverRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solverRotation;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__VirtualBone::__set_solverRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___solverRotation = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__VirtualBone::__set_length(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___length = value;
}
constexpr float_t& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_sqrMag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sqrMag;
}
constexpr float_t const& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_sqrMag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sqrMag;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__VirtualBone::__set_sqrMag(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sqrMag = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_axis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverVR__VirtualBone::__get_axis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis;
}
constexpr void RootMotion::FinalIK::__IKSolverVR__VirtualBone::__set_axis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___axis = value;
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::__IKSolverVR__VirtualBone::New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>(position, rotation));
}
inline void RootMotion::FinalIK::__IKSolverVR__VirtualBone::_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation);
}
inline void RootMotion::FinalIK::__IKSolverVR__VirtualBone::Read(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "Read", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation);
}
/// @param weight: float_t (default: 1.0)
inline void
RootMotion::FinalIK::__IKSolverVR__VirtualBone::SwingRotation(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones,
                                                              int32_t index, ::UnityEngine::Vector3 swingTarget, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "SwingRotation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, index, swingTarget, weight);
}
inline float_t
RootMotion::FinalIK::__IKSolverVR__VirtualBone::PreSolve(ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>> bones) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "PreSolve", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, bones);
}
inline void
RootMotion::FinalIK::__IKSolverVR__VirtualBone::RotateAroundPoint(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones,
                                                                  int32_t index, ::UnityEngine::Vector3 point, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "RotateAroundPoint", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, index, point, rotation);
}
inline void RootMotion::FinalIK::__IKSolverVR__VirtualBone::RotateBy(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones,
                                                                     int32_t index, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "RotateBy", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, index, rotation);
}
inline void RootMotion::FinalIK::__IKSolverVR__VirtualBone::RotateBy(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones,
                                                                     ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "RotateBy", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, rotation);
}
inline void RootMotion::FinalIK::__IKSolverVR__VirtualBone::RotateTo(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones,
                                                                     int32_t index, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "RotateTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, index, rotation);
}
inline void
RootMotion::FinalIK::__IKSolverVR__VirtualBone::SolveTrigonometric(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones,
                                                                   int32_t first, int32_t second, int32_t third, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Vector3 bendNormal,
                                                                   float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "SolveTrigonometric", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, first, second, third, targetPosition, bendNormal, weight);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverVR__VirtualBone::GetDirectionToBendPoint(::UnityEngine::Vector3 direction, float_t directionMag, ::UnityEngine::Vector3 bendDirection,
                                                                                                      float_t sqrMag1, float_t sqrMag2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "GetDirectionToBendPoint", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, direction, directionMag, bendDirection, sqrMag1, sqrMag2);
}
inline void RootMotion::FinalIK::__IKSolverVR__VirtualBone::SolveFABRIK(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones,
                                                                        ::UnityEngine::Vector3 startPosition, ::UnityEngine::Vector3 targetPosition, float_t weight,
                                                                        float_t minNormalizedTargetDistance, int32_t iterations, float_t length, ::UnityEngine::Vector3 startOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "SolveFABRIK", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, startPosition, targetPosition, weight, minNormalizedTargetDistance, iterations, length, startOffset);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverVR__VirtualBone::SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "SolveFABRIKJoint", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, pos1, pos2, length);
}
inline void RootMotion::FinalIK::__IKSolverVR__VirtualBone::SolveCCD(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*> bones,
                                                                     ::UnityEngine::Vector3 targetPosition, float_t weight, int32_t iterations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get(), "SolveCCD", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, ::Array<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, targetPosition, weight, iterations);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverVR__VirtualBone::__IKSolverVR__VirtualBone() {}
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.SetToReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)(::RootMotion::FinalIK::__VRIK__References*)>(
    &::RootMotion::FinalIK::IKSolverVR::SetToReferences)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x1270e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "SetToReferences", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIK__References*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.GuessHandOrientations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)(::RootMotion::FinalIK::__VRIK__References*, bool)>(
    &::RootMotion::FinalIK::IKSolverVR::GuessHandOrientations)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x127122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GuessHandOrientations", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIK__References*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.DefaultAnimationCurves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::DefaultAnimationCurves)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x12710e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                               "DefaultAnimationCurves", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.AddPositionOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)(::RootMotion::FinalIK::__IKSolverVR__PositionOffset, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::IKSolverVR::AddPositionOffset)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1271a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "AddPositionOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__PositionOffset>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.AddRotationOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)(::RootMotion::FinalIK::__IKSolverVR__RotationOffset, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::IKSolverVR::AddRotationOffset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1271ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "AddRotationOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__RotationOffset>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.AddRotationOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)(::RootMotion::FinalIK::__IKSolverVR__RotationOffset, ::UnityEngine::Quaternion)>(&::RootMotion::FinalIK::IKSolverVR::AddRotationOffset)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1271be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "AddRotationOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__RotationOffset>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.AddPlatformMotion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::IKSolverVR::AddPlatformMotion)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1271d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "AddPlatformMotion", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::Reset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1272258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.StoreDefaultLocalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1272ba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.FixTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::FixTransforms)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1272cfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.GetPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> (
    ::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::GetPoints)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1272ee8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.GetPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolver__Point* (::RootMotion::FinalIK::IKSolverVR::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::IKSolverVR::GetPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1272f58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverVR::*)(ByRef<::StringW>)>(&::RootMotion::FinalIK::IKSolverVR::IsValid)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x1272fc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.GetNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverVR::*)(
    ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(&::RootMotion::FinalIK::IKSolverVR::GetNormal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x12731c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetNormal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.GuessWristToPalmAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverVR::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::IKSolverVR::GuessWristToPalmAxis)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x127151c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GuessWristToPalmAxis", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.GuessPalmToThumbAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverVR::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::IKSolverVR::GuessPalmToThumbAxis)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x1271600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GuessPalmToThumbAxis", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.GetSineKeyframes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> (*)(float_t)>(
    &::RootMotion::FinalIK::IKSolverVR::GetSineKeyframes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1271948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetSineKeyframes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.UpdateSolverTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::UpdateSolverTransforms)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1272368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                               "UpdateSolverTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.OnInitiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::OnInitiate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1273434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::OnUpdate)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x1273470;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.WriteTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::WriteTransforms)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x12749fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "WriteTransforms",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>, bool, bool, bool, bool, bool)>(
    &::RootMotion::FinalIK::IKSolverVR::Read)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x12724b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "Read", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::Solve)> {
  constexpr static std::size_t size = 0x1048;
  constexpr static std::size_t addrs = 0x1273878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "Solve",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.GetPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverVR::*)(int32_t)>(
    &::RootMotion::FinalIK::IKSolverVR::GetPosition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1274e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.GetRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::IKSolverVR::*)(int32_t)>(
    &::RootMotion::FinalIK::IKSolverVR::GetRotation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1274e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetRotation", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.get_rootBone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolverVR__VirtualBone* (::RootMotion::FinalIK::IKSolverVR::*)()>(
    &::RootMotion::FinalIK::IKSolverVR::get_rootBone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12783b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "get_rootBone",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.set_rootBone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)(::RootMotion::FinalIK::__IKSolverVR__VirtualBone*)>(
    &::RootMotion::FinalIK::IKSolverVR::set_rootBone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12783bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "set_rootBone", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::Write)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x12748c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "Write",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR.GetPelvisOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverVR::*)()>(
    &::RootMotion::FinalIK::IKSolverVR::GetPelvisOffset)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x1277cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetPelvisOffset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverVR._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverVR::*)()>(&::RootMotion::FinalIK::IKSolverVR::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x12783c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& RootMotion::FinalIK::IKSolverVR::__get_solverTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solverTransforms;
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& RootMotion::FinalIK::IKSolverVR::__get_solverTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solverTransforms;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_solverTransforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___solverTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::IKSolverVR::__get_hasChest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasChest;
}
constexpr bool const& RootMotion::FinalIK::IKSolverVR::__get_hasChest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasChest;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_hasChest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasChest = value;
}
constexpr bool& RootMotion::FinalIK::IKSolverVR::__get_hasNeck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasNeck;
}
constexpr bool const& RootMotion::FinalIK::IKSolverVR::__get_hasNeck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasNeck;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_hasNeck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasNeck = value;
}
constexpr bool& RootMotion::FinalIK::IKSolverVR::__get_hasShoulders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasShoulders;
}
constexpr bool const& RootMotion::FinalIK::IKSolverVR::__get_hasShoulders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasShoulders;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_hasShoulders(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasShoulders = value;
}
constexpr bool& RootMotion::FinalIK::IKSolverVR::__get_hasToes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasToes;
}
constexpr bool const& RootMotion::FinalIK::IKSolverVR::__get_hasToes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasToes;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_hasToes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasToes = value;
}
constexpr bool& RootMotion::FinalIK::IKSolverVR::__get_hasLegs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasLegs;
}
constexpr bool const& RootMotion::FinalIK::IKSolverVR::__get_hasLegs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasLegs;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_hasLegs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasLegs = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& RootMotion::FinalIK::IKSolverVR::__get_readPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& RootMotion::FinalIK::IKSolverVR::__get_readPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readPositions;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_readPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& RootMotion::FinalIK::IKSolverVR::__get_readRotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& RootMotion::FinalIK::IKSolverVR::__get_readRotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readRotations;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_readRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readRotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& RootMotion::FinalIK::IKSolverVR::__get_solvedPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solvedPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& RootMotion::FinalIK::IKSolverVR::__get_solvedPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solvedPositions;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_solvedPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___solvedPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& RootMotion::FinalIK::IKSolverVR::__get_solvedRotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solvedRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& RootMotion::FinalIK::IKSolverVR::__get_solvedRotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solvedRotations;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_solvedRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___solvedRotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& RootMotion::FinalIK::IKSolverVR::__get_defaultLocalRotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& RootMotion::FinalIK::IKSolverVR::__get_defaultLocalRotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalRotations;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_defaultLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultLocalRotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& RootMotion::FinalIK::IKSolverVR::__get_defaultLocalPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& RootMotion::FinalIK::IKSolverVR::__get_defaultLocalPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalPositions;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_defaultLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultLocalPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_rootV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootV;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_rootV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootV;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_rootV(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootV = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_rootVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootVelocity;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_rootVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootVelocity;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_rootVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootVelocity = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_bodyOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_bodyOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyOffset;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_bodyOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bodyOffset = value;
}
constexpr int32_t& RootMotion::FinalIK::IKSolverVR::__get_supportLegIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportLegIndex;
}
constexpr int32_t const& RootMotion::FinalIK::IKSolverVR::__get_supportLegIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportLegIndex;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_supportLegIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportLegIndex = value;
}
constexpr int32_t& RootMotion::FinalIK::IKSolverVR::__get_lastLOD() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastLOD;
}
constexpr int32_t const& RootMotion::FinalIK::IKSolverVR::__get_lastLOD() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastLOD;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_lastLOD(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastLOD = value;
}
constexpr int32_t& RootMotion::FinalIK::IKSolverVR::__get_LOD() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LOD;
}
constexpr int32_t const& RootMotion::FinalIK::IKSolverVR::__get_LOD() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LOD;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_LOD(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LOD = value;
}
constexpr bool& RootMotion::FinalIK::IKSolverVR::__get_plantFeet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___plantFeet;
}
constexpr bool const& RootMotion::FinalIK::IKSolverVR::__get_plantFeet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___plantFeet;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_plantFeet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___plantFeet = value;
}
constexpr ::RootMotion::FinalIK::__IKSolverVR__VirtualBone*& RootMotion::FinalIK::IKSolverVR::__get__rootBone_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootBone_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*> const& RootMotion::FinalIK::IKSolverVR::__get__rootBone_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootBone_k__BackingField;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set__rootBone_k__BackingField(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rootBone_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolverVR__Spine*& RootMotion::FinalIK::IKSolverVR::__get_spine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Spine*> const& RootMotion::FinalIK::IKSolverVR::__get_spine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_spine(::RootMotion::FinalIK::__IKSolverVR__Spine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolverVR__Arm*& RootMotion::FinalIK::IKSolverVR::__get_leftArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftArm;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Arm*> const& RootMotion::FinalIK::IKSolverVR::__get_leftArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftArm;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_leftArm(::RootMotion::FinalIK::__IKSolverVR__Arm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftArm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolverVR__Arm*& RootMotion::FinalIK::IKSolverVR::__get_rightArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightArm;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Arm*> const& RootMotion::FinalIK::IKSolverVR::__get_rightArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightArm;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_rightArm(::RootMotion::FinalIK::__IKSolverVR__Arm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightArm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolverVR__Leg*& RootMotion::FinalIK::IKSolverVR::__get_leftLeg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftLeg;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Leg*> const& RootMotion::FinalIK::IKSolverVR::__get_leftLeg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftLeg;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_leftLeg(::RootMotion::FinalIK::__IKSolverVR__Leg* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftLeg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolverVR__Leg*& RootMotion::FinalIK::IKSolverVR::__get_rightLeg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightLeg;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Leg*> const& RootMotion::FinalIK::IKSolverVR::__get_rightLeg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightLeg;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_rightLeg(::RootMotion::FinalIK::__IKSolverVR__Leg* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightLeg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolverVR__Locomotion*& RootMotion::FinalIK::IKSolverVR::__get_locomotion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locomotion;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverVR__Locomotion*> const& RootMotion::FinalIK::IKSolverVR::__get_locomotion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locomotion;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_locomotion(::RootMotion::FinalIK::__IKSolverVR__Locomotion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___locomotion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*>& RootMotion::FinalIK::IKSolverVR::__get_legs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___legs;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> const& RootMotion::FinalIK::IKSolverVR::__get_legs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___legs;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_legs(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Leg*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Leg*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___legs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*>& RootMotion::FinalIK::IKSolverVR::__get_arms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arms;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> const& RootMotion::FinalIK::IKSolverVR::__get_arms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arms;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_arms(::ArrayW<::RootMotion::FinalIK::__IKSolverVR__Arm*, ::Array<::RootMotion::FinalIK::__IKSolverVR__Arm*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_headPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_headPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPosition;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_headPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headPosition = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_headDeltaPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDeltaPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_headDeltaPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDeltaPosition;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_headDeltaPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headDeltaPosition = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_raycastOriginPelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastOriginPelvis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_raycastOriginPelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastOriginPelvis;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_raycastOriginPelvis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raycastOriginPelvis = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_lastOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_lastOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastOffset;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_lastOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_debugPos1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPos1;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_debugPos1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPos1;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_debugPos1(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugPos1 = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_debugPos2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPos2;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_debugPos2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPos2;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_debugPos2(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugPos2 = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_debugPos3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPos3;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_debugPos3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPos3;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_debugPos3(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugPos3 = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverVR::__get_debugPos4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPos4;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverVR::__get_debugPos4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugPos4;
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_debugPos4(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugPos4 = value;
}
inline void RootMotion::FinalIK::IKSolverVR::SetToReferences(::RootMotion::FinalIK::__VRIK__References* references) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "SetToReferences", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIK__References*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, references);
}
inline void RootMotion::FinalIK::IKSolverVR::GuessHandOrientations(::RootMotion::FinalIK::__VRIK__References* references, bool onlyIfZero) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GuessHandOrientations", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIK__References*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, references, onlyIfZero);
}
inline void RootMotion::FinalIK::IKSolverVR::DefaultAnimationCurves() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                             "DefaultAnimationCurves", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverVR::AddPositionOffset(::RootMotion::FinalIK::__IKSolverVR__PositionOffset positionOffset, ::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "AddPositionOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__PositionOffset>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positionOffset, value);
}
inline void RootMotion::FinalIK::IKSolverVR::AddRotationOffset(::RootMotion::FinalIK::__IKSolverVR__RotationOffset rotationOffset, ::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "AddRotationOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__RotationOffset>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotationOffset, value);
}
inline void RootMotion::FinalIK::IKSolverVR::AddRotationOffset(::RootMotion::FinalIK::__IKSolverVR__RotationOffset rotationOffset, ::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "AddRotationOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__RotationOffset>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotationOffset, value);
}
inline void RootMotion::FinalIK::IKSolverVR::AddPlatformMotion(::UnityEngine::Vector3 deltaPosition, ::UnityEngine::Quaternion deltaRotation, ::UnityEngine::Vector3 platformPivot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "AddPlatformMotion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaPosition, deltaRotation, platformPivot);
}
inline void RootMotion::FinalIK::IKSolverVR::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverVR::StoreDefaultLocalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                             "StoreDefaultLocalState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverVR::FixTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "FixTransforms",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> RootMotion::FinalIK::IKSolverVR::GetPoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetPoints",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*>, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolver__Point* RootMotion::FinalIK::IKSolverVR::GetPoint(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetPoint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolver__Point*, false>(this, ___internal_method, transform);
}
inline bool RootMotion::FinalIK::IKSolverVR::IsValid(ByRef<::StringW> message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, message);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::GetNormal(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetNormal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, transforms);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::GuessWristToPalmAxis(::UnityEngine::Transform* hand, ::UnityEngine::Transform* forearm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GuessWristToPalmAxis", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, hand, forearm);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::GuessPalmToThumbAxis(::UnityEngine::Transform* hand, ::UnityEngine::Transform* forearm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GuessPalmToThumbAxis", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, hand, forearm);
}
inline ::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> RootMotion::FinalIK::IKSolverVR::GetSineKeyframes(float_t mag) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetSineKeyframes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*>, false>(nullptr, ___internal_method, mag);
}
inline void RootMotion::FinalIK::IKSolverVR::UpdateSolverTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(),
                                                                             "UpdateSolverTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverVR::OnInitiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "OnInitiate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverVR::OnUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "OnUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverVR::WriteTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "WriteTransforms",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverVR::Read(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes,
                                                  bool hasLegs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs);
}
inline void RootMotion::FinalIK::IKSolverVR::Solve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "Solve",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::GetPosition(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, index);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::IKSolverVR::GetRotation(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetRotation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, index);
}
inline ::RootMotion::FinalIK::__IKSolverVR__VirtualBone* RootMotion::FinalIK::IKSolverVR::get_rootBone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "get_rootBone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverVR::set_rootBone(::RootMotion::FinalIK::__IKSolverVR__VirtualBone* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "set_rootBone", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__VirtualBone*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::FinalIK::IKSolverVR::Write() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "Write",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::GetPelvisOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), "GetPelvisOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKSolverVR* RootMotion::FinalIK::IKSolverVR::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKSolverVR*>());
}
inline void RootMotion::FinalIK::IKSolverVR::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverVR*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::IKSolverVR::IKSolverVR() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
