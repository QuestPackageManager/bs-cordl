#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerIntroAnimationController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerIntroAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingManager_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::OnValidate)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x3bd0488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                               "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.SetBeforeIntroValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::SetBeforeIntroValue)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x3bce904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                               "SetBeforeIntroValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.PlayIntroAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)(float_t, ::System::Action*)>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::PlayIntroAnimation)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3bcc0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(), "PlayIntroAnimation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.GetFullIntroAnimationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::GetFullIntroAnimationTime)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x3bcbcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                               "GetFullIntroAnimationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.BindTimeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::BindTimeline)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x3bd0a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                               "BindTimeline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.BindRingsAndSetTiming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)(
    int32_t, ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>, ::UnityEngine::GameObject*)>(&::GlobalNamespace::MultiplayerIntroAnimationController::BindRingsAndSetTiming)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x3bd17fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(), "BindRingsAndSetTiming", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.TransitionToAfterIntroAnimationState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::TransitionToAfterIntroAnimationState)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3bcc1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                 "TransitionToAfterIntroAnimationState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.CalculatePlayerIndexSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Queue_1<int32_t>* (
    ::GlobalNamespace::MultiplayerIntroAnimationController::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::CalculatePlayerIndexSequence)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x3bd1178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(), "CalculatePlayerIndexSequence",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.Completed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::Completed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3bd1ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                               "Completed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3bd2034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__introPlayableDirector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__introPlayableDirector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__introPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____introPlayableDirector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__playerTimelineTrackNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelineTrackNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__playerTimelineTrackNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelineTrackNames;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__playerTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTimelineTrackNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__ringTimelineTrackNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringTimelineTrackNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__ringTimelineTrackNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringTimelineTrackNames;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__ringTimelineTrackNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ringTimelineTrackNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__playerTimelinePropertyNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelinePropertyNames;
}
constexpr ::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> const&
GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__playerTimelinePropertyNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelinePropertyNames;
}
constexpr void
GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__playerTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName, ::Array<::UnityEngine::PropertyName>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTimelinePropertyNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerTrackName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTrackName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerTrackName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTrackName;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__localPlayerTrackName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localPlayerTrackName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerRingTrackName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerRingTrackName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerRingTrackName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerRingTrackName;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__localPlayerRingTrackName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localPlayerRingTrackName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::PropertyName& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerTimelinePropertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTimelinePropertyName;
}
constexpr ::UnityEngine::PropertyName const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerTimelinePropertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTimelinePropertyName;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__localPlayerTimelinePropertyName(::UnityEngine::PropertyName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerTimelinePropertyName = value;
}
constexpr float_t& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__firstConnectedPlayerStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstConnectedPlayerStart;
}
constexpr float_t const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__firstConnectedPlayerStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstConnectedPlayerStart;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__firstConnectedPlayerStart(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstConnectedPlayerStart = value;
}
constexpr float_t& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__spawnDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__spawnDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnDuration;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__spawnDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnDuration = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__endMarkerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endMarkerName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__endMarkerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endMarkerName;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__endMarkerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____endMarkerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__scoreRingManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__scoreRingManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingManager;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__scoreRingManager(::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreRingManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__multiplayerPlayersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__multiplayerPlayersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerPlayersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layoutProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__onCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCompleted;
}
constexpr ::System::Action* const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__onCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCompleted;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__onCompleted(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__introDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introDuration;
}
constexpr int64_t const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__introDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introDuration;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__introDuration(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____introDuration = value;
}
constexpr bool& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__bindingFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingFinished;
}
constexpr bool const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__bindingFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingFinished;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__bindingFinished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindingFinished = value;
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::setStaticF__random(::System::Random* value) {
  ::cordl_internals::setStaticField<::System::Random*, "_random", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get>(
      std::forward<::System::Random*>(value));
}
inline ::System::Random* GlobalNamespace::MultiplayerIntroAnimationController::getStaticF__random() {
  return ::cordl_internals::getStaticField<::System::Random*, "_random", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get>();
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                             "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::SetBeforeIntroValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                             "SetBeforeIntroValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::PlayIntroAnimation(float_t maxDesiredIntroAnimationDuration, ::System::Action* onCompleted) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(), "PlayIntroAnimation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxDesiredIntroAnimationDuration, onCompleted);
}
inline int64_t GlobalNamespace::MultiplayerIntroAnimationController::GetFullIntroAnimationTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                             "GetFullIntroAnimationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::BindTimeline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                             "BindTimeline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::BindRingsAndSetTiming(int32_t connectedPlayersCount,
                                                                                        ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> connectedRings,
                                                                                        ::UnityEngine::GameObject* localRing) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(), "BindRingsAndSetTiming", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayersCount, connectedRings, localRing);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::TransitionToAfterIntroAnimationState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                               "TransitionToAfterIntroAnimationState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Queue_1<int32_t>*
GlobalNamespace::MultiplayerIntroAnimationController::CalculatePlayerIndexSequence(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* allActivePlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(), "CalculatePlayerIndexSequence", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<int32_t>*, false>(this, ___internal_method, allActivePlayer);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::Completed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                             "Completed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerIntroAnimationController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerIntroAnimationController* GlobalNamespace::MultiplayerIntroAnimationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerIntroAnimationController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerIntroAnimationController::MultiplayerIntroAnimationController() {}
