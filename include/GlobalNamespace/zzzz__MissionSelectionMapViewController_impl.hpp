#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionSelectionMapViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionSelectionMapViewController_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__MissionMapAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeSelectionManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeVisualController_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__MissionSelectionMapViewController_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c2b544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0._SongPlayerCrossfadeToLevelAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::_SongPlayerCrossfadeToLevelAsync_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3c2b54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*>::get(),
                                                 "<SongPlayerCrossfadeToLevelAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionSelectionMapViewController>& GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MissionSelectionMapViewController> const& GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionSelectionMapViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::__cordl_internal_get_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::__cordl_internal_get_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::__cordl_internal_set_level(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___level)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::_SongPlayerCrossfadeToLevelAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*>::get(),
                                               "<SongPlayerCrossfadeToLevelAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0* GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::MissionSelectionMapViewController___c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x3c2b574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c2b88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::MissionSelectionMapViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "level", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_musicVolume_5__2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::MissionSelectionMapViewController> __4__this,
    ::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0* __8__1, float_t _musicVolume_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->level = level;
  this->__8__1 = __8__1;
  this->_musicVolume_5__2 = _musicVolume_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.add_didSelectMissionLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c2aff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "add_didSelectMissionLevelEvent",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.remove_didSelectMissionLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c2b0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                 "remove_didSelectMissionLevelEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.get_animatedUpdateIsRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MissionSelectionMapViewController::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3c2b158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                               "get_animatedUpdateIsRequired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MissionSelectionMapViewController::DidActivate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3c2b174;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(bool, bool)>(
    &::GlobalNamespace::MissionSelectionMapViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3c2b2b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.HandleMissionNodeSelectionManagerDidSelectMissionNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(::GlobalNamespace::MissionNodeVisualController*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::HandleMissionNodeSelectionManagerDidSelectMissionNode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3c2b3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                 "HandleMissionNodeSelectionManagerDidSelectMissionNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNodeVisualController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.SongPlayerCrossfadeToLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::SongPlayerCrossfadeToLevelAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3c2b464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "SongPlayerCrossfadeToLevelAsync",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.ShowMissionClearedAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(::System::Action*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c2b500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "ShowMissionClearedAnimation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.DeselectSelectedNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3c2b524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                               "DeselectSelectedNode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c2b53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ScrollView>& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__mapScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapScrollView;
}
constexpr ::UnityW<::HMUI::ScrollView> const& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__mapScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapScrollView;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_set__mapScrollView(::UnityW<::HMUI::ScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mapScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeSelectionManager>& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__missionNodeSelectionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodeSelectionManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeSelectionManager> const& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__missionNodeSelectionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodeSelectionManager;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_set__missionNodeSelectionManager(::UnityW<::GlobalNamespace::MissionNodeSelectionManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNodeSelectionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__missionMapAnimationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionMapAnimationController;
}
constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__missionMapAnimationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionMapAnimationController;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_set__missionMapAnimationController(::UnityW<::GlobalNamespace::MissionMapAnimationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionMapAnimationController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPreviewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__perceivedLoudnessPerLevelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevelModel;
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel* const& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__perceivedLoudnessPerLevelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevelModel;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____perceivedLoudnessPerLevelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__audioClipAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipAsyncLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*&
GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get_didSelectMissionLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectMissionLevelEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>* const&
GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get_didSelectMissionLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectMissionLevelEvent;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_set_didSelectMissionLevelEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectMissionLevelEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissionNode>& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__selectedMissionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedMissionNode;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode> const& GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_get__selectedMissionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedMissionNode;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__cordl_internal_set__selectedMissionNode(::UnityW<::GlobalNamespace::MissionNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedMissionNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "add_didSelectMissionLevelEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                               "remove_didSelectMissionLevelEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                             "get_animatedUpdateIsRequired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionSelectionMapViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MissionSelectionMapViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::MissionSelectionMapViewController::HandleMissionNodeSelectionManagerDidSelectMissionNode(::GlobalNamespace::MissionNodeVisualController* missionNodeVisualController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "HandleMissionNodeSelectionManagerDidSelectMissionNode",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNodeVisualController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionNodeVisualController);
}
inline void GlobalNamespace::MissionSelectionMapViewController::SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::BeatmapLevel* level) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "SongPlayerCrossfadeToLevelAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline void GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation(::System::Action* finishCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "ShowMissionClearedAnimation",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishCallback);
}
inline void GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                             "DeselectSelectedNode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionSelectionMapViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionSelectionMapViewController* GlobalNamespace::MissionSelectionMapViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionSelectionMapViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionSelectionMapViewController::MissionSelectionMapViewController() {}
