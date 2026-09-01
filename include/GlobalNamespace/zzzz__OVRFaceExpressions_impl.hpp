#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRFaceExpressions.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_WeightProvider.GetWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions_WeightProvider::*)(::GlobalNamespace::OVRFaceExpressions_FaceExpression)>(
    &::GlobalNamespace::OVRFaceExpressions_WeightProvider::GetWeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_WeightProvider*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_WeightProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::OVRFaceExpressions_WeightProvider::GetWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_WeightProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, expression);
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
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource::OVRFaceExpressions_FaceTrackingDataSource(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource::OVRFaceExpressions_FaceTrackingDataSource() {}
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource::Visual{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource::Audio{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource::Count{ static_cast<int32_t>(0x2) };
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
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::TongueTipInterdental{ static_cast<int32_t>(0x3f) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::TongueTipAlveolar{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::TongueFrontDorsalPalate{ static_cast<int32_t>(0x41) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::TongueMidDorsalPalate{ static_cast<int32_t>(0x42) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::TongueBackDorsalVelar{ static_cast<int32_t>(0x43) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::TongueOut{ static_cast<int32_t>(0x44) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::TongueRetreat{ static_cast<int32_t>(0x45) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFaceExpressions_FaceExpression::Max{ static_cast<int32_t>(0x46) };
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)(::ArrayW<float_t>)>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e20d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e20e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e20e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e20eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e20ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::*)()>(
    &::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e20edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::_ctor(::ArrayW<float_t> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
inline bool GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::operator ::System::Collections::Generic::IEnumerator_1<float_t>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<float_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<float_t>* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::i___System__Collections__Generic__IEnumerator_1_float_t_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<float_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_faceExpressions", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::OVRFaceExpressions_FaceExpressionsEnumerator(::ArrayW<float_t> _faceExpressions, int32_t _index, int32_t _count) noexcept {
  this->_faceExpressions = _faceExpressions;
  this->_index = _index;
  this->_count = _count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator::OVRFaceExpressions_FaceExpressionsEnumerator() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme::OVRFaceExpressions_FaceViseme(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme::OVRFaceExpressions_FaceViseme() {}
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::Invalid{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::SIL{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::PP{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::FF{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::TH{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::DD{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::KK{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::CH{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::SS{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::NN{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::RR{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::AA{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::E{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::IH{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::OH{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::OU{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRFaceExpressions_FaceViseme GlobalNamespace::OVRFaceExpressions_FaceViseme::Count{ static_cast<int32_t>(0xf) };
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_FaceTrackingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_FaceTrackingEnabled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e1ff2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_FaceTrackingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_ValidExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_ValidExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1ff80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_ValidExpressions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.set_ValidExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(bool)>(&::GlobalNamespace::OVRFaceExpressions::set_ValidExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1ff88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "set_ValidExpressions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_EyeFollowingBlendshapesValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_EyeFollowingBlendshapesValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1ff90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_EyeFollowingBlendshapesValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.set_EyeFollowingBlendshapesValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(bool)>(&::GlobalNamespace::OVRFaceExpressions::set_EyeFollowingBlendshapesValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1ff98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "set_EyeFollowingBlendshapesValid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_AreVisemesValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_AreVisemesValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1ffa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_AreVisemesValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.set_AreVisemesValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(bool)>(&::GlobalNamespace::OVRFaceExpressions::set_AreVisemesValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1ffa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "set_AreVisemesValid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e1ffb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::OnEnable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2002c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnPermissionGranted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(::StringW)>(&::GlobalNamespace::OVRFaceExpressions::OnPermissionGranted)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e201ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "OnPermissionGranted", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.GetRequestedFaceTrackingDataSources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::OVRPlugin_FaceTrackingDataSource> (::GlobalNamespace::OVRFaceExpressions::*)()>(
    &::GlobalNamespace::OVRFaceExpressions::GetRequestedFaceTrackingDataSources)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e20264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "GetRequestedFaceTrackingDataSources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.StartFaceTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::StartFaceTracking)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e200a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "StartFaceTracking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e20328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e203b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::Update)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e203c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::OVRFaceExpressions_FaceExpression)>(
    &::GlobalNamespace::OVRFaceExpressions::get_Item)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e2049c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_Item", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceExpression>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.GetWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::OVRFaceExpressions_FaceExpression)>(
    &::GlobalNamespace::OVRFaceExpressions::GetWeight)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e205ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "GetWeight", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceExpression>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.TryGetFaceExpressionWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::by_ref<float_t>)>(
    &::GlobalNamespace::OVRFaceExpressions::TryGetFaceExpressionWeight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e205f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(),
                                         { "TryGetFaceExpressionWeight", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceExpression>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.GetViseme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::OVRFaceExpressions_FaceViseme)>(
    &::GlobalNamespace::OVRFaceExpressions::GetViseme)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e20640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "GetViseme", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceViseme>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.TryGetFaceViseme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::OVRFaceExpressions_FaceViseme, ::by_ref<float_t>)>(
    &::GlobalNamespace::OVRFaceExpressions::TryGetFaceViseme)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e20790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(),
                                                             { "TryGetFaceViseme", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceViseme>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.CopyVisemesTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(::ArrayW<float_t>, int32_t)>(&::GlobalNamespace::OVRFaceExpressions::CopyVisemesTo)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5e207e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "CopyVisemesTo", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.TryGetWeightConfidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence, ::by_ref<float_t>)>(
    &::GlobalNamespace::OVRFaceExpressions::TryGetWeightConfidence)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e20a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(),
                                         { "TryGetWeightConfidence", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.TryGetFaceTrackingDataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)(::by_ref<::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource>)>(
    &::GlobalNamespace::OVRFaceExpressions::TryGetFaceTrackingDataSource)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e20a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(),
                                                             { "TryGetFaceTrackingDataSource", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.CheckValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::CheckValidity)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e20594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "CheckValidity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.CheckVisemesValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::CheckVisemesValidity)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e20738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "CheckVisemesValidity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(::ArrayW<float_t>, int32_t)>(&::GlobalNamespace::OVRFaceExpressions::CopyTo)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5e20a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.ToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::ToArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e20ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "ToArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator (::GlobalNamespace::OVRFaceExpressions::*)()>(
    &::GlobalNamespace::OVRFaceExpressions::GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e20d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.System_Collections_Generic_IEnumerable_System_Single__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<float_t>* (::GlobalNamespace::OVRFaceExpressions::*)()>(
    &::GlobalNamespace::OVRFaceExpressions::System_Collections_Generic_IEnumerable_System_Single__GetEnumerator)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e20d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRFaceExpressions::*)()>(
    &::GlobalNamespace::OVRFaceExpressions::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e20dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e20e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e20e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { ".ctor", {}, {} })));
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
constexpr bool& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__AreVisemesValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AreVisemesValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__AreVisemesValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AreVisemesValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRFaceExpressions::__cordl_internal_set__AreVisemesValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AreVisemesValid_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRPlugin_FaceVisemesState& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__currentFaceVisemesState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentFaceVisemesState;
}
constexpr ::GlobalNamespace::OVRPlugin_FaceVisemesState const& GlobalNamespace::OVRFaceExpressions::__cordl_internal_get__currentFaceVisemesState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentFaceVisemesState;
}
constexpr void GlobalNamespace::OVRFaceExpressions::__cordl_internal_set__currentFaceVisemesState(::GlobalNamespace::OVRPlugin_FaceVisemesState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentFaceVisemesState = value;
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
  this->____onPermissionGranted = value;
}
inline void GlobalNamespace::OVRFaceExpressions::setStaticF__trackingInstanceCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_trackingInstanceCount", ::GlobalNamespace::OVRFaceExpressions*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRFaceExpressions::getStaticF__trackingInstanceCount() {
  return ::cordl_internals::getStaticField<int32_t, "_trackingInstanceCount", ::GlobalNamespace::OVRFaceExpressions*>();
}
inline bool GlobalNamespace::OVRFaceExpressions::get_FaceTrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_FaceTrackingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRFaceExpressions::get_ValidExpressions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_ValidExpressions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::set_ValidExpressions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "set_ValidExpressions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRFaceExpressions::get_EyeFollowingBlendshapesValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_EyeFollowingBlendshapesValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::set_EyeFollowingBlendshapesValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "set_EyeFollowingBlendshapesValid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRFaceExpressions::get_AreVisemesValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_AreVisemesValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::set_AreVisemesValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "set_AreVisemesValid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRFaceExpressions::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::OnPermissionGranted(::StringW permissionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "OnPermissionGranted", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionId);
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_FaceTrackingDataSource> GlobalNamespace::OVRFaceExpressions::GetRequestedFaceTrackingDataSources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "GetRequestedFaceTrackingDataSources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRPlugin_FaceTrackingDataSource>>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRFaceExpressions::StartFaceTracking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "StartFaceTracking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRFaceExpressions::get_Item(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_Item", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceExpression>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, expression);
}
inline float_t GlobalNamespace::OVRFaceExpressions::GetWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "GetWeight", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceExpression>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, expression);
}
inline bool GlobalNamespace::OVRFaceExpressions::TryGetFaceExpressionWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression, ::by_ref<float_t> weight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(),
                                              { "TryGetFaceExpressionWeight", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceExpression>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, expression, weight);
}
inline float_t GlobalNamespace::OVRFaceExpressions::GetViseme(::GlobalNamespace::OVRFaceExpressions_FaceViseme viseme) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "GetViseme", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceViseme>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, viseme);
}
inline bool GlobalNamespace::OVRFaceExpressions::TryGetFaceViseme(::GlobalNamespace::OVRFaceExpressions_FaceViseme viseme, ::by_ref<float_t> weight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(),
                                                           { "TryGetFaceViseme", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceViseme>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, viseme, weight);
}
inline void GlobalNamespace::OVRFaceExpressions::CopyVisemesTo(::ArrayW<float_t> array, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "CopyVisemesTo", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, startIndex);
}
inline bool GlobalNamespace::OVRFaceExpressions::TryGetWeightConfidence(::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence region, ::by_ref<float_t> weightConfidence) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(),
                                       { "TryGetWeightConfidence", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, region, weightConfidence);
}
inline bool GlobalNamespace::OVRFaceExpressions::TryGetFaceTrackingDataSource(::by_ref<::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource> dataSource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(),
                                                           { "TryGetFaceTrackingDataSource", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dataSource);
}
inline void GlobalNamespace::OVRFaceExpressions::CheckValidity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "CheckValidity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::CheckVisemesValidity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "CheckVisemesValidity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::CopyTo(::ArrayW<float_t> array, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, startIndex);
}
inline ::ArrayW<float_t> GlobalNamespace::OVRFaceExpressions::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator GlobalNamespace::OVRFaceExpressions::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<float_t>* GlobalNamespace::OVRFaceExpressions::System_Collections_Generic_IEnumerable_System_Single__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<float_t>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRFaceExpressions::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRFaceExpressions::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFaceExpressions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFaceExpressions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRFaceExpressions* GlobalNamespace::OVRFaceExpressions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRFaceExpressions*>());
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
constexpr ::GlobalNamespace::OVRPermissionsRequester_Permission GlobalNamespace::OVRFaceExpressions::RecordAudioPermission{ static_cast<int32_t>(0x4) };
