#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SaberSwingRatingCounter_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidFinishReceiver_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounter_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.get_beforeCutRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberSwingRatingCounter::*)()>(
    &::GlobalNamespace::SaberSwingRatingCounter::get_beforeCutRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23248bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(),
                                                                               "get_beforeCutRating", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.get_afterCutRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberSwingRatingCounter::*)()>(
    &::GlobalNamespace::SaberSwingRatingCounter::get_afterCutRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23248c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(),
                                                                               "get_afterCutRating", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.RegisterDidChangeReceiver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*)>(
    &::GlobalNamespace::SaberSwingRatingCounter::RegisterDidChangeReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23248cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "RegisterDidChangeReceiver", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.RegisterDidFinishReceiver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*)>(
    &::GlobalNamespace::SaberSwingRatingCounter::RegisterDidFinishReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2324924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "RegisterDidFinishReceiver", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.UnregisterDidChangeReceiver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*)>(
    &::GlobalNamespace::SaberSwingRatingCounter::UnregisterDidChangeReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x232497c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "UnregisterDidChangeReceiver", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.UnregisterDidFinishReceiver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*)>(
    &::GlobalNamespace::SaberSwingRatingCounter::UnregisterDidFinishReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23249d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "UnregisterDidFinishReceiver", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(
    ::GlobalNamespace::ISaberMovementData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, bool)>(&::GlobalNamespace::SaberSwingRatingCounter::Init)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x2324a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.ProcessNewData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(
    ::GlobalNamespace::BladeMovementDataElement, ::GlobalNamespace::BladeMovementDataElement, bool)>(&::GlobalNamespace::SaberSwingRatingCounter::ProcessNewData)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x2324d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "ProcessNewData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BladeMovementDataElement>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BladeMovementDataElement>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)()>(&::GlobalNamespace::SaberSwingRatingCounter::Finish)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2325510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "Finish",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.DrawGizmos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)()>(&::GlobalNamespace::SaberSwingRatingCounter::DrawGizmos)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x23256bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "DrawGizmos",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)()>(&::GlobalNamespace::SaberSwingRatingCounter::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2325a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ISaberSwingRatingCounter"
constexpr GlobalNamespace::SaberSwingRatingCounter::operator ::GlobalNamespace::ISaberSwingRatingCounter*() noexcept {
  return static_cast<::GlobalNamespace::ISaberSwingRatingCounter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISaberMovementDataProcessor"
constexpr GlobalNamespace::SaberSwingRatingCounter::operator ::GlobalNamespace::ISaberMovementDataProcessor*() noexcept {
  return static_cast<::GlobalNamespace::ISaberMovementDataProcessor*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::ISaberMovementData*& GlobalNamespace::SaberSwingRatingCounter::__get__saberMovementData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____saberMovementData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaberMovementData*> const& GlobalNamespace::SaberSwingRatingCounter::__get__saberMovementData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____saberMovementData;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__saberMovementData(::GlobalNamespace::ISaberMovementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberMovementData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSwingRatingCounter::__get__cutPlaneNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutPlaneNormal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSwingRatingCounter::__get__cutPlaneNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutPlaneNormal;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__cutPlaneNormal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cutPlaneNormal = value;
}
constexpr float_t& GlobalNamespace::SaberSwingRatingCounter::__get__cutTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutTime;
}
constexpr float_t const& GlobalNamespace::SaberSwingRatingCounter::__get__cutTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutTime;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__cutTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cutTime = value;
}
constexpr float_t& GlobalNamespace::SaberSwingRatingCounter::__get__afterCutRating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____afterCutRating;
}
constexpr float_t const& GlobalNamespace::SaberSwingRatingCounter::__get__afterCutRating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____afterCutRating;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__afterCutRating(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____afterCutRating = value;
}
constexpr float_t& GlobalNamespace::SaberSwingRatingCounter::__get__beforeCutRating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beforeCutRating;
}
constexpr float_t const& GlobalNamespace::SaberSwingRatingCounter::__get__beforeCutRating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beforeCutRating;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__beforeCutRating(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____beforeCutRating = value;
}
constexpr ::UnityEngine::Plane& GlobalNamespace::SaberSwingRatingCounter::__get__notePlane() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____notePlane;
}
constexpr ::UnityEngine::Plane const& GlobalNamespace::SaberSwingRatingCounter::__get__notePlane() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____notePlane;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__notePlane(::UnityEngine::Plane value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____notePlane = value;
}
constexpr bool& GlobalNamespace::SaberSwingRatingCounter::__get__notePlaneWasCut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____notePlaneWasCut;
}
constexpr bool const& GlobalNamespace::SaberSwingRatingCounter::__get__notePlaneWasCut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____notePlaneWasCut;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__notePlaneWasCut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____notePlaneWasCut = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSwingRatingCounter::__get__noteForward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteForward;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSwingRatingCounter::__get__noteForward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteForward;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__noteForward(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____noteForward = value;
}
constexpr bool& GlobalNamespace::SaberSwingRatingCounter::__get__rateBeforeCut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rateBeforeCut;
}
constexpr bool const& GlobalNamespace::SaberSwingRatingCounter::__get__rateBeforeCut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rateBeforeCut;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__rateBeforeCut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____rateBeforeCut = value;
}
constexpr bool& GlobalNamespace::SaberSwingRatingCounter::__get__rateAfterCut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rateAfterCut;
}
constexpr bool const& GlobalNamespace::SaberSwingRatingCounter::__get__rateAfterCut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rateAfterCut;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__rateAfterCut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____rateAfterCut = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>*& GlobalNamespace::SaberSwingRatingCounter::__get__didChangeReceivers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____didChangeReceivers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>*> const&
GlobalNamespace::SaberSwingRatingCounter::__get__didChangeReceivers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____didChangeReceivers;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__didChangeReceivers(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____didChangeReceivers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>*& GlobalNamespace::SaberSwingRatingCounter::__get__didFinishReceivers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____didFinishReceivers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>*> const&
GlobalNamespace::SaberSwingRatingCounter::__get__didFinishReceivers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____didFinishReceivers;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__didFinishReceivers(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____didFinishReceivers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSwingRatingCounter::__get__notePlaneCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____notePlaneCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSwingRatingCounter::__get__notePlaneCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____notePlaneCenter;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__notePlaneCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____notePlaneCenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSwingRatingCounter::__get__beforeCutTopPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beforeCutTopPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSwingRatingCounter::__get__beforeCutTopPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beforeCutTopPos;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__beforeCutTopPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____beforeCutTopPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSwingRatingCounter::__get__beforeCutBottomPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beforeCutBottomPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSwingRatingCounter::__get__beforeCutBottomPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beforeCutBottomPos;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__beforeCutBottomPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____beforeCutBottomPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSwingRatingCounter::__get__afterCutTopPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____afterCutTopPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSwingRatingCounter::__get__afterCutTopPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____afterCutTopPos;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__afterCutTopPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____afterCutTopPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSwingRatingCounter::__get__afterCutBottomPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____afterCutBottomPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSwingRatingCounter::__get__afterCutBottomPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____afterCutBottomPos;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__afterCutBottomPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____afterCutBottomPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSwingRatingCounter::__get__newPlaneNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____newPlaneNormal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSwingRatingCounter::__get__newPlaneNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____newPlaneNormal;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__newPlaneNormal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____newPlaneNormal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSwingRatingCounter::__get__cutTopPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutTopPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSwingRatingCounter::__get__cutTopPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutTopPos;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__cutTopPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cutTopPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSwingRatingCounter::__get__cutBottomPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutBottomPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSwingRatingCounter::__get__cutBottomPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutBottomPos;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__cutBottomPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cutBottomPos = value;
}
constexpr bool& GlobalNamespace::SaberSwingRatingCounter::__get__finished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____finished;
}
constexpr bool const& GlobalNamespace::SaberSwingRatingCounter::__get__finished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____finished;
}
constexpr void GlobalNamespace::SaberSwingRatingCounter::__set__finished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____finished = value;
}
inline float_t GlobalNamespace::SaberSwingRatingCounter::get_beforeCutRating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(),
                                                                             "get_beforeCutRating", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SaberSwingRatingCounter::get_afterCutRating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(),
                                                                             "get_afterCutRating", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberSwingRatingCounter::RegisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "RegisterDidChangeReceiver", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::SaberSwingRatingCounter::RegisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "RegisterDidFinishReceiver", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::SaberSwingRatingCounter::UnregisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "UnregisterDidChangeReceiver", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::SaberSwingRatingCounter::UnregisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "UnregisterDidFinishReceiver", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::SaberSwingRatingCounter::Init(::GlobalNamespace::ISaberMovementData* saberMovementData, ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation,
                                                           bool rateBeforeCut, bool rateAfterCut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberMovementData, notePosition, noteRotation, rateBeforeCut, rateAfterCut);
}
inline void GlobalNamespace::SaberSwingRatingCounter::ProcessNewData(::GlobalNamespace::BladeMovementDataElement newData, ::GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "ProcessNewData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BladeMovementDataElement>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BladeMovementDataElement>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newData, prevData, prevDataAreValid);
}
inline void GlobalNamespace::SaberSwingRatingCounter::Finish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "Finish",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberSwingRatingCounter::DrawGizmos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), "DrawGizmos",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberSwingRatingCounter* GlobalNamespace::SaberSwingRatingCounter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SaberSwingRatingCounter*>());
}
inline void GlobalNamespace::SaberSwingRatingCounter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberSwingRatingCounter::SaberSwingRatingCounter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
