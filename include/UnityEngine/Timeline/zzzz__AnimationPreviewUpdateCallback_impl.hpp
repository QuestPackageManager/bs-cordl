#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AnimationPreviewUpdateCallback.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationPreviewUpdateCallback_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationWindowPreview_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPreviewUpdateCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)(::UnityEngine::Animations::AnimationPlayableOutput)>(
    &::UnityEngine::Timeline::AnimationPreviewUpdateCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x69a8a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPreviewUpdateCallback.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)()>(&::UnityEngine::Timeline::AnimationPreviewUpdateCallback::Evaluate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x69a8b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>(), { "Evaluate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPreviewUpdateCallback.FetchPreviewComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)()>(
    &::UnityEngine::Timeline::AnimationPreviewUpdateCallback::FetchPreviewComponents)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x69a8cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>(), { "FetchPreviewComponents", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Animations::AnimationPlayableOutput& UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_get_m_Output() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Output;
}
constexpr ::UnityEngine::Animations::AnimationPlayableOutput const& UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_get_m_Output() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Output;
}
constexpr void UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_set_m_Output(::UnityEngine::Animations::AnimationPlayableOutput value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Output = value;
}
constexpr ::UnityEngine::Playables::PlayableGraph& UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_get_m_Graph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Graph;
}
constexpr ::UnityEngine::Playables::PlayableGraph const& UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_get_m_Graph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Graph;
}
constexpr void UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_set_m_Graph(::UnityEngine::Playables::PlayableGraph value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Graph = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>*&
UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_get_m_PreviewComponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviewComponents;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>* const&
UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_get_m_PreviewComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviewComponents;
}
constexpr void
UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_set_m_PreviewComponents(::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviewComponents = value;
}
inline void UnityEngine::Timeline::AnimationPreviewUpdateCallback::_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationPlayableOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void UnityEngine::Timeline::AnimationPreviewUpdateCallback::Evaluate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>(), { "Evaluate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPreviewUpdateCallback::FetchPreviewComponents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>(), { "FetchPreviewComponents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::AnimationPreviewUpdateCallback* UnityEngine::Timeline::AnimationPreviewUpdateCallback::New_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>(output));
}
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
constexpr UnityEngine::Timeline::AnimationPreviewUpdateCallback::operator ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
constexpr ::UnityEngine::Timeline::ITimelineEvaluateCallback* UnityEngine::Timeline::AnimationPreviewUpdateCallback::i___UnityEngine__Timeline__ITimelineEvaluateCallback() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationPreviewUpdateCallback::AnimationPreviewUpdateCallback() {}
