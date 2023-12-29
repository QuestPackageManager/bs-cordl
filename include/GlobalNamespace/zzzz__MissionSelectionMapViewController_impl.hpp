#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "GlobalNamespace/zzzz__MissionSelectionMapViewController_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "GlobalNamespace/zzzz__MissionSelectionMapViewController_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeVisualController_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeSelectionManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__MissionMapAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::*)()>(
    &::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2188de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0._SongPlayerCrossfadeToLevelAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::*)()>(
    &::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::_SongPlayerCrossfadeToLevelAsync_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2188dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*>::get(),
                                                 "<SongPlayerCrossfadeToLevelAsync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MissionSelectionMapViewController*& GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionSelectionMapViewController*> const&
GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::__set___4__this(::GlobalNamespace::MissionSelectionMapViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::__get_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::__get_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr void GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::__set_level(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___level)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0* GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*>());
}
inline void GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::_SongPlayerCrossfadeToLevelAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*>::get(),
                                               "<SongPlayerCrossfadeToLevelAsync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0::__MissionSelectionMapViewController____c__DisplayClass15_0() {}
//  Writing Method size for method: ::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::*)()>(
    &::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x2188e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21892b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MissionSelectionMapViewController*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty:
// "::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_musicVolume_5__2", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::MissionSelectionMapViewController* __4__this,
    ::GlobalNamespace::IPreviewBeatmapLevel* level, ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0* __8__1, float_t _musicVolume_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->level = level;
  this->__8__1 = __8__1;
  this->_musicVolume_5__2 = _musicVolume_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.add_didSelectMissionLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*)>(
        &::GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21888a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "add_didSelectMissionLevelEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.remove_didSelectMissionLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*)>(
        &::GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2188950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "remove_didSelectMissionLevelEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.get_animatedUpdateIsRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MissionSelectionMapViewController::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2188a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                               "get_animatedUpdateIsRequired", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MissionSelectionMapViewController::DidActivate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2188a1c;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2188b60;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2188c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "HandleMissionNodeSelectionManagerDidSelectMissionNode",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNodeVisualController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.SongPlayerCrossfadeToLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::SongPlayerCrossfadeToLevelAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2188cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "SongPlayerCrossfadeToLevelAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.ShowMissionClearedAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)(::System::Action*)>(
    &::GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2188d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "ShowMissionClearedAnimation",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController.DeselectSelectedNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2188dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                               "DeselectSelectedNode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionSelectionMapViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionSelectionMapViewController::*)()>(
    &::GlobalNamespace::MissionSelectionMapViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2188ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::ScrollView*& GlobalNamespace::MissionSelectionMapViewController::__get__mapScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapScrollView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ScrollView*> const& GlobalNamespace::MissionSelectionMapViewController::__get__mapScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapScrollView;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__mapScrollView(::HMUI::ScrollView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mapScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionNodeSelectionManager*& GlobalNamespace::MissionSelectionMapViewController::__get__missionNodeSelectionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodeSelectionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeSelectionManager*> const& GlobalNamespace::MissionSelectionMapViewController::__get__missionNodeSelectionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodeSelectionManager;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__missionNodeSelectionManager(::GlobalNamespace::MissionNodeSelectionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNodeSelectionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionMapAnimationController*& GlobalNamespace::MissionSelectionMapViewController::__get__missionMapAnimationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionMapAnimationController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionMapAnimationController*> const&
GlobalNamespace::MissionSelectionMapViewController::__get__missionMapAnimationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionMapAnimationController;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__missionMapAnimationController(::GlobalNamespace::MissionMapAnimationController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionMapAnimationController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPreviewPlayer*& GlobalNamespace::MissionSelectionMapViewController::__get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& GlobalNamespace::MissionSelectionMapViewController::__get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPreviewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& GlobalNamespace::MissionSelectionMapViewController::__get__perceivedLoudnessPerLevelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevelModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const&
GlobalNamespace::MissionSelectionMapViewController::__get__perceivedLoudnessPerLevelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevelModel;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____perceivedLoudnessPerLevelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::MissionSelectionMapViewController::__get__audioClipAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& GlobalNamespace::MissionSelectionMapViewController::__get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipAsyncLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*&
GlobalNamespace::MissionSelectionMapViewController::__get_didSelectMissionLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectMissionLevelEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*> const&
GlobalNamespace::MissionSelectionMapViewController::__get_didSelectMissionLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectMissionLevelEvent;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set_didSelectMissionLevelEvent(
    ::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectMissionLevelEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionNode*& GlobalNamespace::MissionSelectionMapViewController::__get__selectedMissionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedMissionNode;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> const& GlobalNamespace::MissionSelectionMapViewController::__get__selectedMissionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedMissionNode;
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__selectedMissionNode(::GlobalNamespace::MissionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedMissionNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "add_didSelectMissionLevelEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent(
    ::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "remove_didSelectMissionLevelEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                             "get_animatedUpdateIsRequired", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionSelectionMapViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MissionSelectionMapViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "DidDeactivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::MissionSelectionMapViewController::HandleMissionNodeSelectionManagerDidSelectMissionNode(::GlobalNamespace::MissionNodeVisualController* missionNodeVisualController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "HandleMissionNodeSelectionManagerDidSelectMissionNode",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNodeVisualController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionNodeVisualController);
}
inline void GlobalNamespace::MissionSelectionMapViewController::SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* level) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "SongPlayerCrossfadeToLevelAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline void GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation(::System::Action* finishCallback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(), "ShowMissionClearedAnimation",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishCallback);
}
inline void GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                             "DeselectSelectedNode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionSelectionMapViewController* GlobalNamespace::MissionSelectionMapViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionSelectionMapViewController*>());
}
inline void GlobalNamespace::MissionSelectionMapViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionSelectionMapViewController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionSelectionMapViewController::MissionSelectionMapViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
