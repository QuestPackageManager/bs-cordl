#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomTweenBehaviour.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CustomTweenBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__CustomTweenBehaviour_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour___c::*)()>(&::GlobalNamespace::CustomTweenBehaviour___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5906774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour___c._OnBehaviourPlay_b__21_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CustomTweenBehaviour___c::*)(int32_t)>(&::GlobalNamespace::CustomTweenBehaviour___c::_OnBehaviourPlay_b__21_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5906778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour___c*>(), { "<OnBehaviourPlay>b__21_0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomTweenBehaviour___c::setStaticF___9(::GlobalNamespace::CustomTweenBehaviour___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::CustomTweenBehaviour___c*, "<>9", ::GlobalNamespace::CustomTweenBehaviour___c*>(
      std::forward<::GlobalNamespace::CustomTweenBehaviour___c*>(value));
}
inline ::GlobalNamespace::CustomTweenBehaviour___c* GlobalNamespace::CustomTweenBehaviour___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::CustomTweenBehaviour___c*, "<>9", ::GlobalNamespace::CustomTweenBehaviour___c*>();
}
inline void GlobalNamespace::CustomTweenBehaviour___c::setStaticF___9__21_0(::System::Func_2<int32_t, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, float_t>*, "<>9__21_0", ::GlobalNamespace::CustomTweenBehaviour___c*>(std::forward<::System::Func_2<int32_t, float_t>*>(value));
}
inline ::System::Func_2<int32_t, float_t>* GlobalNamespace::CustomTweenBehaviour___c::getStaticF___9__21_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, float_t>*, "<>9__21_0", ::GlobalNamespace::CustomTweenBehaviour___c*>();
}
inline void GlobalNamespace::CustomTweenBehaviour___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomTweenBehaviour___c::_OnBehaviourPlay_b__21_0(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour___c*>(), { "<OnBehaviourPlay>b__21_0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, i);
}
inline ::GlobalNamespace::CustomTweenBehaviour___c* GlobalNamespace::CustomTweenBehaviour___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomTweenBehaviour___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomTweenBehaviour___c::CustomTweenBehaviour___c() {}
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour.OnGraphStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour::*)(::UnityEngine::Playables::Playable)>(&::GlobalNamespace::CustomTweenBehaviour::OnGraphStart)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5905ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(
    &::GlobalNamespace::CustomTweenBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5906008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::GlobalNamespace::CustomTweenBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x59063e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour.OnBehaviourPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::GlobalNamespace::CustomTweenBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x59064f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour::*)()>(&::GlobalNamespace::CustomTweenBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x590670c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__transforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__transforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transforms = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_startLocationCurrentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLocationCurrentPosition;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_startLocationCurrentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLocationCurrentPosition;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set_startLocationCurrentPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startLocationCurrentPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_startLocalPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_startLocalPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLocalPos;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set_startLocalPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startLocalPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_endLocalPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_endLocalPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endLocalPos;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set_endLocalPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endLocalPos = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_endXRelativeToSelfRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endXRelativeToSelfRotation;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_endXRelativeToSelfRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endXRelativeToSelfRotation;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set_endXRelativeToSelfRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endXRelativeToSelfRotation = value;
}
constexpr float_t& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_elementDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDelay;
}
constexpr float_t const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get_elementDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDelay;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set_elementDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementDelay = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__lockX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockX;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__lockX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockX;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__lockX(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lockX = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__lockY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockY;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__lockY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockY;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__lockY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lockY = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__lockZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockZ;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__lockZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockZ;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__lockZ(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lockZ = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__randomizeOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeOrder;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__randomizeOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeOrder;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__randomizeOrder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizeOrder = value;
}
constexpr float_t& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__randomizedMinDurationMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedMinDurationMultiplier;
}
constexpr float_t const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__randomizedMinDurationMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedMinDurationMultiplier;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__randomizedMinDurationMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizedMinDurationMultiplier = value;
}
constexpr float_t& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr float_t& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__perItemDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perItemDuration;
}
constexpr float_t const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__perItemDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perItemDuration;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__perItemDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____perItemDuration = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__originalLocalPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalLocalPos;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__originalLocalPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalLocalPos;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__originalLocalPos(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalLocalPos = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__randomizedOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedOrder;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__randomizedOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedOrder;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__randomizedOrder(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizedOrder = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__randomizedDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedDuration;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::CustomTweenBehaviour::__cordl_internal_get__randomizedDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedDuration;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__cordl_internal_set__randomizedDuration(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizedDuration = value;
}
inline void GlobalNamespace::CustomTweenBehaviour::OnGraphStart(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void GlobalNamespace::CustomTweenBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::CustomTweenBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void GlobalNamespace::CustomTweenBehaviour::OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void GlobalNamespace::CustomTweenBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomTweenBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomTweenBehaviour* GlobalNamespace::CustomTweenBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomTweenBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomTweenBehaviour::CustomTweenBehaviour() {}
