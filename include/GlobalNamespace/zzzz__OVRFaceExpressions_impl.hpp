#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFaceExpressions.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_WeightProvider.GetWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions_WeightProvider::*)(
    ::GlobalNamespace::OVRFaceExpressions_FaceExpression)>(&::GlobalNamespace::OVRFaceExpressions_WeightProvider::GetWeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_WeightProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_WeightProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::OVRFaceExpressions_WeightProvider::GetWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_WeightProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, expression);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence::OVRFaceExpressions_FaceRegionConfidence(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence::OVRFaceExpressions_FaceRegionConfidence() {}
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence::Lower{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence::Upper{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence::Max{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression::OVRFaceExpressions_FaceExpression(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression::OVRFaceExpressions_FaceExpression() {}
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::Invalid{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::BrowLowererL{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::BrowLowererR{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::CheekPuffL{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::CheekPuffR{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::CheekRaiserL{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::CheekRaiserR{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::CheekSuckL{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::CheekSuckR{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::ChinRaiserB{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::ChinRaiserT{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::DimplerL{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::DimplerR{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::EyesClosedL{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::EyesClosedR{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::EyesLookDownL{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::EyesLookDownR{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::EyesLookLeftL{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::EyesLookLeftR{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::EyesLookRightL{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::EyesLookRightR{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::EyesLookUpL{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::EyesLookUpR{ static_cast<int32_t>(0x15) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::InnerBrowRaiserL{ static_cast<int32_t>(0x16) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::InnerBrowRaiserR{ static_cast<int32_t>(0x17) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::JawDrop{ static_cast<int32_t>(0x18) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::JawSidewaysLeft{ static_cast<int32_t>(0x19) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::JawSidewaysRight{ static_cast<int32_t>(0x1a) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::JawThrust{ static_cast<int32_t>(0x1b) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LidTightenerL{ static_cast<int32_t>(0x1c) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LidTightenerR{ static_cast<int32_t>(0x1d) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipCornerDepressorL{ static_cast<int32_t>(0x1e) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipCornerDepressorR{ static_cast<int32_t>(0x1f) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipCornerPullerL{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipCornerPullerR{ static_cast<int32_t>(0x21) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipFunnelerLB{ static_cast<int32_t>(0x22) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipFunnelerLT{ static_cast<int32_t>(0x23) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipFunnelerRB{ static_cast<int32_t>(0x24) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipFunnelerRT{ static_cast<int32_t>(0x25) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipPressorL{ static_cast<int32_t>(0x26) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipPressorR{ static_cast<int32_t>(0x27) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipPuckerL{ static_cast<int32_t>(0x28) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipPuckerR{ static_cast<int32_t>(0x29) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipStretcherL{ static_cast<int32_t>(0x2a) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipStretcherR{ static_cast<int32_t>(0x2b) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipSuckLB{ static_cast<int32_t>(0x2c) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipSuckLT{ static_cast<int32_t>(0x2d) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipSuckRB{ static_cast<int32_t>(0x2e) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipSuckRT{ static_cast<int32_t>(0x2f) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipTightenerL{ static_cast<int32_t>(0x30) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipTightenerR{ static_cast<int32_t>(0x31) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LipsToward{ static_cast<int32_t>(0x32) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LowerLipDepressorL{ static_cast<int32_t>(0x33) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::LowerLipDepressorR{ static_cast<int32_t>(0x34) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::MouthLeft{ static_cast<int32_t>(0x35) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::MouthRight{ static_cast<int32_t>(0x36) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::NoseWrinklerL{ static_cast<int32_t>(0x37) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::NoseWrinklerR{ static_cast<int32_t>(0x38) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::OuterBrowRaiserL{ static_cast<int32_t>(0x39) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::OuterBrowRaiserR{ static_cast<int32_t>(0x3a) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::UpperLidRaiserL{ static_cast<int32_t>(0x3b) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::UpperLidRaiserR{ static_cast<int32_t>(0x3c) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::UpperLipRaiserL{ static_cast<int32_t>(0x3d) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::UpperLipRaiserR{ static_cast<int32_t>(0x3e) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::Max{ static_cast<int32_t>(0x3f) };
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)(::ArrayW<float_t, ::Array<float_t>*>)>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3faa4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3faa5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3faa60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3faa640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3faa6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3faa6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::_ctor(::ArrayW<float_t, ::Array<float_t>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
inline bool GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::operator ::System::Collections::Generic::IEnumerator_1<float_t>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<float_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<float_t>* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::i___System__Collections__Generic__IEnumerator_1_float_t_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<float_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_faceExpressions", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::OVRFaceExpressions_FaceExpressionsEnumerator(::ArrayW<float_t, ::Array<float_t>*> _faceExpressions, int32_t _index,
                                                                                                                        int32_t _count) noexcept {
  this->_faceExpressions = _faceExpressions;
  this->_index = _index;
  this->_count = _count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::OVRFaceExpressions_FaceExpressionsEnumerator() {}
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_FaceTrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_FaceTrackingEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fa9c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(),
                                                                               "get_FaceTrackingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_ValidExpressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_ValidExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fa9c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(),
                                                                               "get_ValidExpressions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.set_ValidExpressions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(bool)>(
    &::GlobalNamespace::OVRFaceExpressions::set_ValidExpressions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fa9c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "set_ValidExpressions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_EyeFollowingBlendshapesValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(
    &::GlobalNamespace::OVRFaceExpressions::get_EyeFollowingBlendshapesValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fa9c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "get_EyeFollowingBlendshapesValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.set_EyeFollowingBlendshapesValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(bool)>(
    &::GlobalNamespace::OVRFaceExpressions::set_EyeFollowingBlendshapesValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fa9c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "set_EyeFollowingBlendshapesValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3fa9c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3fa9d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnPermissionGranted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(::StringW)>(
    &::GlobalNamespace::OVRFaceExpressions::OnPermissionGranted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3fa9e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "OnPermissionGranted",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.StartFaceTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::StartFaceTracking)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3fa9d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(),
                                                                               "StartFaceTracking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3fa9eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fa9f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::Update)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3fa9f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::OVRFaceExpressions_FaceExpression)>(
    &::GlobalNamespace::OVRFaceExpressions::get_Item)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3fa9fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRFaceExpressions_FaceExpression>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.GetWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::OVRFaceExpressions_FaceExpression)>(
    &::GlobalNamespace::OVRFaceExpressions::GetWeight)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3faa140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "GetWeight", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRFaceExpressions_FaceExpression>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.TryGetFaceExpressionWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)(
    ::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::ByRef<float_t>)>(&::GlobalNamespace::OVRFaceExpressions::TryGetFaceExpressionWeight)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3faa144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "TryGetFaceExpressionWeight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRFaceExpressions_FaceExpression>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.TryGetWeightConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)(
    ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence, ::ByRef<float_t>)>(&::GlobalNamespace::OVRFaceExpressions::TryGetWeightConfidence)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3faa1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "TryGetWeightConfidence", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.CheckValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::CheckValidity)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3faa0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "CheckValidity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(
    &::GlobalNamespace::OVRFaceExpressions::CopyTo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3faa1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.ToArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::GlobalNamespace::OVRFaceExpressions::*)()>(
    &::GlobalNamespace::OVRFaceExpressions::ToArray)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3faa440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "ToArray",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator (::GlobalNamespace::OVRFaceExpressions::*)()>(
    &::GlobalNamespace::OVRFaceExpressions::GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3faa4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.System_Collections_Generic_IEnumerable_System_Single__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<float_t>* (::GlobalNamespace::OVRFaceExpressions::*)()>(
    &::GlobalNamespace::OVRFaceExpressions::System_Collections_Generic_IEnumerable_System_Single__GetEnumerator)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3faa4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(),
                                    "System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRFaceExpressions::*)()>(
    &::GlobalNamespace::OVRFaceExpressions::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3faa55c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3faa5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "get_Count",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3faa5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__ValidExpressions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ValidExpressions_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__ValidExpressions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ValidExpressions_k__BackingField;
}
constexpr void GlobalNamespace::OVRFaceExpressions::__cordl_internal_set__ValidExpressions_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ValidExpressions_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__EyeFollowingBlendshapesValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EyeFollowingBlendshapesValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__EyeFollowingBlendshapesValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EyeFollowingBlendshapesValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRFaceExpressions::__cordl_internal_set__EyeFollowingBlendshapesValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EyeFollowingBlendshapesValid_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRPlugin_FaceState& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__currentFaceState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentFaceState;
}
constexpr ::GlobalNamespace::OVRPlugin_FaceState const& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__currentFaceState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentFaceState;
}
constexpr void GlobalNamespace::OVRFaceExpressions::__cordl_internal_set__currentFaceState(::GlobalNamespace::OVRPlugin_FaceState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentFaceState = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__onPermissionGranted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPermissionGranted;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__onPermissionGranted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPermissionGranted;
}
constexpr void GlobalNamespace::OVRFaceExpressions::__cordl_internal_set__onPermissionGranted(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onPermissionGranted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRFaceExpressions::setStaticF__trackingInstanceCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_trackingInstanceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRFaceExpressions::getStaticF__trackingInstanceCount() {
  return ::cordl_internals::getStaticField<int32_t, "_trackingInstanceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get>();
}
inline bool GlobalNamespace::OVRFaceExpressions::get_FaceTrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(),
                                                                             "get_FaceTrackingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRFaceExpressions::get_ValidExpressions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(),
                                                                             "get_ValidExpressions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::set_ValidExpressions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "set_ValidExpressions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRFaceExpressions::get_EyeFollowingBlendshapesValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(),
                                                                             "get_EyeFollowingBlendshapesValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::set_EyeFollowingBlendshapesValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "set_EyeFollowingBlendshapesValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRFaceExpressions::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::OnPermissionGranted(::StringW permissionId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "OnPermissionGranted",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permissionId);
}
inline bool GlobalNamespace::OVRFaceExpressions::StartFaceTracking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "StartFaceTracking",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRFaceExpressions::get_Item(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRFaceExpressions_FaceExpression>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, expression);
}
inline float_t GlobalNamespace::OVRFaceExpressions::GetWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "GetWeight", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRFaceExpressions_FaceExpression>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, expression);
}
inline bool GlobalNamespace::OVRFaceExpressions::TryGetFaceExpressionWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression, ::ByRef<float_t> weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "TryGetFaceExpressionWeight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRFaceExpressions_FaceExpression>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, expression, weight);
}
inline bool GlobalNamespace::OVRFaceExpressions::TryGetWeightConfidence(::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence region, ::ByRef<float_t> weightConfidence) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "TryGetWeightConfidence", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, region, weightConfidence);
}
inline void GlobalNamespace::OVRFaceExpressions::CheckValidity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "CheckValidity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::CopyTo(::ArrayW<float_t, ::Array<float_t>*> array, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, startIndex);
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::OVRFaceExpressions::ToArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "ToArray",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator GlobalNamespace::OVRFaceExpressions::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<float_t>* GlobalNamespace::OVRFaceExpressions::System_Collections_Generic_IEnumerable_System_Single__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<float_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRFaceExpressions::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRFaceExpressions::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRFaceExpressions* GlobalNamespace::OVRFaceExpressions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRFaceExpressions*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<float_t>"
constexpr GlobalNamespace::OVRFaceExpressions::operator ::System::Collections::Generic::IReadOnlyCollection_1<float_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<float_t>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<float_t>* GlobalNamespace::OVRFaceExpressions::i___System__Collections__Generic__IReadOnlyCollection_1_float_t_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<float_t>"
constexpr GlobalNamespace::OVRFaceExpressions::operator ::System::Collections::Generic::IEnumerable_1<float_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<float_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<float_t>* GlobalNamespace::OVRFaceExpressions::i___System__Collections__Generic__IEnumerable_1_float_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::OVRFaceExpressions::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::OVRFaceExpressions::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRFaceExpressions_WeightProvider"
constexpr GlobalNamespace::OVRFaceExpressions::operator ::GlobalNamespace::OVRFaceExpressions_WeightProvider*() noexcept {
  return static_cast<::GlobalNamespace::OVRFaceExpressions_WeightProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRFaceExpressions_WeightProvider"
constexpr ::GlobalNamespace::OVRFaceExpressions_WeightProvider* GlobalNamespace::OVRFaceExpressions::i___GlobalNamespace__OVRFaceExpressions_WeightProvider() noexcept {
  return static_cast<::GlobalNamespace::OVRFaceExpressions_WeightProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFaceExpressions::OVRFaceExpressions() {}
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission GlobalNamespace::OVRFaceExpressions::FaceTrackingPermission{ static_cast<int32_t>(0x0) };
