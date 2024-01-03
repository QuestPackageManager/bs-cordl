#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::__ActivationControlPlayable__PostPlaybackState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::__ActivationControlPlayable__PostPlaybackState() {}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::Active{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::Inactive{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::Revert{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState::__ActivationControlPlayable__InitialState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState::__ActivationControlPlayable__InitialState() {}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState UnityEngine::Timeline::__ActivationControlPlayable__InitialState::Unset{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState UnityEngine::Timeline::__ActivationControlPlayable__InitialState::Active{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState UnityEngine::Timeline::__ActivationControlPlayable__InitialState::Inactive{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> (*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState)>(
    &::UnityEngine::Timeline::ActivationControlPlayable::Create)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2c65224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), "Create", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnBehaviourPlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c6a31c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnBehaviourPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPause)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c6a3a4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.ProcessFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::UnityEngine::Timeline::ActivationControlPlayable::ProcessFrame)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c6a44c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnGraphStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::ActivationControlPlayable::OnGraphStart)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c6a4d4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::ActivationControlPlayable::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c6a568;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)()>(
    &::UnityEngine::Timeline::ActivationControlPlayable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c6a634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& UnityEngine::Timeline::ActivationControlPlayable::__get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& UnityEngine::Timeline::ActivationControlPlayable::__get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__set_gameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState& UnityEngine::Timeline::ActivationControlPlayable::__get_postPlayback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postPlayback;
}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState const& UnityEngine::Timeline::ActivationControlPlayable::__get_postPlayback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postPlayback;
}
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__set_postPlayback(::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postPlayback = value;
}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState& UnityEngine::Timeline::ActivationControlPlayable::__get_m_InitialState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialState;
}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState const& UnityEngine::Timeline::ActivationControlPlayable::__get_m_InitialState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialState;
}
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__set_m_InitialState(::UnityEngine::Timeline::__ActivationControlPlayable__InitialState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitialState = value;
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*>
UnityEngine::Timeline::ActivationControlPlayable::Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject,
                                                         ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState postPlaybackState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), "Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*>, false>(nullptr, ___internal_method, graph, gameObject,
                                                                                                                                                     postPlaybackState);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* userData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, userData);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnGraphStart(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline ::UnityEngine::Timeline::ActivationControlPlayable* UnityEngine::Timeline::ActivationControlPlayable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::ActivationControlPlayable*>());
}
inline void UnityEngine::Timeline::ActivationControlPlayable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::ActivationControlPlayable::ActivationControlPlayable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
