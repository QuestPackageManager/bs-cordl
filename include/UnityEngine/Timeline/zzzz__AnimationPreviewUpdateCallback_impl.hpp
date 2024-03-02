#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)(
    ::UnityEngine::Animations::AnimationPlayableOutput)>(&::UnityEngine::Timeline::AnimationPreviewUpdateCallback::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2d38558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationPlayableOutput>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPreviewUpdateCallback.Evaluate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)()>(
    &::UnityEngine::Timeline::AnimationPreviewUpdateCallback::Evaluate)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2d38620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>::get(),
                                                                               "Evaluate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPreviewUpdateCallback.FetchPreviewComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)()>(
    &::UnityEngine::Timeline::AnimationPreviewUpdateCallback::FetchPreviewComponents)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2d387f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>::get(),
                                                                               "FetchPreviewComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
constexpr UnityEngine::Timeline::AnimationPreviewUpdateCallback::operator ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
constexpr ::UnityEngine::Timeline::ITimelineEvaluateCallback* UnityEngine::Timeline::AnimationPreviewUpdateCallback::i___UnityEngine__Timeline__ITimelineEvaluateCallback() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(static_cast<void*>(this));
}
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>*> const&
UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_get_m_PreviewComponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviewComponents;
}
constexpr void
UnityEngine::Timeline::AnimationPreviewUpdateCallback::__cordl_internal_set_m_PreviewComponents(::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviewComponents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Timeline::AnimationPreviewUpdateCallback* UnityEngine::Timeline::AnimationPreviewUpdateCallback::New_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>(output));
}
inline void UnityEngine::Timeline::AnimationPreviewUpdateCallback::_ctor(::UnityEngine::Animations::AnimationPlayableOutput output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationPlayableOutput>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void UnityEngine::Timeline::AnimationPreviewUpdateCallback::Evaluate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>::get(),
                                                                             "Evaluate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPreviewUpdateCallback::FetchPreviewComponents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPreviewUpdateCallback*>::get(),
                                                                             "FetchPreviewComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationPreviewUpdateCallback::AnimationPreviewUpdateCallback() {}
