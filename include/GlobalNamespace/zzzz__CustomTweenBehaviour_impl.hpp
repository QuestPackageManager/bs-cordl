#pragma once
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CustomTweenBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__CustomTweenBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CustomTweenBehaviour____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CustomTweenBehaviour____c::*)()>(&::GlobalNamespace::__CustomTweenBehaviour____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomTweenBehaviour____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CustomTweenBehaviour____c._OnBehaviourPlay_b__21_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__CustomTweenBehaviour____c::*)(int32_t)>(
    &::GlobalNamespace::__CustomTweenBehaviour____c::_OnBehaviourPlay_b__21_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomTweenBehaviour____c*>::get(), "<OnBehaviourPlay>b__21_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__CustomTweenBehaviour____c::setStaticF___9(::GlobalNamespace::__CustomTweenBehaviour____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__CustomTweenBehaviour____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomTweenBehaviour____c*>::get>(
      std::forward<::GlobalNamespace::__CustomTweenBehaviour____c*>(value));
}
inline ::GlobalNamespace::__CustomTweenBehaviour____c* GlobalNamespace::__CustomTweenBehaviour____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__CustomTweenBehaviour____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomTweenBehaviour____c*>::get>();
}
inline void GlobalNamespace::__CustomTweenBehaviour____c::setStaticF___9__21_0(::System::Func_2<int32_t, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, float_t>*, "<>9__21_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomTweenBehaviour____c*>::get>(
      std::forward<::System::Func_2<int32_t, float_t>*>(value));
}
inline ::System::Func_2<int32_t, float_t>* GlobalNamespace::__CustomTweenBehaviour____c::getStaticF___9__21_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, float_t>*, "<>9__21_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomTweenBehaviour____c*>::get>();
}
inline ::GlobalNamespace::__CustomTweenBehaviour____c* GlobalNamespace::__CustomTweenBehaviour____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__CustomTweenBehaviour____c*>());
}
inline void GlobalNamespace::__CustomTweenBehaviour____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomTweenBehaviour____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__CustomTweenBehaviour____c::_OnBehaviourPlay_b__21_0(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomTweenBehaviour____c*>::get(), "<OnBehaviourPlay>b__21_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, i);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CustomTweenBehaviour____c::__CustomTweenBehaviour____c() {}
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour.OnGraphStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::GlobalNamespace::CustomTweenBehaviour::OnGraphStart)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x21c3b78;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::CustomTweenBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x21c3cb4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::GlobalNamespace::CustomTweenBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x21c4094;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour.OnBehaviourPlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::GlobalNamespace::CustomTweenBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x21c4198;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomTweenBehaviour._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomTweenBehaviour::*)()>(&::GlobalNamespace::CustomTweenBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21c4384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& GlobalNamespace::CustomTweenBehaviour::__get__transforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& GlobalNamespace::CustomTweenBehaviour::__get__transforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__transforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__get_startLocationCurrentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLocationCurrentPosition;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__get_startLocationCurrentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLocationCurrentPosition;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set_startLocationCurrentPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startLocationCurrentPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomTweenBehaviour::__get_startLocalPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomTweenBehaviour::__get_startLocalPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLocalPos;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set_startLocalPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startLocalPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomTweenBehaviour::__get_endLocalPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomTweenBehaviour::__get_endLocalPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endLocalPos;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set_endLocalPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endLocalPos = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::CustomTweenBehaviour::__get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::CustomTweenBehaviour::__get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__get_endXRelativeToSelfRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endXRelativeToSelfRotation;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__get_endXRelativeToSelfRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endXRelativeToSelfRotation;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set_endXRelativeToSelfRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endXRelativeToSelfRotation = value;
}
constexpr float_t& GlobalNamespace::CustomTweenBehaviour::__get_elementDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDelay;
}
constexpr float_t const& GlobalNamespace::CustomTweenBehaviour::__get_elementDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDelay;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set_elementDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementDelay = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__get__lockX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockX;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__get__lockX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockX;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__lockX(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lockX = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__get__lockY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockY;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__get__lockY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockY;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__lockY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lockY = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__get__lockZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockZ;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__get__lockZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockZ;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__lockZ(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lockZ = value;
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__get__randomizeOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeOrder;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__get__randomizeOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeOrder;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__randomizeOrder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizeOrder = value;
}
constexpr float_t& GlobalNamespace::CustomTweenBehaviour::__get__randomizedMinDurationMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedMinDurationMultiplier;
}
constexpr float_t const& GlobalNamespace::CustomTweenBehaviour::__get__randomizedMinDurationMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedMinDurationMultiplier;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__randomizedMinDurationMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizedMinDurationMultiplier = value;
}
constexpr float_t& GlobalNamespace::CustomTweenBehaviour::__get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& GlobalNamespace::CustomTweenBehaviour::__get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr float_t& GlobalNamespace::CustomTweenBehaviour::__get__perItemDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perItemDuration;
}
constexpr float_t const& GlobalNamespace::CustomTweenBehaviour::__get__perItemDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perItemDuration;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__perItemDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____perItemDuration = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::CustomTweenBehaviour::__get__originalLocalPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalLocalPos;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::CustomTweenBehaviour::__get__originalLocalPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalLocalPos;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__originalLocalPos(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalLocalPos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CustomTweenBehaviour::__get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::CustomTweenBehaviour::__get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::CustomTweenBehaviour::__get__randomizedOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedOrder;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::CustomTweenBehaviour::__get__randomizedOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedOrder;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__randomizedOrder(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomizedOrder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::CustomTweenBehaviour::__get__randomizedDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedDuration;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::CustomTweenBehaviour::__get__randomizedDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedDuration;
}
constexpr void GlobalNamespace::CustomTweenBehaviour::__set__randomizedDuration(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomizedDuration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CustomTweenBehaviour::OnGraphStart(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(), "OnGraphStart", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline void GlobalNamespace::CustomTweenBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(), "ProcessFrame", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::CustomTweenBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(), "OnPlayableDestroy", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline void GlobalNamespace::CustomTweenBehaviour::OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(), "OnBehaviourPlay", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline ::GlobalNamespace::CustomTweenBehaviour* GlobalNamespace::CustomTweenBehaviour::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomTweenBehaviour*>());
}
inline void GlobalNamespace::CustomTweenBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomTweenBehaviour*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomTweenBehaviour::CustomTweenBehaviour() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
