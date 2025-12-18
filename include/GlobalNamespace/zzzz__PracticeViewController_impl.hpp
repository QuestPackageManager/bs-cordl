#pragma once
// IWYU pragma private; include "GlobalNamespace/PracticeViewController.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__PracticeViewController_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeViewController_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "HMUI/zzzz__PercentSlider_def.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController__LoadSong_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController__LoadSong_d__32::*)()>(
    &::GlobalNamespace::PracticeViewController__LoadSong_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x5734be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController__LoadSong_d__32>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController__LoadSong_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController__LoadSong_d__32::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PracticeViewController__LoadSong_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5735114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController__LoadSong_d__32>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PracticeViewController__LoadSong_d__32::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController__LoadSong_d__32>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PracticeViewController__LoadSong_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController__LoadSong_d__32>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PracticeViewController__LoadSong_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PracticeViewController__LoadSong_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PracticeViewController>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PracticeViewController__LoadSong_d__32::PracticeViewController__LoadSong_d__32(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::PracticeViewController> __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PracticeViewController__LoadSong_d__32::PracticeViewController__LoadSong_d__32() {}
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.add_didPressPlayButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(::System::Action*)>(
    &::GlobalNamespace::PracticeViewController::add_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5734220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "add_didPressPlayButtonEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.remove_didPressPlayButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(::System::Action*)>(
    &::GlobalNamespace::PracticeViewController::remove_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57342cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "remove_didPressPlayButtonEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.get_practiceSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PracticeSettings* (::GlobalNamespace::PracticeViewController::*)()>(
    &::GlobalNamespace::PracticeViewController::get_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5734378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(),
                                                                               "get_practiceSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::PracticeViewController::*)(::ByRef<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::PracticeViewController::Init)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5734380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::PracticeViewController::DidActivate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x573459c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(bool, bool)>(
    &::GlobalNamespace::PracticeViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x573487c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.LoadSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PracticeViewController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::PracticeViewController::LoadSong)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57346fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "LoadSong", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.PlayPreview
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)()>(&::GlobalNamespace::PracticeViewController::PlayPreview)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x573494c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "PlayPreview",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.CancelSongLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)()>(
    &::GlobalNamespace::PracticeViewController::CancelSongLoading)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x57344ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(),
                                                                               "CancelSongLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.SetSongLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(float_t)>(
    &::GlobalNamespace::PracticeViewController::SetSongLength)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x573452c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "SetSongLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.SetLoader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(bool)>(&::GlobalNamespace::PracticeViewController::SetLoader)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5734aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "SetLoader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.GetSongTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PracticeViewController::*)()>(&::GlobalNamespace::PracticeViewController::GetSongTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5734a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "GetSongTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.HandleSongStartSliderValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(::HMUI::RangeValuesTextSlider*, float_t)>(
    &::GlobalNamespace::PracticeViewController::HandleSongStartSliderValueDidChange)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5734b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "HandleSongStartSliderValueDidChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.HandlePlayButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)()>(
    &::GlobalNamespace::PracticeViewController::HandlePlayButtonPressed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5734b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(),
                                                                               "HandlePlayButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)()>(&::GlobalNamespace::PracticeViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5734bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LevelBar>& GlobalNamespace::PracticeViewController::__cordl_internal_get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar> const& GlobalNamespace::PracticeViewController::__cordl_internal_get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::TimeSlider>& GlobalNamespace::PracticeViewController::__cordl_internal_get__songStartSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStartSlider;
}
constexpr ::UnityW<::HMUI::TimeSlider> const& GlobalNamespace::PracticeViewController::__cordl_internal_get__songStartSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStartSlider;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__songStartSlider(::UnityW<::HMUI::TimeSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songStartSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::PercentSlider>& GlobalNamespace::PracticeViewController::__cordl_internal_get__speedSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speedSlider;
}
constexpr ::UnityW<::HMUI::PercentSlider> const& GlobalNamespace::PracticeViewController::__cordl_internal_get__speedSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speedSlider;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__speedSlider(::UnityW<::HMUI::PercentSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____speedSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::PracticeViewController::__cordl_internal_get__playButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::PracticeViewController::__cordl_internal_get__playButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playButton;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__playButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PracticeViewController::__cordl_internal_get__loader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loader;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PracticeViewController::__cordl_internal_get__loader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loader;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__loader(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PracticeViewController::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PracticeViewController::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__value(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::PracticeViewController::__cordl_internal_get__enabledColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PracticeViewController::__cordl_internal_get__enabledColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledColor;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__enabledColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PracticeViewController::__cordl_internal_get__disabledColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PracticeViewController::__cordl_internal_get__disabledColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledColor;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__disabledColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledColor = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::PracticeViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::PracticeViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& GlobalNamespace::PracticeViewController::__cordl_internal_get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& GlobalNamespace::PracticeViewController::__cordl_internal_get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPreviewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& GlobalNamespace::PracticeViewController::__cordl_internal_get__perceivedLoudnessPerLevelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevelModel;
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel* const& GlobalNamespace::PracticeViewController::__cordl_internal_get__perceivedLoudnessPerLevelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevelModel;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____perceivedLoudnessPerLevelModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::PracticeViewController::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::PracticeViewController::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::PracticeViewController::__cordl_internal_get__beatmapLevelsEntitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& GlobalNamespace::PracticeViewController::__cordl_internal_get__beatmapLevelsEntitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsEntitlementModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::PracticeViewController::__cordl_internal_get__audioClipAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& GlobalNamespace::PracticeViewController::__cordl_internal_get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipAsyncLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PracticeViewController::__cordl_internal_get_didPressPlayButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPlayButtonEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PracticeViewController::__cordl_internal_get_didPressPlayButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPlayButtonEvent;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set_didPressPlayButtonEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressPlayButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PracticeSettings*& GlobalNamespace::PracticeViewController::__cordl_internal_get__practiceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings;
}
constexpr ::GlobalNamespace::PracticeSettings* const& GlobalNamespace::PracticeViewController::__cordl_internal_get__practiceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__practiceSettings(::GlobalNamespace::PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____practiceSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PracticeViewController::__cordl_internal_get__currentPlayingStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPlayingStartTime;
}
constexpr float_t const& GlobalNamespace::PracticeViewController::__cordl_internal_get__currentPlayingStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPlayingStartTime;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__currentPlayingStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPlayingStartTime = value;
}
constexpr float_t& GlobalNamespace::PracticeViewController::__cordl_internal_get__maxStartSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxStartSongTime;
}
constexpr float_t const& GlobalNamespace::PracticeViewController::__cordl_internal_get__maxStartSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxStartSongTime;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__maxStartSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxStartSongTime = value;
}
constexpr float_t& GlobalNamespace::PracticeViewController::__cordl_internal_get__songLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songLength;
}
constexpr float_t const& GlobalNamespace::PracticeViewController::__cordl_internal_get__songLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songLength;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__songLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songLength = value;
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::PracticeViewController::__cordl_internal_get__getAudioClipTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getAudioClipTask;
}
constexpr ::System::Threading::Tasks::Task* const& GlobalNamespace::PracticeViewController::__cordl_internal_get__getAudioClipTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getAudioClipTask;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__getAudioClipTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getAudioClipTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::PracticeViewController::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::PracticeViewController::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::PracticeViewController::__cordl_internal_get__beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::PracticeViewController::__cordl_internal_get__beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::PracticeViewController::__cordl_internal_get__beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::PracticeViewController::__cordl_internal_get__beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::PracticeViewController::__cordl_internal_get__audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::PracticeViewController::__cordl_internal_get__audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr void GlobalNamespace::PracticeViewController::__cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PracticeViewController::add_didPressPlayButtonEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "add_didPressPlayButtonEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PracticeViewController::remove_didPressPlayButtonEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "remove_didPressPlayButtonEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PracticeSettings* GlobalNamespace::PracticeViewController::get_practiceSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(),
                                                                             "get_practiceSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PracticeSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PracticeViewController::Init(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapKey, beatmapLevel);
}
inline void GlobalNamespace::PracticeViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::PracticeViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PracticeViewController::LoadSong(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "LoadSong", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::PracticeViewController::PlayPreview() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "PlayPreview",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PracticeViewController::CancelSongLoading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(),
                                                                             "CancelSongLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PracticeViewController::SetSongLength(float_t songLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "SetSongLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songLength);
}
inline void GlobalNamespace::PracticeViewController::SetLoader(bool loading) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "SetLoader",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loading);
}
inline float_t GlobalNamespace::PracticeViewController::GetSongTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "GetSongTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::PracticeViewController::HandleSongStartSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), "HandleSongStartSliderValueDidChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slider, value);
}
inline void GlobalNamespace::PracticeViewController::HandlePlayButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(),
                                                                             "HandlePlayButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PracticeViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PracticeViewController* GlobalNamespace::PracticeViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PracticeViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PracticeViewController::PracticeViewController() {}
