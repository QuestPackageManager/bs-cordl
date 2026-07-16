#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionSelectionMapViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595dca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0._SongPlayerCrossfadeToLevelAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::_SongPlayerCrossfadeToLevelAsync_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x595dca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*>(), { "<SongPlayerCrossfadeToLevelAsync>b__0", {}, {} })));
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
  this->_____4__this = value;
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
  this->___level = value;
}
inline void GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::_SongPlayerCrossfadeToLevelAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*>(), { "<SongPlayerCrossfadeToLevelAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0* GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionSelectionMapViewController___c__DisplayClass16_0::MissionSelectionMapViewController___c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x595dcc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595e03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::MissionSelectionMapViewController__SongPlayerCrossfadeToLevelAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595d710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(),
                                         { "add_didSelectMissionLevelEvent",
                                           {},
                                           { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.remove_didSelectMissionLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595d7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(),
                                         { "remove_didSelectMissionLevelEvent",
                                           {},
                                           { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.get_animatedUpdateIsRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionSelectionMapViewController::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x595d890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), { "get_animatedUpdateIsRequired", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MissionSelectionMapViewController::DidActivate)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x595d8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(bool, bool)>(
    &::GlobalNamespace::MissionSelectionMapViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x595d9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.HandleMissionNodeSelectionManagerDidSelectMissionNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(::GlobalNamespace::MissionNodeVisualController*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::HandleMissionNodeSelectionManagerDidSelectMissionNode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x595db2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(),
                                                             { "HandleMissionNodeSelectionManagerDidSelectMissionNode", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeVisualController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.SongPlayerCrossfadeToLevelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::SongPlayerCrossfadeToLevelAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x595dbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(),
                                                                                           { "SongPlayerCrossfadeToLevelAsync", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.ShowMissionClearedAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(::System::Action*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x595dc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), { "ShowMissionClearedAnimation", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.DeselectSelectedNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)()>(&::GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x595dc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), { "DeselectSelectedNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)()>(&::GlobalNamespace::MissionSelectionMapViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595dc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), { ".ctor", {}, {} })));
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
  this->____mapScrollView = value;
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
  this->____missionNodeSelectionManager = value;
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
  this->____missionMapAnimationController = value;
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
  this->____songPreviewPlayer = value;
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
  this->____perceivedLoudnessPerLevelModel = value;
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
  this->____audioClipAsyncLoader = value;
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
  this->____beatmapLevelsModel = value;
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
  this->___didSelectMissionLevelEvent = value;
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
  this->____selectedMissionNode = value;
}
inline void GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(),
                                       { "add_didSelectMissionLevelEvent",
                                         {},
                                         { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(),
                                       { "remove_didSelectMissionLevelEvent",
                                         {},
                                         { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), { "get_animatedUpdateIsRequired", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MissionSelectionMapViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MissionSelectionMapViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::MissionSelectionMapViewController::HandleMissionNodeSelectionManagerDidSelectMissionNode(::GlobalNamespace::MissionNodeVisualController* missionNodeVisualController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(),
                                                           { "HandleMissionNodeSelectionManagerDidSelectMissionNode", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeVisualController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionNodeVisualController);
}
inline void GlobalNamespace::MissionSelectionMapViewController::SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::BeatmapLevel* level) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(),
                                                                                         { "SongPlayerCrossfadeToLevelAsync", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation(::System::Action* finishCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), { "ShowMissionClearedAnimation", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finishCallback);
}
inline void GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), { "DeselectSelectedNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionSelectionMapViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionSelectionMapViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionSelectionMapViewController* GlobalNamespace::MissionSelectionMapViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionSelectionMapViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionSelectionMapViewController::MissionSelectionMapViewController() {}
