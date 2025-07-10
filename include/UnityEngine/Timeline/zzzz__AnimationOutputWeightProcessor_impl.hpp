#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AnimationOutputWeightProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationMotionXToDeltaPlayable_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_impl.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationOutputWeightProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationOutputWeightProcessor_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)(
    ::UnityEngine::Animations::AnimationPlayableOutput)>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x480c84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationPlayableOutput>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.FindMixers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)()>(
    &::UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x480c90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                                                                               "FindMixers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.FindMixers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)(
    ::UnityEngine::Playables::Playable, int32_t, ::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x480c9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(), "FindMixers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.Evaluate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)()>(
    &::UnityEngine::Timeline::AnimationOutputWeightProcessor::Evaluate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x480cce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                                                                               "Evaluate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Mixers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationPlayableOutput>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                                                                             "FindMixers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers(::UnityEngine::Playables::Playable parent, int32_t port, ::UnityEngine::Playables::Playable node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(), "FindMixers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, port, node);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::Evaluate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                                                                             "Evaluate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::AnimationOutputWeightProcessor* UnityEngine::Timeline::AnimationOutputWeightProcessor::New_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(output));
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
