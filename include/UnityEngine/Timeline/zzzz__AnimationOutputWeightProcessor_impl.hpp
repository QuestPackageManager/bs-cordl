#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\AnimationOutputWeightProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationMotionXToDeltaPlayable_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_impl.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationOutputWeightProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationOutputWeightProcessor_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_def.hpp"
// Ctor Parameters [CppParam { name: "mixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: Some("{}") }, CppParam { name: "parentMixer", ty:
// "::UnityEngine::Playables::Playable", modifiers: "", def_value: Some("{}") }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo::AnimationOutputWeightProcessor_WeightInfo(::UnityEngine::Playables::Playable mixer,
                                                                                                                        ::UnityEngine::Playables::Playable parentMixer, int32_t port) noexcept {
  this->mixer = mixer;
  this->parentMixer = parentMixer;
  this->port = port;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo::AnimationOutputWeightProcessor_WeightInfo() {}
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)(::UnityEngine::Animations::AnimationPlayableOutput)>(
    &::UnityEngine::Timeline::AnimationOutputWeightProcessor::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69acb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.FindMixers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)()>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x69acc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(), { "FindMixers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.FindMixers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)(
    ::UnityEngine::Playables::Playable, int32_t, ::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x69acd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(),
                            { "FindMixers", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)()>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::Evaluate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x69ad008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(), { "Evaluate", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Animations::AnimationPlayableOutput& UnityEngine::Timeline::AnimationOutputWeightProcessor::__cordl_internal_get_m_Output() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Output;
}
constexpr ::UnityEngine::Animations::AnimationPlayableOutput const& UnityEngine::Timeline::AnimationOutputWeightProcessor::__cordl_internal_get_m_Output() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Output;
}
constexpr void UnityEngine::Timeline::AnimationOutputWeightProcessor::__cordl_internal_set_m_Output(::UnityEngine::Animations::AnimationPlayableOutput value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Output = value;
}
constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable& UnityEngine::Timeline::AnimationOutputWeightProcessor::__cordl_internal_get_m_MotionXPlayable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionXPlayable;
}
constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable const& UnityEngine::Timeline::AnimationOutputWeightProcessor::__cordl_internal_get_m_MotionXPlayable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionXPlayable;
}
constexpr void UnityEngine::Timeline::AnimationOutputWeightProcessor::__cordl_internal_set_m_MotionXPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MotionXPlayable = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo>*&
UnityEngine::Timeline::AnimationOutputWeightProcessor::__cordl_internal_get_m_Mixers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mixers;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo>* const&
UnityEngine::Timeline::AnimationOutputWeightProcessor::__cordl_internal_get_m_Mixers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mixers;
}
constexpr void UnityEngine::Timeline::AnimationOutputWeightProcessor::__cordl_internal_set_m_Mixers(
    ::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Mixers = value;
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(), { "FindMixers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers(::UnityEngine::Playables::Playable parent, int32_t port, ::UnityEngine::Playables::Playable node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(),
                          { "FindMixers", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, port, node);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::Evaluate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(), { "Evaluate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::AnimationOutputWeightProcessor* UnityEngine::Timeline::AnimationOutputWeightProcessor::New_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(output));
}
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
constexpr UnityEngine::Timeline::AnimationOutputWeightProcessor::operator ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
constexpr ::UnityEngine::Timeline::ITimelineEvaluateCallback* UnityEngine::Timeline::AnimationOutputWeightProcessor::i___UnityEngine__Timeline__ITimelineEvaluateCallback() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationOutputWeightProcessor::AnimationOutputWeightProcessor() {}
