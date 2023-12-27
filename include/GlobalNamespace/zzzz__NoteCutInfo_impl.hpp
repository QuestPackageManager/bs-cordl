#pragma once
#include "GlobalNamespace/zzzz__SaberType_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason::__NoteCutInfo__FailReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason::__NoteCutInfo__FailReason() {}
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason GlobalNamespace::__NoteCutInfo__FailReason::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason GlobalNamespace::__NoteCutInfo__FailReason::TooSoon{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason GlobalNamespace::__NoteCutInfo__FailReason::WrongColor{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason GlobalNamespace::__NoteCutInfo__FailReason::CutHarder{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason GlobalNamespace::__NoteCutInfo__FailReason::WrongDirection{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo.get_allIsOK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NoteCutInfo::*)()>(&::GlobalNamespace::NoteCutInfo::get_allIsOK)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x12a3fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(), "get_allIsOK",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo.get_allExceptSaberTypeIsOK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NoteCutInfo::*)()>(&::GlobalNamespace::NoteCutInfo::get_allExceptSaberTypeIsOK)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x12a3fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                                                                               "get_allExceptSaberTypeIsOK", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo.get_failReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__NoteCutInfo__FailReason (::GlobalNamespace::NoteCutInfo::*)()>(
    &::GlobalNamespace::NoteCutInfo::get_failReason)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12a4010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(), "get_failReason",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutInfo::*)(
    ::GlobalNamespace::NoteData*, bool, bool, bool, bool, float_t, ::UnityEngine::Vector3, ::GlobalNamespace::SaberType, float_t, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
    float_t, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::GlobalNamespace::ISaberMovementData*)>(
    &::GlobalNamespace::NoteCutInfo::_ctor)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x12a4054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementData*>::get() })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::NoteCutInfo::get_allIsOK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(), "get_allIsOK",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::NoteCutInfo::get_allExceptSaberTypeIsOK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                                                                             "get_allExceptSaberTypeIsOK", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__NoteCutInfo__FailReason GlobalNamespace::NoteCutInfo::get_failReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(), "get_failReason",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__NoteCutInfo__FailReason, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutInfo::_ctor(::GlobalNamespace::NoteData* noteData, bool speedOK, bool directionOK, bool saberTypeOK, bool wasCutTooSoon, float_t saberSpeed,
                                                ::UnityEngine::Vector3 saberDir, ::GlobalNamespace::SaberType saberType, float_t timeDeviation, float_t cutDirDeviation,
                                                ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, float_t cutDistanceToCenter, float_t cutAngle,
                                                ::UnityEngine::Quaternion worldRotation, ::UnityEngine::Quaternion inverseWorldRotation, ::UnityEngine::Quaternion noteRotation,
                                                ::UnityEngine::Vector3 notePosition, ::GlobalNamespace::ISaberMovementData* saberMovementData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData, speedOK, directionOK, saberTypeOK, wasCutTooSoon, saberSpeed, saberDir, saberType, timeDeviation,
                                                          cutDirDeviation, cutPoint, cutNormal, cutDistanceToCenter, cutAngle, worldRotation, inverseWorldRotation, noteRotation, notePosition,
                                                          saberMovementData);
}
// Ctor Parameters [CppParam { name: "noteData", ty: "::GlobalNamespace::NoteData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "speedOK", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "directionOK", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberTypeOK", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "wasCutTooSoon", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberDir", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberType", ty: "::GlobalNamespace::SaberType", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "timeDeviation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutDirDeviation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutPoint", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutAngle",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutDistanceToCenter", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldRotation", ty:
// "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "inverseWorldRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "noteRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "notePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "saberMovementData", ty: "::GlobalNamespace::ISaberMovementData*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::NoteCutInfo::NoteCutInfo(::GlobalNamespace::NoteData* noteData, bool speedOK, bool directionOK, bool saberTypeOK, bool wasCutTooSoon, float_t saberSpeed,
                                                      ::UnityEngine::Vector3 saberDir, ::GlobalNamespace::SaberType saberType, float_t timeDeviation, float_t cutDirDeviation,
                                                      ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, float_t cutAngle, float_t cutDistanceToCenter,
                                                      ::UnityEngine::Quaternion worldRotation, ::UnityEngine::Quaternion inverseWorldRotation, ::UnityEngine::Quaternion noteRotation,
                                                      ::UnityEngine::Vector3 notePosition, ::GlobalNamespace::ISaberMovementData* saberMovementData) noexcept {
  this->noteData = noteData;
  this->speedOK = speedOK;
  this->directionOK = directionOK;
  this->saberTypeOK = saberTypeOK;
  this->wasCutTooSoon = wasCutTooSoon;
  this->saberSpeed = saberSpeed;
  this->saberDir = saberDir;
  this->saberType = saberType;
  this->timeDeviation = timeDeviation;
  this->cutDirDeviation = cutDirDeviation;
  this->cutPoint = cutPoint;
  this->cutNormal = cutNormal;
  this->cutAngle = cutAngle;
  this->cutDistanceToCenter = cutDistanceToCenter;
  this->worldRotation = worldRotation;
  this->inverseWorldRotation = inverseWorldRotation;
  this->noteRotation = noteRotation;
  this->notePosition = notePosition;
  this->saberMovementData = saberMovementData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutInfo::NoteCutInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
