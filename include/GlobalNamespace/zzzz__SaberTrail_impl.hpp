#pragma once
// IWYU pragma private; include "GlobalNamespace\SaberTrail.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberTrail_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
#include "GlobalNamespace/zzzz__DeterminismConfig_def.hpp"
#include "GlobalNamespace/zzzz__IBladeMovementData_def.hpp"
#include "GlobalNamespace/zzzz__SaberTrailRenderer_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "GlobalNamespace/zzzz__TrailElementCollection_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)()>(&::GlobalNamespace::SaberTrail::Start)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f52f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)(::UnityEngine::Color, ::GlobalNamespace::IBladeMovementData*)>(&::GlobalNamespace::SaberTrail::Setup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f53088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "Setup", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::IBladeMovementData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)()>(&::GlobalNamespace::SaberTrail::Init)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5f530a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.HandleDeterminismSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)(bool)>(&::GlobalNamespace::SaberTrail::HandleDeterminismSet)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f53564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "HandleDeterminismSet", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.ResetTrailData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)()>(&::GlobalNamespace::SaberTrail::ResetTrailData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f53578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "ResetTrailData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)()>(&::GlobalNamespace::SaberTrail::LateUpdate)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x5f536ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)()>(&::GlobalNamespace::SaberTrail::OnEnable)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5f53de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)()>(&::GlobalNamespace::SaberTrail::OnDisable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5f53f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)()>(&::GlobalNamespace::SaberTrail::OnDestroy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f54054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.GetTrailWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SaberTrail::*)(::GlobalNamespace::BladeMovementDataElement)>(&::GlobalNamespace::SaberTrail::GetTrailWidth)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f534d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "GetTrailWidth", {}, { ::i2c::type_of<::GlobalNamespace::BladeMovementDataElement>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)()>(&::GlobalNamespace::SaberTrail::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5f54100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "OnDrawGizmosSelected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTrail._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberTrail::*)()>(&::GlobalNamespace::SaberTrail::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f54314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::SaberTrail::__cordl_internal_get__timeHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::SaberTrail::__cordl_internal_get__timeHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeHelper = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::SaberTrail::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::SaberTrail::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::GlobalNamespace::DeterminismConfig*& GlobalNamespace::SaberTrail::__cordl_internal_get__determinismConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr ::GlobalNamespace::DeterminismConfig* const& GlobalNamespace::SaberTrail::__cordl_internal_get__determinismConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____determinismConfig = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberTrailRenderer>& GlobalNamespace::SaberTrail::__cordl_internal_get__trailRendererPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailRendererPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SaberTrailRenderer> const& GlobalNamespace::SaberTrail::__cordl_internal_get__trailRendererPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailRendererPrefab;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__trailRendererPrefab(::UnityW<::GlobalNamespace::SaberTrailRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trailRendererPrefab = value;
}
constexpr float_t& GlobalNamespace::SaberTrail::__cordl_internal_get__trailDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailDuration;
}
constexpr float_t const& GlobalNamespace::SaberTrail::__cordl_internal_get__trailDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailDuration;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__trailDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trailDuration = value;
}
constexpr int32_t& GlobalNamespace::SaberTrail::__cordl_internal_get__samplingFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samplingFrequency;
}
constexpr int32_t const& GlobalNamespace::SaberTrail::__cordl_internal_get__samplingFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samplingFrequency;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__samplingFrequency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____samplingFrequency = value;
}
constexpr int32_t& GlobalNamespace::SaberTrail::__cordl_internal_get__granularity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granularity;
}
constexpr int32_t const& GlobalNamespace::SaberTrail::__cordl_internal_get__granularity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granularity;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__granularity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____granularity = value;
}
constexpr float_t& GlobalNamespace::SaberTrail::__cordl_internal_get__whiteSectionMaxDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whiteSectionMaxDuration;
}
constexpr float_t const& GlobalNamespace::SaberTrail::__cordl_internal_get__whiteSectionMaxDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whiteSectionMaxDuration;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__whiteSectionMaxDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____whiteSectionMaxDuration = value;
}
constexpr bool& GlobalNamespace::SaberTrail::__cordl_internal_get__colorOverwrite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorOverwrite;
}
constexpr bool const& GlobalNamespace::SaberTrail::__cordl_internal_get__colorOverwrite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorOverwrite;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__colorOverwrite(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorOverwrite = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SaberTrail::__cordl_internal_get__forcedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forcedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SaberTrail::__cordl_internal_get__forcedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forcedColor;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__forcedColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forcedColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SaberTrail::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SaberTrail::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr ::GlobalNamespace::IBladeMovementData*& GlobalNamespace::SaberTrail::__cordl_internal_get__movementData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementData;
}
constexpr ::GlobalNamespace::IBladeMovementData* const& GlobalNamespace::SaberTrail::__cordl_internal_get__movementData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementData;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__movementData(::GlobalNamespace::IBladeMovementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementData = value;
}
constexpr float_t& GlobalNamespace::SaberTrail::__cordl_internal_get__lastTrailElementTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTrailElementTime;
}
constexpr float_t const& GlobalNamespace::SaberTrail::__cordl_internal_get__lastTrailElementTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTrailElementTime;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__lastTrailElementTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastTrailElementTime = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberTrailRenderer>& GlobalNamespace::SaberTrail::__cordl_internal_get__trailRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailRenderer;
}
constexpr ::UnityW<::GlobalNamespace::SaberTrailRenderer> const& GlobalNamespace::SaberTrail::__cordl_internal_get__trailRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailRenderer;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__trailRenderer(::UnityW<::GlobalNamespace::SaberTrailRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trailRenderer = value;
}
constexpr ::GlobalNamespace::TrailElementCollection*& GlobalNamespace::SaberTrail::__cordl_internal_get__trailElementCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailElementCollection;
}
constexpr ::GlobalNamespace::TrailElementCollection* const& GlobalNamespace::SaberTrail::__cordl_internal_get__trailElementCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailElementCollection;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__trailElementCollection(::GlobalNamespace::TrailElementCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trailElementCollection = value;
}
constexpr float_t& GlobalNamespace::SaberTrail::__cordl_internal_get__sampleStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sampleStep;
}
constexpr float_t const& GlobalNamespace::SaberTrail::__cordl_internal_get__sampleStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sampleStep;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__sampleStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sampleStep = value;
}
constexpr int32_t& GlobalNamespace::SaberTrail::__cordl_internal_get__framesPassed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____framesPassed;
}
constexpr int32_t const& GlobalNamespace::SaberTrail::__cordl_internal_get__framesPassed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____framesPassed;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__framesPassed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____framesPassed = value;
}
constexpr float_t& GlobalNamespace::SaberTrail::__cordl_internal_get__lastZScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastZScale;
}
constexpr float_t const& GlobalNamespace::SaberTrail::__cordl_internal_get__lastZScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastZScale;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__lastZScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastZScale = value;
}
constexpr int32_t& GlobalNamespace::SaberTrail::__cordl_internal_get__framesToScaleCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____framesToScaleCheck;
}
constexpr int32_t const& GlobalNamespace::SaberTrail::__cordl_internal_get__framesToScaleCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____framesToScaleCheck;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__framesToScaleCheck(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____framesToScaleCheck = value;
}
constexpr bool& GlobalNamespace::SaberTrail::__cordl_internal_get__inited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inited;
}
constexpr bool const& GlobalNamespace::SaberTrail::__cordl_internal_get__inited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inited;
}
constexpr void GlobalNamespace::SaberTrail::__cordl_internal_set__inited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inited = value;
}
inline void GlobalNamespace::SaberTrail::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrail::Setup(::UnityEngine::Color color, ::GlobalNamespace::IBladeMovementData* movementData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "Setup", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::IBladeMovementData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, movementData);
}
inline void GlobalNamespace::SaberTrail::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrail::HandleDeterminismSet(bool isDeterministic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "HandleDeterminismSet", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDeterministic);
}
inline void GlobalNamespace::SaberTrail::ResetTrailData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "ResetTrailData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrail::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrail::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrail::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrail::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::SaberTrail::GetTrailWidth(::GlobalNamespace::BladeMovementDataElement lastAddedData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "GetTrailWidth", {}, { ::i2c::type_of<::GlobalNamespace::BladeMovementDataElement>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, lastAddedData);
}
inline void GlobalNamespace::SaberTrail::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { "OnDrawGizmosSelected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberTrail::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTrail*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberTrail* GlobalNamespace::SaberTrail::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberTrail*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberTrail::SaberTrail() {}
