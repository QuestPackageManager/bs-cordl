#pragma once
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior::__GhostEffectBehaviour__EndBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior::__GhostEffectBehaviour__EndBehavior() {}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior GlobalNamespace::__GhostEffectBehaviour__EndBehavior::DisableAll{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior GlobalNamespace::__GhostEffectBehaviour__EndBehavior::DisableCopies{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior GlobalNamespace::__GhostEffectBehaviour__EndBehavior::Nothing{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType::__GhostEffectBehaviour__GhostEffectType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType::__GhostEffectBehaviour__GhostEffectType() {}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType GlobalNamespace::__GhostEffectBehaviour__GhostEffectType::TextMeshPro{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType GlobalNamespace::__GhostEffectBehaviour__GhostEffectType::Canvas{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour.OnBehaviourPlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::GlobalNamespace::GhostEffectBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2342348;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::GhostEffectBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x23425ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour.EnableObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)(bool)>(&::GlobalNamespace::GhostEffectBehaviour::EnableObjects)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x23424d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(), "EnableObjects",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)()>(&::GlobalNamespace::GhostEffectBehaviour::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2342a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_alphaCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alphaCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_alphaCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alphaCurve;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set_alphaCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___alphaCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_sizeCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_sizeCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeCurve;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set_sizeCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sizeCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_distanceCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_distanceCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceCurve;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set_distanceCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___distanceCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____endTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__endBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endBehavior;
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__endBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endBehavior;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__endBehavior(::GlobalNamespace::__GhostEffectBehaviour__EndBehavior value) {
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
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*>& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_textMeshPros() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textMeshPros;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get_textMeshPros() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textMeshPros;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set_textMeshPros(::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textMeshPros)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*>& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__canvasGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroups;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__canvasGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroups;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__canvasGroups(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__ghostEffectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostEffectType;
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const& GlobalNamespace::GhostEffectBehaviour::__cordl_internal_get__ghostEffectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostEffectType;
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__cordl_internal_set__ghostEffectType(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType value) {
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ghostEffectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline void GlobalNamespace::GhostEffectBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::GhostEffectBehaviour::EnableObjects(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(), "EnableObjects",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline ::GlobalNamespace::GhostEffectBehaviour* GlobalNamespace::GhostEffectBehaviour::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GhostEffectBehaviour*>());
}
inline void GlobalNamespace::GhostEffectBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostEffectBehaviour::GhostEffectBehaviour() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
