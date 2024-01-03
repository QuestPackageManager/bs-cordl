#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationMotionXToDeltaPlayable_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_impl.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationOutputWeightProcessor_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationOutputWeightProcessor_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "mixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: Some("{}") }, CppParam { name: "parentMixer", ty:
// "::UnityEngine::Playables::Playable", modifiers: "", def_value: Some("{}") }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__AnimationOutputWeightProcessor__WeightInfo(::UnityEngine::Playables::Playable mixer,
                                                                                                                              ::UnityEngine::Playables::Playable parentMixer, int32_t port) noexcept {
  this->mixer = mixer;
  this->parentMixer = parentMixer;
  this->port = port;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__AnimationOutputWeightProcessor__WeightInfo() {}
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)(
    ::UnityEngine::Animations::AnimationPlayableOutput)>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c4f358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationPlayableOutput>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.FindMixers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)()>(
    &::UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c4f418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                                                                               "FindMixers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.FindMixers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)(
    ::UnityEngine::Playables::Playable, int32_t, ::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2c4f500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(), "FindMixers", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.Evaluate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)()>(
    &::UnityEngine::Timeline::AnimationOutputWeightProcessor::Evaluate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2c4f7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                                                                               "Evaluate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
constexpr UnityEngine::Timeline::AnimationOutputWeightProcessor::operator ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Animations::AnimationPlayableOutput& UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_Output() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Output;
}
constexpr ::UnityEngine::Animations::AnimationPlayableOutput const& UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_Output() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Output;
}
constexpr void UnityEngine::Timeline::AnimationOutputWeightProcessor::__set_m_Output(::UnityEngine::Animations::AnimationPlayableOutput value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Output = value;
}
constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable& UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_MotionXPlayable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionXPlayable;
}
constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable const& UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_MotionXPlayable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionXPlayable;
}
constexpr void UnityEngine::Timeline::AnimationOutputWeightProcessor::__set_m_MotionXPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MotionXPlayable = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*& UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_Mixers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mixers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*> const&
UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_Mixers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mixers;
}
constexpr void
UnityEngine::Timeline::AnimationOutputWeightProcessor::__set_m_Mixers(::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Mixers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Timeline::AnimationOutputWeightProcessor* UnityEngine::Timeline::AnimationOutputWeightProcessor::New_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(output));
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationPlayableOutput>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                                                                             "FindMixers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers(::UnityEngine::Playables::Playable parent, int32_t port, ::UnityEngine::Playables::Playable node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(), "FindMixers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, port, node);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::Evaluate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                                                                             "Evaluate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationOutputWeightProcessor::AnimationOutputWeightProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
