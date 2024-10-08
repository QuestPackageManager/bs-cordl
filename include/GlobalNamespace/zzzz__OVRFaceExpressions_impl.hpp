#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFaceExpressions.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRFaceExpressions__WeightProvider.GetWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__OVRFaceExpressions__WeightProvider::*)(
    ::GlobalNamespace::__OVRFaceExpressions__FaceExpression)>(&::GlobalNamespace::__OVRFaceExpressions__WeightProvider::GetWeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__WeightProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__WeightProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::__OVRFaceExpressions__WeightProvider::GetWeight(::GlobalNamespace::__OVRFaceExpressions__FaceExpression expression) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__WeightProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, expression);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence::__OVRFaceExpressions__FaceRegionConfidence(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence::__OVRFaceExpressions__FaceRegionConfidence() {}
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence::Lower{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence::Upper{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence::Max{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression::__OVRFaceExpressions__FaceExpression(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression::__OVRFaceExpressions__FaceExpression() {}
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::Invalid{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::BrowLowererL{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::BrowLowererR{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::CheekPuffL{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::CheekPuffR{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::CheekRaiserL{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::CheekRaiserR{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::CheekSuckL{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::CheekSuckR{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::ChinRaiserB{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::ChinRaiserT{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::DimplerL{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::DimplerR{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::EyesClosedL{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::EyesClosedR{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::EyesLookDownL{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::EyesLookDownR{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::EyesLookLeftL{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::EyesLookLeftR{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::EyesLookRightL{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::EyesLookRightR{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::EyesLookUpL{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::EyesLookUpR{ static_cast<int32_t>(0x15) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::InnerBrowRaiserL{ static_cast<int32_t>(0x16) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::InnerBrowRaiserR{ static_cast<int32_t>(0x17) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::JawDrop{ static_cast<int32_t>(0x18) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::JawSidewaysLeft{ static_cast<int32_t>(0x19) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::JawSidewaysRight{ static_cast<int32_t>(0x1a) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::JawThrust{ static_cast<int32_t>(0x1b) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LidTightenerL{ static_cast<int32_t>(0x1c) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LidTightenerR{ static_cast<int32_t>(0x1d) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipCornerDepressorL{ static_cast<int32_t>(0x1e) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipCornerDepressorR{ static_cast<int32_t>(0x1f) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipCornerPullerL{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipCornerPullerR{ static_cast<int32_t>(0x21) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipFunnelerLB{ static_cast<int32_t>(0x22) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipFunnelerLT{ static_cast<int32_t>(0x23) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipFunnelerRB{ static_cast<int32_t>(0x24) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipFunnelerRT{ static_cast<int32_t>(0x25) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipPressorL{ static_cast<int32_t>(0x26) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipPressorR{ static_cast<int32_t>(0x27) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipPuckerL{ static_cast<int32_t>(0x28) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipPuckerR{ static_cast<int32_t>(0x29) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipStretcherL{ static_cast<int32_t>(0x2a) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipStretcherR{ static_cast<int32_t>(0x2b) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipSuckLB{ static_cast<int32_t>(0x2c) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipSuckLT{ static_cast<int32_t>(0x2d) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipSuckRB{ static_cast<int32_t>(0x2e) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipSuckRT{ static_cast<int32_t>(0x2f) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipTightenerL{ static_cast<int32_t>(0x30) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipTightenerR{ static_cast<int32_t>(0x31) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LipsToward{ static_cast<int32_t>(0x32) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LowerLipDepressorL{ static_cast<int32_t>(0x33) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::LowerLipDepressorR{ static_cast<int32_t>(0x34) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::MouthLeft{ static_cast<int32_t>(0x35) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::MouthRight{ static_cast<int32_t>(0x36) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::NoseWrinklerL{ static_cast<int32_t>(0x37) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::NoseWrinklerR{ static_cast<int32_t>(0x38) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::OuterBrowRaiserL{ static_cast<int32_t>(0x39) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::OuterBrowRaiserR{ static_cast<int32_t>(0x3a) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::UpperLidRaiserL{ static_cast<int32_t>(0x3b) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::UpperLidRaiserR{ static_cast<int32_t>(0x3c) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::UpperLipRaiserL{ static_cast<int32_t>(0x3d) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::UpperLipRaiserR{ static_cast<int32_t>(0x3e) };
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::__OVRFaceExpressions__FaceExpression::Max{ static_cast<int32_t>(0x3f) };
//  Writing Method size for method: ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::*)(::ArrayW<float_t, ::Array<float_t>*>)>(
    &::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3f34418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3f34544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3f34560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3f34594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3f345f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3f34600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::operator ::System::Collections::Generic::IEnumerator_1<float_t>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<float_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<float_t>* GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::i___System__Collections__Generic__IEnumerator_1_float_t_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<float_t>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::_ctor(::ArrayW<float_t, ::Array<float_t>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
inline bool GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_faceExpressions", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_index", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::__OVRFaceExpressions__FaceExpressionsEnumerator(::ArrayW<float_t, ::Array<float_t>*> _faceExpressions, int32_t _index,
                                                                                                                              int32_t _count) noexcept {
  this->_faceExpressions = _faceExpressions;
  this->_index = _index;
  this->_count = _count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator::__OVRFaceExpressions__FaceExpressionsEnumerator() {}
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_FaceTrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_FaceTrackingEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3f33b68;

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
  constexpr static std::size_t addrs = 0x3f33bb8;

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
  constexpr static std::size_t addrs = 0x3f33bc0;

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
  constexpr static std::size_t addrs = 0x3f33bcc;

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
  constexpr static std::size_t addrs = 0x3f33bd4;

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
  constexpr static std::size_t addrs = 0x3f33be0;

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
  constexpr static std::size_t addrs = 0x3f33c5c;

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
  constexpr static std::size_t addrs = 0x3f33dac;

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
  constexpr static std::size_t addrs = 0x3f33cd4;

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
  constexpr static std::size_t addrs = 0x3f33e0c;

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
  constexpr static std::size_t addrs = 0x3f33e94;

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
  constexpr static std::size_t addrs = 0x3f33ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::__OVRFaceExpressions__FaceExpression)>(
    &::GlobalNamespace::OVRFaceExpressions::get_Item)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3f33f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.GetWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::__OVRFaceExpressions__FaceExpression)>(
    &::GlobalNamespace::OVRFaceExpressions::GetWeight)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3f34094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "GetWeight", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.TryGetFaceExpressionWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)(
    ::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ByRef<float_t>)>(&::GlobalNamespace::OVRFaceExpressions::TryGetFaceExpressionWeight)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3f34098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "TryGetFaceExpressionWeight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.TryGetWeightConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)(
    ::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence, ByRef<float_t>)>(&::GlobalNamespace::OVRFaceExpressions::TryGetWeightConfidence)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3f340f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "TryGetWeightConfidence", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.CheckValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::CheckValidity)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3f34038;

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
  constexpr static std::size_t addrs = 0x3f34150;

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
  constexpr static std::size_t addrs = 0x3f34394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "ToArray",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator (::GlobalNamespace::OVRFaceExpressions::*)()>(
    &::GlobalNamespace::OVRFaceExpressions::GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3f343f8;

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
  constexpr static std::size_t addrs = 0x3f3443c;

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
  constexpr static std::size_t addrs = 0x3f344b0;

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
  constexpr static std::size_t addrs = 0x3f34524;

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
  constexpr static std::size_t addrs = 0x3f3453c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
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
/// @brief Convert operator to "::GlobalNamespace::__OVRFaceExpressions__WeightProvider"
constexpr GlobalNamespace::OVRFaceExpressions::operator ::GlobalNamespace::__OVRFaceExpressions__WeightProvider*() noexcept {
  return static_cast<::GlobalNamespace::__OVRFaceExpressions__WeightProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::__OVRFaceExpressions__WeightProvider"
constexpr ::GlobalNamespace::__OVRFaceExpressions__WeightProvider* GlobalNamespace::OVRFaceExpressions::i___GlobalNamespace____OVRFaceExpressions__WeightProvider() noexcept {
  return static_cast<::GlobalNamespace::__OVRFaceExpressions__WeightProvider*>(static_cast<void*>(this));
}
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
constexpr ::GlobalNamespace::__OVRPlugin__FaceState& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__currentFaceState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentFaceState;
}
constexpr ::GlobalNamespace::__OVRPlugin__FaceState const& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__currentFaceState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentFaceState;
}
constexpr void GlobalNamespace::OVRFaceExpressions::__cordl_internal_set__currentFaceState(::GlobalNamespace::__OVRPlugin__FaceState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentFaceState = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__onPermissionGranted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onPermissionGranted;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__onPermissionGranted() const {
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
inline float_t GlobalNamespace::OVRFaceExpressions::get_Item(::GlobalNamespace::__OVRFaceExpressions__FaceExpression expression) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, expression);
}
inline float_t GlobalNamespace::OVRFaceExpressions::GetWeight(::GlobalNamespace::__OVRFaceExpressions__FaceExpression expression) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "GetWeight", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, expression);
}
inline bool GlobalNamespace::OVRFaceExpressions::TryGetFaceExpressionWeight(::GlobalNamespace::__OVRFaceExpressions__FaceExpression expression, ByRef<float_t> weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "TryGetFaceExpressionWeight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, expression, weight);
}
inline bool GlobalNamespace::OVRFaceExpressions::TryGetWeightConfidence(::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence region, ByRef<float_t> weightConfidence) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "TryGetWeightConfidence", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, region, weightConfidence);
}
inline void GlobalNamespace::OVRFaceExpressions::CheckValidity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "CheckValidity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param startIndex: int32_t (default: static_cast<int32_t>(0x0))
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
inline ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator GlobalNamespace::OVRFaceExpressions::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator, false>(this, ___internal_method);
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
inline ::GlobalNamespace::OVRFaceExpressions* GlobalNamespace::OVRFaceExpressions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRFaceExpressions*>());
}
inline void GlobalNamespace::OVRFaceExpressions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFaceExpressions::OVRFaceExpressions() {}
constexpr ::GlobalNamespace::__OVRPermissionsRequester__Permission GlobalNamespace::OVRFaceExpressions::FaceTrackingPermission{ static_cast<int32_t>(0x0) };
