#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostEffectBehaviour.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "TMPro/zzzz__TextMeshPro_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__CanvasGroup_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GhostEffectBehaviour_EndBehavior::GhostEffectBehaviour_EndBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostEffectBehaviour_EndBehavior::GhostEffectBehaviour_EndBehavior() {}
constexpr ::GlobalNamespace::GhostEffectBehaviour_EndBehavior GlobalNamespace::GhostEffectBehaviour_EndBehavior::DisableAll{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GhostEffectBehaviour_EndBehavior GlobalNamespace::GhostEffectBehaviour_EndBehavior::DisableCopies{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GhostEffectBehaviour_EndBehavior GlobalNamespace::GhostEffectBehaviour_EndBehavior::Nothing{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType::GhostEffectBehaviour_GhostEffectType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType::GhostEffectBehaviour_GhostEffectType() {}
constexpr ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType GlobalNamespace::GhostEffectBehaviour_GhostEffectType::TextMeshPro{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType GlobalNamespace::GhostEffectBehaviour_GhostEffectType::Canvas{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour.OnBehaviourPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::GlobalNamespace::GhostEffectBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x590690c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::GhostEffectBehaviour*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(
    &::GlobalNamespace::GhostEffectBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5906bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::GhostEffectBehaviour*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour.EnableObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)(bool)>(&::GlobalNamespace::GhostEffectBehaviour::EnableObjects)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5906a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectBehaviour*>(), { "EnableObjects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)()>(&::GlobalNamespace::GhostEffectBehaviour::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5907028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_alphaCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alphaCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_alphaCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alphaCurve;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set_alphaCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alphaCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_sizeCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_sizeCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeCurve;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set_sizeCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sizeCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_distanceCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_distanceCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceCurve;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set_distanceCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distanceCurve = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__distanceMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distanceMultiplier;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__distanceMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distanceMultiplier;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__distanceMultiplier(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____distanceMultiplier = value;
}
constexpr bool& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__useStartTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useStartTransform;
}
constexpr bool const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__useStartTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useStartTransform;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__useStartTransform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useStartTransform = value;
}
constexpr bool& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__useEndTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEndTransform;
}
constexpr bool const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__useEndTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEndTransform;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__useEndTransform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useEndTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__startLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__startLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startLocalPosition;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__startLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startLocalPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__startTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__startTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTransform;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__startTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__endLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__endLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endLocalPosition;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__endLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endLocalPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__endTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__endTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endTransform;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__endTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endTransform = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__positionEasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionEasing;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__positionEasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionEasing;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__positionEasing(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionEasing = value;
}
constexpr ::GlobalNamespace::GhostEffectBehaviour_EndBehavior& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__endBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endBehavior;
}
constexpr ::GlobalNamespace::GhostEffectBehaviour_EndBehavior const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__endBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endBehavior;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__endBehavior(::GlobalNamespace::GhostEffectBehaviour_EndBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endBehavior = value;
}
constexpr float_t& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_progress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progress;
}
constexpr float_t const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_progress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progress;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set_progress(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___progress = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>>& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_textMeshPros() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textMeshPros;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>> const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_textMeshPros() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textMeshPros;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set_textMeshPros(::ArrayW<::UnityW<::TMPro::TextMeshPro>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textMeshPros = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>>& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__canvasGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroups;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>> const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__canvasGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroups;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__canvasGroups(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canvasGroups = value;
}
constexpr ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__ghostEffectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostEffectType;
}
constexpr ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__ghostEffectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostEffectType;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__ghostEffectType(::GlobalNamespace::GhostEffectBehaviour_GhostEffectType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ghostEffectType = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__ghostEffectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostEffectTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__ghostEffectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostEffectTransform;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__ghostEffectTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ghostEffectTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__direction(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____direction = value;
}
constexpr bool& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__finished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finished;
}
constexpr bool const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__finished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finished;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__finished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finished = value;
}
inline void GlobalNamespace::GhostEffectBehaviour::OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GhostEffectBehaviour*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void GlobalNamespace::GhostEffectBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GhostEffectBehaviour*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::GhostEffectBehaviour::EnableObjects(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectBehaviour*>(), { "EnableObjects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::GhostEffectBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostEffectBehaviour* GlobalNamespace::GhostEffectBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostEffectBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostEffectBehaviour::GhostEffectBehaviour() {}
