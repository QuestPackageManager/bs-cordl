#pragma once
#include "UnityEngine/Timeline/zzzz__ActivationTrack_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationMixerPlayable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::__ActivationTrack__PostPlaybackState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::__ActivationTrack__PostPlaybackState() {}
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::Active{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::Inactive{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::Revert{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::LeaveAsIs{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.CanCompileClips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::ActivationTrack::*)()>(&::UnityEngine::Timeline::ActivationTrack::CanCompileClips)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c4ed14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.get_postPlaybackState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState (::UnityEngine::Timeline::ActivationTrack::*)()>(
    &::UnityEngine::Timeline::ActivationTrack::get_postPlaybackState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4ee20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                                                               "get_postPlaybackState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.set_postPlaybackState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState)>(
    &::UnityEngine::Timeline::ActivationTrack::set_postPlaybackState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c4ee28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), "set_postPlaybackState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.CreateTrackMixer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::ActivationTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::UnityEngine::Timeline::ActivationTrack::CreateTrackMixer)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2c4ee50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.UpdateTrackMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)()>(&::UnityEngine::Timeline::ActivationTrack::UpdateTrackMode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c4ee3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                                                               "UpdateTrackMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.GatherProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)(
    ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(&::UnityEngine::Timeline::ActivationTrack::GatherProperties)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2c4ef34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.OnCreateClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)(::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::ActivationTrack::OnCreateClip)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c4f1d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)()>(&::UnityEngine::Timeline::ActivationTrack::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c4f22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState& UnityEngine::Timeline::ActivationTrack::__get_m_PostPlaybackState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostPlaybackState;
}
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState const& UnityEngine::Timeline::ActivationTrack::__get_m_PostPlaybackState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostPlaybackState;
}
constexpr void UnityEngine::Timeline::ActivationTrack::__set_m_PostPlaybackState(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostPlaybackState = value;
}
constexpr ::UnityEngine::Timeline::ActivationMixerPlayable*& UnityEngine::Timeline::ActivationTrack::__get_m_ActivationMixer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivationMixer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::ActivationMixerPlayable*> const& UnityEngine::Timeline::ActivationTrack::__get_m_ActivationMixer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivationMixer;
}
constexpr void UnityEngine::Timeline::ActivationTrack::__set_m_ActivationMixer(::UnityEngine::Timeline::ActivationMixerPlayable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActivationMixer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Timeline::ActivationTrack::CanCompileClips() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                                                             "CanCompileClips", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState UnityEngine::Timeline::ActivationTrack::get_postPlaybackState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                                                             "get_postPlaybackState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ActivationTrack::set_postPlaybackState(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), "set_postPlaybackState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::ActivationTrack::CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), "CreateTrackMixer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go, inputCount);
}
inline void UnityEngine::Timeline::ActivationTrack::UpdateTrackMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                                                             "UpdateTrackMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ActivationTrack::GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), "GatherProperties", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IPropertyCollector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, director, driver);
}
inline void UnityEngine::Timeline::ActivationTrack::OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), "OnCreateClip", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clip);
}
inline ::UnityEngine::Timeline::ActivationTrack* UnityEngine::Timeline::ActivationTrack::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::ActivationTrack*>());
}
inline void UnityEngine::Timeline::ActivationTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::ActivationTrack::ActivationTrack() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
