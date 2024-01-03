#pragma once
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailView_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSegmentedControlController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__LevelParamsPanel_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailView_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultySegmentedControlController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::*)()>(
    &::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x22ea818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22ead9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailView*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "selectedDifficultyBeatmap", ty: "::GlobalNamespace::IDifficultyBeatmap*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::StandardLevelDetailView* __4__this,
    ::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->selectedDifficultyBeatmap = selectedDifficultyBeatmap;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.add_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(&::GlobalNamespace::StandardLevelDetailView::add_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e9ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "add_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.remove_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(&::GlobalNamespace::StandardLevelDetailView::remove_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e9b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "remove_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.add_didFavoriteToggleChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*)>(&::GlobalNamespace::StandardLevelDetailView::add_didFavoriteToggleChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e9c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "add_didFavoriteToggleChangeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.remove_didFavoriteToggleChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*)>(&::GlobalNamespace::StandardLevelDetailView::remove_didFavoriteToggleChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e9ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "remove_didFavoriteToggleChangeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.get_selectedDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap* (::GlobalNamespace::StandardLevelDetailView::*)()>(
    &::GlobalNamespace::StandardLevelDetailView::get_selectedDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e9d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                                                               "get_selectedDifficultyBeatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.get_actionButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (::GlobalNamespace::StandardLevelDetailView::*)()>(
    &::GlobalNamespace::StandardLevelDetailView::get_actionButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e9d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                                                               "get_actionButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.set_actionButtonText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::StringW)>(
    &::GlobalNamespace::StandardLevelDetailView::set_actionButtonText)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e9da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "set_actionButtonText",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.get_practiceButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (::GlobalNamespace::StandardLevelDetailView::*)()>(
    &::GlobalNamespace::StandardLevelDetailView::get_practiceButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e9dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                                                               "get_practiceButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.set_hidePracticeButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(bool)>(
    &::GlobalNamespace::StandardLevelDetailView::set_hidePracticeButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22e9dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "set_hidePracticeButton",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.SetContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(
    ::GlobalNamespace::IBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::StandardLevelDetailView::SetContent)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x22e9e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "SetContent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::Awake)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x22ea290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::OnDestroy)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x22ea414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::BeatmapDifficultySegmentedControlController*, ::GlobalNamespace::BeatmapDifficulty)>(
        &::GlobalNamespace::StandardLevelDetailView::HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22ea58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                    "HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, ::GlobalNamespace::BeatmapCharacteristicSO*)>(
        &::GlobalNamespace::StandardLevelDetailView::HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x22ea5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                    "HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.RefreshContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(
    &::GlobalNamespace::StandardLevelDetailView::RefreshContent)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x22ea10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                                                               "RefreshContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.SetContentForBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::IDifficultyBeatmap*)>(
    &::GlobalNamespace::StandardLevelDetailView::SetContentForBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22ea748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "SetContentForBeatmapDataAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.ClearContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::ClearContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ea7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                                                               "ClearContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ea7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView._Awake_b__29_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(bool)>(
    &::GlobalNamespace::StandardLevelDetailView::_Awake_b__29_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22ea7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "<Awake>b__29_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::StandardLevelDetailView::__get__actionButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::StandardLevelDetailView::__get__actionButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButton;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__actionButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____actionButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::StandardLevelDetailView::__get__actionButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButtonText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::StandardLevelDetailView::__get__actionButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButtonText;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__actionButtonText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____actionButtonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::StandardLevelDetailView::__get__practiceButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::StandardLevelDetailView::__get__practiceButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceButton;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__practiceButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____practiceButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelBar*& GlobalNamespace::StandardLevelDetailView::__get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> const& GlobalNamespace::StandardLevelDetailView::__get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__levelBar(::GlobalNamespace::LevelBar* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelParamsPanel*& GlobalNamespace::StandardLevelDetailView::__get__levelParamsPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelParamsPanel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelParamsPanel*> const& GlobalNamespace::StandardLevelDetailView::__get__levelParamsPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelParamsPanel;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__levelParamsPanel(::GlobalNamespace::LevelParamsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelParamsPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficultySegmentedControlController*& GlobalNamespace::StandardLevelDetailView::__get__beatmapDifficultySegmentedControlController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficultySegmentedControlController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDifficultySegmentedControlController*> const&
GlobalNamespace::StandardLevelDetailView::__get__beatmapDifficultySegmentedControlController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficultySegmentedControlController;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__beatmapDifficultySegmentedControlController(::GlobalNamespace::BeatmapDifficultySegmentedControlController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDifficultySegmentedControlController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*& GlobalNamespace::StandardLevelDetailView::__get__beatmapCharacteristicSegmentedControlController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicSegmentedControlController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*> const&
GlobalNamespace::StandardLevelDetailView::__get__beatmapCharacteristicSegmentedControlController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicSegmentedControlController;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__beatmapCharacteristicSegmentedControlController(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicSegmentedControlController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::StandardLevelDetailView::__get__favoriteToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoriteToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::StandardLevelDetailView::__get__favoriteToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoriteToggle;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__favoriteToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____favoriteToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*& GlobalNamespace::StandardLevelDetailView::__get_didChangeDifficultyBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*> const&
GlobalNamespace::StandardLevelDetailView::__get_didChangeDifficultyBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr void
GlobalNamespace::StandardLevelDetailView::__set_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeDifficultyBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*& GlobalNamespace::StandardLevelDetailView::__get_didFavoriteToggleChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFavoriteToggleChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*> const&
GlobalNamespace::StandardLevelDetailView::__get_didFavoriteToggleChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFavoriteToggleChangeEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set_didFavoriteToggleChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFavoriteToggleChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLevel*& GlobalNamespace::StandardLevelDetailView::__get__level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> const& GlobalNamespace::StandardLevelDetailView::__get__level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__level(::GlobalNamespace::IBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____level)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerData*& GlobalNamespace::StandardLevelDetailView::__get__playerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> const& GlobalNamespace::StandardLevelDetailView::__get__playerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerData;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__playerData(::GlobalNamespace::PlayerData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap*& GlobalNamespace::StandardLevelDetailView::__get__selectedDifficultyBeatmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedDifficultyBeatmap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& GlobalNamespace::StandardLevelDetailView::__get__selectedDifficultyBeatmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedDifficultyBeatmap;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__selectedDifficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedDifficultyBeatmap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::StandardLevelDetailView::__get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& GlobalNamespace::StandardLevelDetailView::__get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggleBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
GlobalNamespace::StandardLevelDetailView::add_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "add_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::StandardLevelDetailView::remove_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "remove_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailView::add_didFavoriteToggleChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "add_didFavoriteToggleChangeEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailView::remove_didFavoriteToggleChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "remove_didFavoriteToggleChangeEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::StandardLevelDetailView::get_selectedDifficultyBeatmap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                                                             "get_selectedDifficultyBeatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmap*, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Button* GlobalNamespace::StandardLevelDetailView::get_actionButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                                                             "get_actionButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Button*, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::set_actionButtonText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "set_actionButtonText",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::Button* GlobalNamespace::StandardLevelDetailView::get_practiceButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                                                             "get_practiceButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Button*, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::set_hidePracticeButton(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "set_hidePracticeButton",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailView::SetContent(::GlobalNamespace::IBeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty defaultDifficulty,
                                                                 ::GlobalNamespace::BeatmapCharacteristicSO* defaultBeatmapCharacteristic, ::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "SetContent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, defaultDifficulty, defaultBeatmapCharacteristic, playerData);
}
inline void GlobalNamespace::StandardLevelDetailView::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(::GlobalNamespace::BeatmapDifficultySegmentedControlController* controller,
                                                                                                                           ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                  "HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller, difficulty);
}
inline void GlobalNamespace::StandardLevelDetailView::HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(
    ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* controller, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                  "HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller, beatmapCharacteristic);
}
inline void GlobalNamespace::StandardLevelDetailView::RefreshContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(),
                                                                             "RefreshContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::SetContentForBeatmapDataAsync(::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "SetContentForBeatmapDataAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectedDifficultyBeatmap);
}
inline void GlobalNamespace::StandardLevelDetailView::ClearContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "ClearContent",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelDetailView* GlobalNamespace::StandardLevelDetailView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardLevelDetailView*>());
}
inline void GlobalNamespace::StandardLevelDetailView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::_Awake_b__29_0(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelDetailView*>::get(), "<Awake>b__29_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailView::StandardLevelDetailView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
